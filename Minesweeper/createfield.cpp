#include "createfield.h"
#include "ui_createfield.h"
#include "mainarea.h"

CreateField::CreateField(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateField)
    , validator(new QIntValidator(0, 100))
    , isCreateNew(false)
    , gameArea(nullptr)
{
    ui->setupUi(this);
    setStyles();
    setValidators();
    setConnects();
}

void CreateField::setLang(QVector<QString> *_lang)
{
    lang = _lang;
}

void CreateField::setText()
{
    ui->defaultSizes->setItemText(0, lang->at(Language::getIndex("selectStandartSize")));
    ui->generateLabel->setText(lang->at(Language::getIndex("howToCreateFieldLabel")));
    ui->readFileBtn->setText(lang->at(Language::getIndex("readFileChoice")));
    ui->createNewBtn->setText(lang->at(Language::getIndex("generateChoice")));
    ui->sizeLabel->setText(lang->at(Language::getIndex("sizeFieldInput")));
    ui->minesLabel->setText(lang->at(Language::getIndex("amountMinesInput")));
    ui->createButton->setText(lang->at(Language::getIndex("createButton")));
    this->setWindowTitle(lang->at(Language::getIndex("mineSweeper")));
}

void CreateField::setDefaultSettings()
{
    clearInputs();
    ui->defaultSizes->setCurrentIndex(0);
    setStateByCreateNew(false);
}

void CreateField::setStateByCreateNew(bool _isCreateNew)
{
    ui->readFileBtn->setStyleSheet(_isCreateNew?StyleHandler::getCreateFieldPassiveStyle():StyleHandler::getCreateFieldActiveStyle());
    ui->createNewBtn->setStyleSheet(!_isCreateNew?StyleHandler::getCreateFieldPassiveStyle():StyleHandler::getCreateFieldActiveStyle());
    _isCreateNew?ui->defaultSizes->show():ui->defaultSizes->hide();
    _isCreateNew?ui->minesLabel->show():ui->minesLabel->hide();
    _isCreateNew?ui->sizeLabel->show():ui->sizeLabel->hide();
    _isCreateNew?ui->xLabel->show():ui->xLabel->hide();
    _isCreateNew?ui->heightInput->show():ui->heightInput->hide();
    _isCreateNew?ui->widthInput->show():ui->widthInput->hide();
    _isCreateNew?ui->minesInput->show():ui->minesInput->hide();
    ui->createButton->setText(lang->at(Language::getIndex(_isCreateNew?"createButton":"readButton")));
    isCreateNew = _isCreateNew;
}

void CreateField::setMainAreaPointer(MainArea *_mainArea)
{
    mainArea = _mainArea;
}

void CreateField::setValidators()
{
    ui->heightInput->setValidator(validator);
    ui->widthInput->setValidator(validator);
    ui->minesInput->setValidator(validator);
}

void CreateField::setStyles()
{
    ui->readFileBtn->setStyleSheet(StyleHandler::getCreateFieldActiveStyle());
    ui->createNewBtn->setStyleSheet(StyleHandler::getCreateFieldPassiveStyle());
    ui->defaultSizes->setStyleSheet(StyleHandler::getComboBoxStyle());
    ui->createButton->setStyleSheet(StyleHandler::getButtonStyle());
    ui->generateLabel->setStyleSheet(StyleHandler::getTextStyle());
    ui->minesLabel->setStyleSheet(StyleHandler::getTextStyle());
    ui->sizeLabel->setStyleSheet(StyleHandler::getTextStyle());
    ui->xLabel->setStyleSheet(StyleHandler::getTextStyle());
    ui->heightInput->setStyleSheet(StyleHandler::getInputStyle());
    ui->widthInput->setStyleSheet(StyleHandler::getInputStyle());
    ui->minesInput->setStyleSheet(StyleHandler::getInputStyle());
    this->setStyleSheet(StyleHandler::getBGStyle());
    this->setWindowIcon(QIcon(":/img/img/logo.png"));
}

