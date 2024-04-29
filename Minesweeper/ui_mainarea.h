/********************************************************************************
** Form generated from reading UI file 'mainarea.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAREA_H
#define UI_MAINAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainArea
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *rulesButton;
    QSpacerItem *verticalSpacer;
    QLabel *logoLabel;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *langChoice;
    QPushButton *playButton;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainArea)
    {
        if (MainArea->objectName().isEmpty())
            MainArea->setObjectName("MainArea");
        MainArea->resize(1715, 1014);
        centralwidget = new QWidget(MainArea);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        rulesButton = new QPushButton(centralwidget);
        rulesButton->setObjectName("rulesButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(rulesButton->sizePolicy().hasHeightForWidth());
        rulesButton->setSizePolicy(sizePolicy);
        rulesButton->setMinimumSize(QSize(100, 50));

        gridLayout->addWidget(rulesButton, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        logoLabel = new QLabel(centralwidget);
        logoLabel->setObjectName("logoLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(logoLabel->sizePolicy().hasHeightForWidth());
        logoLabel->setSizePolicy(sizePolicy1);
        logoLabel->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(logoLabel, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(350, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        langChoice = new QComboBox(centralwidget);
        langChoice->setObjectName("langChoice");

        gridLayout->addWidget(langChoice, 1, 1, 1, 1);

        playButton = new QPushButton(centralwidget);
        playButton->setObjectName("playButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(playButton->sizePolicy().hasHeightForWidth());
        playButton->setSizePolicy(sizePolicy2);
        playButton->setMinimumSize(QSize(100, 50));

        gridLayout->addWidget(playButton, 3, 1, 1, 1);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(exitButton, 5, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(350, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        MainArea->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainArea);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1715, 21));
        MainArea->setMenuBar(menubar);
        statusbar = new QStatusBar(MainArea);
        statusbar->setObjectName("statusbar");
        MainArea->setStatusBar(statusbar);

        retranslateUi(MainArea);

        QMetaObject::connectSlotsByName(MainArea);
    } // setupUi

    void retranslateUi(QMainWindow *MainArea)
    {
        MainArea->setWindowTitle(QCoreApplication::translate("MainArea", "MainArea", nullptr));
        rulesButton->setText(QCoreApplication::translate("MainArea", "Rules", nullptr));
        logoLabel->setText(QString());
        playButton->setText(QCoreApplication::translate("MainArea", "Play", nullptr));
        exitButton->setText(QCoreApplication::translate("MainArea", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainArea: public Ui_MainArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAREA_H
