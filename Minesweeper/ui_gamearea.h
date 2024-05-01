/********************************************************************************
** Form generated from reading UI file 'gamearea.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEAREA_H
#define UI_GAMEAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameArea
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *backToMenuButton;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *playField;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLCDNumber *minesLeft;
    QPushButton *switchFlag;
    QPushButton *smile;
    QLCDNumber *timePassed;

    void setupUi(QWidget *GameArea)
    {
        if (GameArea->objectName().isEmpty())
            GameArea->setObjectName("GameArea");
        GameArea->resize(1467, 702);
        gridLayout = new QGridLayout(GameArea);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(500, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        backToMenuButton = new QPushButton(GameArea);
        backToMenuButton->setObjectName("backToMenuButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backToMenuButton->sizePolicy().hasHeightForWidth());
        backToMenuButton->setSizePolicy(sizePolicy);
        backToMenuButton->setMinimumSize(QSize(190, 50));

        horizontalLayout_5->addWidget(backToMenuButton);

        saveButton = new QPushButton(GameArea);
        saveButton->setObjectName("saveButton");
        sizePolicy.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy);
        saveButton->setMinimumSize(QSize(190, 50));

        horizontalLayout_5->addWidget(saveButton);

        horizontalSpacer_4 = new QSpacerItem(500, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        playField = new QGridLayout();
        playField->setSpacing(0);
        playField->setObjectName("playField");

        horizontalLayout->addLayout(playField);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        minesLeft = new QLCDNumber(GameArea);
        minesLeft->setObjectName("minesLeft");
        minesLeft->setEnabled(true);
        sizePolicy.setHeightForWidth(minesLeft->sizePolicy().hasHeightForWidth());
        minesLeft->setSizePolicy(sizePolicy);
        minesLeft->setMinimumSize(QSize(50, 50));
        minesLeft->setMaximumSize(QSize(1500, 150));

        horizontalLayout_3->addWidget(minesLeft);

        switchFlag = new QPushButton(GameArea);
        switchFlag->setObjectName("switchFlag");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(switchFlag->sizePolicy().hasHeightForWidth());
        switchFlag->setSizePolicy(sizePolicy1);
        switchFlag->setMinimumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(switchFlag);

        smile = new QPushButton(GameArea);
        smile->setObjectName("smile");
        sizePolicy1.setHeightForWidth(smile->sizePolicy().hasHeightForWidth());
        smile->setSizePolicy(sizePolicy1);
        smile->setMinimumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(smile);

        timePassed = new QLCDNumber(GameArea);
        timePassed->setObjectName("timePassed");
        timePassed->setEnabled(true);
        sizePolicy.setHeightForWidth(timePassed->sizePolicy().hasHeightForWidth());
        timePassed->setSizePolicy(sizePolicy);
        timePassed->setMinimumSize(QSize(50, 50));
        timePassed->setMaximumSize(QSize(1500, 150));

        horizontalLayout_3->addWidget(timePassed);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        retranslateUi(GameArea);

        QMetaObject::connectSlotsByName(GameArea);
    } // setupUi

    void retranslateUi(QWidget *GameArea)
    {
        GameArea->setWindowTitle(QCoreApplication::translate("GameArea", "Form", nullptr));
        backToMenuButton->setText(QCoreApplication::translate("GameArea", "Exit", nullptr));
        saveButton->setText(QCoreApplication::translate("GameArea", "Save", nullptr));
        switchFlag->setText(QString());
        smile->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameArea: public Ui_GameArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEAREA_H
