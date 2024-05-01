/********************************************************************************
** Form generated from reading UI file 'rules.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULES_H
#define UI_RULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Rules
{
public:
    QGridLayout *gridLayout;
    QLabel *headerLabel;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *rulesLabel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Rules)
    {
        if (Rules->objectName().isEmpty())
            Rules->setObjectName("Rules");
        Rules->resize(1115, 801);
        gridLayout = new QGridLayout(Rules);
        gridLayout->setObjectName("gridLayout");
        headerLabel = new QLabel(Rules);
        headerLabel->setObjectName("headerLabel");
        headerLabel->setLineWidth(1);
        headerLabel->setScaledContents(false);
        headerLabel->setAlignment(Qt::AlignCenter);
        headerLabel->setWordWrap(true);

        gridLayout->addWidget(headerLabel, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        rulesLabel = new QLabel(Rules);
        rulesLabel->setObjectName("rulesLabel");
        rulesLabel->setLineWidth(1);
        rulesLabel->setScaledContents(false);
        rulesLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        rulesLabel->setWordWrap(true);

        gridLayout->addWidget(rulesLabel, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(Rules);

        QMetaObject::connectSlotsByName(Rules);
    } // setupUi

    void retranslateUi(QDialog *Rules)
    {
        Rules->setWindowTitle(QCoreApplication::translate("Rules", "Dialog", nullptr));
        headerLabel->setText(QString());
        rulesLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Rules: public Ui_Rules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULES_H