void CreateField::setConnects()
{
    connect(ui->createButton, &QPushButton::clicked, this, &CreateField::createButtonClicked);
    connect(ui->defaultSizes, &QComboBox::activated, this, &CreateField::selectDefaultSizes);
    connect(ui->createNewBtn, &QPushButton::clicked, this, [&](){
        setStateByCreateNew(true);
    });
    connect(ui->readFileBtn, &QPushButton::clicked, this, [&](){
        setStateByCreateNew(false);
    });
}

bool CreateField::checkInputs(int _rows, int _cols, int _mines)
{
    int maxMines = std::ceil(_rows*_cols*maxMinesRatio);
    int minMines = std::ceil(_rows*_cols*minMinesRatio);
    QList<QScreen *> screens = QGuiApplication::screens();
    int width = screens[0]->geometry().width();
    int height = screens[0]->geometry().height();

    maxRows = std::floor(height/50-5);
    maxCols = std::floor(width/50-5);

    if((_rows < minSize || _rows > maxRows) || (_cols < minSize || _cols > maxCols)){
        QMessageBox::warning(this, lang->at(Language::getIndex("mineSweeper")), lang->at(Language::getIndex("wrongSize")) + ' ' + QString::number(minSize) + "x" + QString::number(minSize) + " - " + QString::number(maxRows) + "x" + QString::number(maxCols));
        return false;
    }
    if(maxMines < _mines || minMines > _mines){
        QMessageBox::warning(this, lang->at(Language::getIndex("mineSweeper")), lang->at(Language::getIndex("wrongMines")) + ' ' + QString::number(minMines) + " - " + QString::number(maxMines));
        return false;
    }
    return true;
}

void CreateField::fillInputs(const QString &_width, const QString &_height, const QString &_mines)
{
    ui->widthInput->setText(_width);
    ui->heightInput->setText(_height);
    ui->minesInput->setText(_mines);
}

bool CreateField::readField(int& _rows, int& _cols, int& _mines)
{
    Field field;
    try{
        field = gameArea->readMatrixFromFile();
    }catch(const QString& e){
        QMessageBox::critical(this, lang->at(Language::getIndex("mineSweeper")), e);
        mainArea->show();
        return false;
    }
    _rows = field.getRows();
    _cols = field.getCols();
    _mines = field.getMines();
    gameArea->setReadField(field);
    return true;
}

CreateField::~CreateField()
{
    delete gameArea;
    delete validator;
    delete ui;
}

void CreateField::selectDefaultSizes(int _index)
{
    if(!_index)return;
    const int widthIndex = 0;
    const int heightIndex = 2;
    const int minesIndex = 4;
    QStringList element = ui->defaultSizes->currentText().split(" ", Qt::SkipEmptyParts);
    fillInputs(element[widthIndex], element[heightIndex], element[minesIndex]);
}

void CreateField::createButtonClicked()
{
    int rows = ui->widthInput->text().toInt();
    int cols = ui->heightInput->text().toInt();
    int mines = ui->minesInput->text().toInt();
    if(isCreateNew && !checkInputs(ui->widthInput->text().toInt(), ui->heightInput->text().toInt(), ui->minesInput->text().toInt()))
        return;
    this->close();
    mainArea->hide();
    if(!gameArea) gameArea = new GameArea;
    gameArea->setLang(lang);
    if(!isCreateNew && !readField(rows, cols, mines))return;
    gameArea->setFieldParams(rows, cols, mines);
    gameArea->setDefaultSettings();
    gameArea->spawnField();
    gameArea->setMainAreaPointer(mainArea);
    QMessageBox::information(this, lang->at(Language::getIndex("mineSweeper")), lang->at(Language::getIndex("fieldCreated")));
    gameArea->show();
}

void CreateField::clearInputs()
{
    ui->heightInput->clear();
    ui->minesInput->clear();
    ui->widthInput->clear();
}

