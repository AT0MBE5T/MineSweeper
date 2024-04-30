#include "rules.h"
#include "ui_rules.h"

Rules::Rules(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Rules)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/img/img/logo.png"));
    setStyles();
}

void Rules::setText()
{
    this->setWindowTitle(lang->at(Language::getIndex("mineSweeper")));
    ui->headerLabel->setText(lang->at(Language::getIndex("rulesText")));
    ui->rulesLabel->setText(lang->at(Language::getIndex("goalGameRule")));
    for(int i=rulesStart; i <= rulesEnd; ++i){
        ui->rulesLabel->setText(ui->rulesLabel->text() + '\n' + lang->at(i));
    }
}

void Rules::setStyles()
{
    ui->rulesLabel->setStyleSheet(StyleHandler::getTextStyle());
    ui->headerLabel->setStyleSheet(StyleHandler::getTextStyle());
    this->setStyleSheet(StyleHandler::getBGStyle());
}

void Rules::setLanguage(QVector<QString> *_lang)
{
    lang = _lang;
}

Rules::~Rules()
{
    lang=nullptr;
    delete ui;
}
