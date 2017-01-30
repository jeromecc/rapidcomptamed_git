/********************************************************************************
** Form generated from reading UI file 'NouvelleImmobilisation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOUVELLEIMMOBILISATION_H
#define UI_NOUVELLEIMMOBILISATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewImmobDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QTextEdit *textEdit;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *NewImmobDialog)
    {
        if (NewImmobDialog->objectName().isEmpty())
            NewImmobDialog->setObjectName(QString::fromUtf8("NewImmobDialog"));
        NewImmobDialog->resize(478, 525);
        NewImmobDialog->setMinimumSize(QSize(150, 25));
        gridLayout_2 = new QGridLayout(NewImmobDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(NewImmobDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label = new QLabel(NewImmobDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(NewImmobDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(NewImmobDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        lineEdit_3 = new QLineEdit(NewImmobDialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(300, 25));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        label_4 = new QLabel(NewImmobDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        lineEdit_4 = new QLineEdit(NewImmobDialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(300, 25));

        gridLayout->addWidget(lineEdit_4, 4, 1, 1, 1);

        label_5 = new QLabel(NewImmobDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        dateEdit = new QDateEdit(NewImmobDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 5, 1, 1, 1);

        label_6 = new QLabel(NewImmobDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        lineEdit_5 = new QLineEdit(NewImmobDialog);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(300, 25));

        gridLayout->addWidget(lineEdit_5, 6, 1, 1, 1);

        label_7 = new QLabel(NewImmobDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        comboBox = new QComboBox(NewImmobDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 7, 1, 1, 1);

        label_8 = new QLabel(NewImmobDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        textEdit = new QTextEdit(NewImmobDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(300, 5));

        gridLayout->addWidget(textEdit, 8, 1, 1, 1);

        comboBox_2 = new QComboBox(NewImmobDialog);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        comboBox_3 = new QComboBox(NewImmobDialog);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(NewImmobDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(NewImmobDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_5->setBuddy(dateEdit);
        label_6->setBuddy(lineEdit_5);
        label_7->setBuddy(comboBox);
        label_8->setBuddy(textEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(NewImmobDialog);

        QMetaObject::connectSlotsByName(NewImmobDialog);
    } // setupUi

    void retranslateUi(QWidget *NewImmobDialog)
    {
        NewImmobDialog->setWindowTitle(QApplication::translate("NewImmobDialog", "Cr\303\251ation d'immobilisation", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("NewImmobDialog", "?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewImmobDialog", "Utilisateur", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewImmobDialog", "Compte", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewImmobDialog", "Libell\303\251", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NewImmobDialog", "Valeur", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("NewImmobDialog", "Date de d\303\251but", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("NewImmobDialog", "Dur\303\251e en ann\303\251es", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("NewImmobDialog", "Mode", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("NewImmobDialog", "D\303\251tail", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("NewImmobDialog", "&Enregistrer", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("NewImmobDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewImmobDialog: public Ui_NewImmobDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOUVELLEIMMOBILISATION_H
