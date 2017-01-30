/********************************************************************************
** Form generated from reading UI file 'etatdesdusdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETATDESDUSDIALOG_H
#define UI_ETATDESDUSDIALOG_H

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
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EtatdesdusDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *EtatdesdusDialog)
    {
        if (EtatdesdusDialog->objectName().isEmpty())
            EtatdesdusDialog->setObjectName(QString::fromUtf8("EtatdesdusDialog"));
        EtatdesdusDialog->resize(643, 525);
        gridLayout_2 = new QGridLayout(EtatdesdusDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(EtatdesdusDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(EtatdesdusDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(EtatdesdusDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(EtatdesdusDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 1, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(EtatdesdusDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(EtatdesdusDialog);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(EtatdesdusDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(EtatdesdusDialog);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(EtatdesdusDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 1, 2, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(EtatdesdusDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        dateEdit = new QDateEdit(EtatdesdusDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(EtatdesdusDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        dateEdit_2 = new QDateEdit(EtatdesdusDialog);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        horizontalLayout_5->addWidget(dateEdit_2);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        pushButton = new QPushButton(EtatdesdusDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBox);
        label_2->setBuddy(comboBox_2);
        label_3->setBuddy(comboBox_3);
        label_4->setBuddy(dateEdit);
        label_5->setBuddy(dateEdit_2);
#endif // QT_NO_SHORTCUT

        retranslateUi(EtatdesdusDialog);

        QMetaObject::connectSlotsByName(EtatdesdusDialog);
    } // setupUi

    void retranslateUi(QWidget *EtatdesdusDialog)
    {
        EtatdesdusDialog->setWindowTitle(QApplication::translate("EtatdesdusDialog", "Gestion des dus", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EtatdesdusDialog", "D\303\251biteur", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("EtatdesdusDialog", "&Trier", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EtatdesdusDialog", "Site", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EtatdesdusDialog", "Praticien", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("EtatdesdusDialog", "Faire une &lettre\n"
"de rappel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EtatdesdusDialog", "Du", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EtatdesdusDialog", "Au", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("EtatdesdusDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EtatdesdusDialog: public Ui_EtatdesdusDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETATDESDUSDIALOG_H
