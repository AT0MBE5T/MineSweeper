/********************************************************************************
** Form generated from reading UI file 'createfield.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEFIELD_H
#define UI_CREATEFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateField
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *readFileBtn;
    QPushButton *createNewBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *defaultSizes;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *sizeLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *widthInput;
    QLabel *xLabel;
    QLineEdit *heightInput;
    QLabel *minesLabel;
    QLineEdit *minesInput;
    QPushButton *createButton;
    QLabel *generateLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CreateField)
    {
        if (CreateField->objectName().isEmpty())
            CreateField->setObjectName("CreateField");
        CreateField->resize(1340, 768);
        gridLayout = new QGridLayout(CreateField);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        readFileBtn = new QPushButton(CreateField);
        readFileBtn->setObjectName("readFileBtn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(readFileBtn->sizePolicy().hasHeightForWidth());
        readFileBtn->setSizePolicy(sizePolicy);
        readFileBtn->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(readFileBtn);

        createNewBtn = new QPushButton(CreateField);
        createNewBtn->setObjectName("createNewBtn");
        sizePolicy.setHeightForWidth(createNewBtn->sizePolicy().hasHeightForWidth());
        createNewBtn->setSizePolicy(sizePolicy);
        createNewBtn->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(createNewBtn);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(500, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        defaultSizes = new QComboBox(CreateField);
        defaultSizes->addItem(QString());
        defaultSizes->addItem(QString());
        defaultSizes->addItem(QString());
        defaultSizes->addItem(QString());
        defaultSizes->setObjectName("defaultSizes");

        verticalLayout_2->addWidget(defaultSizes);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sizeLabel = new QLabel(CreateField);
        sizeLabel->setObjectName("sizeLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, sizeLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widthInput = new QLineEdit(CreateField);
        widthInput->setObjectName("widthInput");

        horizontalLayout_2->addWidget(widthInput);

        xLabel = new QLabel(CreateField);
        xLabel->setObjectName("xLabel");
        xLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(xLabel);

        heightInput = new QLineEdit(CreateField);
        heightInput->setObjectName("heightInput");

        horizontalLayout_2->addWidget(heightInput);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        minesLabel = new QLabel(CreateField);
        minesLabel->setObjectName("minesLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, minesLabel);

        minesInput = new QLineEdit(CreateField);
        minesInput->setObjectName("minesInput");

        formLayout->setWidget(1, QFormLayout::FieldRole, minesInput);


        verticalLayout->addLayout(formLayout);

        createButton = new QPushButton(CreateField);
        createButton->setObjectName("createButton");
        sizePolicy.setHeightForWidth(createButton->sizePolicy().hasHeightForWidth());
        createButton->setSizePolicy(sizePolicy);
        createButton->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(createButton);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 3, 1, 1, 1);

        generateLabel = new QLabel(CreateField);
        generateLabel->setObjectName("generateLabel");
        sizePolicy.setHeightForWidth(generateLabel->sizePolicy().hasHeightForWidth());
        generateLabel->setSizePolicy(sizePolicy);
        generateLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(generateLabel, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);


        retranslateUi(CreateField);

        QMetaObject::connectSlotsByName(CreateField);
    } // setupUi

    void retranslateUi(QDialog *CreateField)
    {
        CreateField->setWindowTitle(QCoreApplication::translate("CreateField", "Dialog", nullptr));
        readFileBtn->setText(QString());
        createNewBtn->setText(QString());
        defaultSizes->setItemText(0, QCoreApplication::translate("CreateField", "\320\236\320\261\320\265\321\200\321\226\321\202\321\214 \321\200\320\276\320\267\320\274\321\226\321\200 \320\277\320\276\320\273\321\217 \321\202\320\260 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\274\321\226\320\275", nullptr));
        defaultSizes->setItemText(1, QCoreApplication::translate("CreateField", "9 x 9 | 10", nullptr));
        defaultSizes->setItemText(2, QCoreApplication::translate("CreateField", "16 x 16 | 40", nullptr));
        defaultSizes->setItemText(3, QCoreApplication::translate("CreateField", "16 x 30 | 99", nullptr));

        sizeLabel->setText(QCoreApplication::translate("CreateField", "\320\240\320\276\320\267\320\274\321\226\321\200 \320\277\320\276\320\273\321\217", nullptr));
        xLabel->setText(QCoreApplication::translate("CreateField", "X", nullptr));
        minesLabel->setText(QCoreApplication::translate("CreateField", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\274\321\226\320\275", nullptr));
        createButton->setText(QCoreApplication::translate("CreateField", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        generateLabel->setText(QCoreApplication::translate("CreateField", "asd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateField: public Ui_CreateField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEFIELD_H
