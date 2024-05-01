#include "mainarea.h"
#include "ui_mainarea.h"

MainArea::MainArea(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainArea)
    , rules(nullptr)
    , creating(nullptr)

{
    ui->setupUi(this);
    StyleHandler::setFonts();
    Language::readLangs();
    Language::setIndexes();
    setStyles();
    setDefaultWindow();
    setText();
    setConnects();
}

void MainArea::setLanguage(QVector<QString>* _currentLang)
{
    currentLang = _currentLang;
}

void MainArea::setText()
{
    this->setWindowTitle(currentLang->at(Language::getIndex("mineSweeper")));
    ui->langChoice->setItemText(0, currentLang->at(Language::getIndex("uaLang")));
    ui->langChoice->setItemText(1, currentLang->at(Language::getIndex("engLang")));
    ui->playButton->setText(currentLang->at(Language::getIndex("playButton")));
    ui->rulesButton->setText(currentLang->at(Language::getIndex("rulesText")));
    ui->exitButton->setText(currentLang->at(Language::getIndex("exit")));
}

void MainArea::setConnects()
{
    connect(ui->langChoice, &QComboBox::currentIndexChanged, this, &MainArea::langPicked);
    connect(ui->rulesButton, &QPushButton::clicked, this, &MainArea::rulesClicked);
    connect(ui->playButton, &QPushButton::clicked, this, &MainArea::playClicked);
    connect(ui->exitButton, &QPushButton::clicked, this, [&](){
        this->close();
    });
}

void MainArea::setDefaultWindow()
{
    setLanguage(&Language::getUkrLanguage());
    ui->logoLabel->setStyleSheet("image: url(:/img/img/logo.png);");
    ui->langChoice->addItem(QIcon(":/img/img/ukrFlag.png"), "");
    ui->langChoice->addItem(QIcon(":/img/img/usaFlag.png"), "");
    this->setWindowIcon(QIcon(":/img/img/logo.png"));
    QSize programSize = this->size();
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = screenGeometry.center().x()-programSize.width()/2;
    int y = screenGeometry.center().y()-programSize.height()/2;
    this->move(x, y);
}

MainArea::~MainArea()
{
    delete rules;
    delete creating;
    delete ui;
}

void MainArea::langPicked(int _id)
{
    setLanguage(_id ? &Language::getEngLanguage() : &Language::getUkrLanguage());
    setText();
}

void MainArea::rulesClicked()
{
    if(!rules)
        rules = new Rules;
    rules->setLanguage(currentLang);
    rules->setText();
    rules->exec();
}

void MainArea::playClicked()
{
    if(!creating)
        creating = new CreateField;
    creating->setLang(currentLang);
    creating->setText();
    creating->setDefaultSettings();
    creating->setMainAreaPointer(this);
    creating->exec();
}

void MainArea::setStyles()
{
    ui->exitButton->setStyleSheet(StyleHandler::getButtonStyle());
    ui->playButton->setStyleSheet(StyleHandler::getButtonStyle());
    ui->rulesButton->setStyleSheet(StyleHandler::getButtonStyle());
    this->setStyleSheet(StyleHandler::getBGStyle());
    ui->langChoice->setStyleSheet(StyleHandler::getComboBoxStyle());
}
