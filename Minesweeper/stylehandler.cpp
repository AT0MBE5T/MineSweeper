#include "stylehandler.h"
#include <QBuffer>
#include <QFontDatabase>
#include <QDebug>

StyleHandler::StyleHandler() {}


QString StyleHandler::getDefaultCellStyle()
{
    return "QPushButton{"
           "background-color: #f0f0f0;"
           "border: 1px solid #a0a0a0;"
           "}"
           "QPushButton::hover{"
           "background-color: rgb(200, 200, 200);"
          "}";
}

QString StyleHandler::getZeroMinesStyle()
{
    return "QPushButton{"
           "background-color: #CDCDCD;"
           "border: 1px solid #a0a0a0;"
           "}";
}

QPixmap StyleHandler::getOneMineStyle()
{
    static QPixmap icon(":/img/img/one.png");
    return icon;
}

QPixmap StyleHandler::getTwoMinesStyle()
{
    static QPixmap icon(":/img/img/two.png");
    return icon;
}

QPixmap StyleHandler::getThreeMinesStyle()
{
    static QPixmap icon(":/img/img/three.png");
    return icon;
}

QPixmap StyleHandler::getFourMinesStyle()
{
    static QPixmap icon(":/img/img/four.png");
    return icon;
}

QPixmap StyleHandler::getFiveMinesStyle()
{
    static QPixmap icon(":/img/img/five.png");
    return icon;
}

QPixmap StyleHandler::getSixMinesStyle()
{
    static QPixmap icon(":/img/img/six.png");
    return icon;
}

QPixmap StyleHandler::getSevenMinesStyle()
{
    static QPixmap icon(":/img/img/seven.png");
    return icon;
}

QPixmap StyleHandler::getEightMinesStyle()
{
    static QPixmap icon(":/img/img/eight.png");
    return icon;
}

QPixmap StyleHandler::getMineStyle()
{
    static QPixmap icon(":/img/img/bomb.png");
    return icon;
}

QPixmap StyleHandler::getFlagStyle()
{
    static QPixmap icon(":/img/img/flag.png");
    return icon;
}

QString StyleHandler::getSmileStyle()
{
    return "QPushButton{"
           "background: none;"
           "border: none;"
           "image: url(:/img/img/smile.png);"
           "}";
}

QString StyleHandler::getLoseSmileStyle()
{
    return "QPushButton{"
           "background: none;"
           "border: none;"
           "image: url(:/img/img/sadness.png);"
           "}";
}

QString StyleHandler::getTimerStyle()
{
    return "QLCDNumber {"
        "background-color: #2D3047;"
           "}";
}

QString StyleHandler::getButtonStyle()
{
    return
        "QPushButton {"
            "font-family: 'Exo 2', sans-serif;"
            "background-color: #DF7651;"
            "border-radius: 10%;"
            "color: white;"
            "font-size: 40px;"
            "font-weight: bold;"
            "text-align: center;"
            "text-decoration: none;"
        "}"
        "QPushButton:hover {"
            "background-color: #FF9671;"
        "}"
        "QPushButton:pressed{"
            "background-color: #BF5631;"
        "}";
}

QString StyleHandler::getTextStyle()
{
    return "QLabel{"
           "font-family: 'Exo 2', sans-serif;"
           "font-size: 20px;"
           "}";
}

QString StyleHandler::getComboBoxStyle()
{
    return
        "QComboBox {\
        font-family: 'Exo 2', sans-serif;\
        font-size: 20px;\
        border: 2px solid #DF7651;\
        border-radius: 5px;\
        background-color: #FFFFFF;\
    }";
}

QString StyleHandler::getCreateFieldActiveStyle()
{
    return "QPushButton {"
           "font-family: 'Exo 2', sans-serif;"
           "background-color: #DF7651;"
           "color: white;"
           "font-size: 20px;"
           "font-weight: bold;"
           "text-align: center;"
           "text-decoration: none;"
           "}"
           "QPushButton:hover {"
           "background-color: #FF9671;"
           "}"
           "QPushButton:pressed{"
           "background-color: #BF5631;"
           "}";
}

QString StyleHandler::getCreateFieldPassiveStyle()
{
    return "QPushButton {"
           "font-family: 'Exo 2', sans-serif;"
           "background-color: #BF5631;"
           "color: white;"
           "font-size: 20px;"
           "font-weight: bold;"
           "text-align: center;"
           "text-decoration: none;"
           "}"
           "QPushButton:hover {"
           "background-color: #DF7651;"
           "}"
           "QPushButton:pressed{"
           "background-color: #9F3611;"
           "}";
}

QString StyleHandler::getInputStyle()
{
    return
        "QLineEdit {"
        "background-color: #ffffff;"
        "border: 1px solid #FF9671;"
        "border-radius: 5px;"
        "padding: 5px;"
        "font-family: 'Exo 2', sans-serif;"
        "font-weight: bold;"
        "}"
        "QLineEdit:focus{"
        "border: 1px solid #DF7651;"
           "}";
}

QString StyleHandler::getBGStyle()
{
    return "background-color: #E3DCD2;";
}

void StyleHandler::setFonts()
{
    QFontDatabase::addApplicationFont(":/fonts/fonts/Exo2-VariableFont_wght.ttf");
}
