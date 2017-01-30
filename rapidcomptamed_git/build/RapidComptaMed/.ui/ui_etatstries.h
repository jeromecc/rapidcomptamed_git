/********************************************************************************
** Form generated from reading UI file 'etatstries.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETATSTRIES_H
#define UI_ETATSTRIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EtatstriesDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QPushButton *pushButton_3;

    void setupUi(QWidget *EtatstriesDialog)
    {
        if (EtatstriesDialog->objectName().isEmpty())
            EtatstriesDialog->setObjectName(QString::fromUtf8("EtatstriesDialog"));
        EtatstriesDialog->resize(998, 652);
        EtatstriesDialog->setMinimumSize(QSize(400, 400));
        gridLayout = new QGridLayout(EtatstriesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(EtatstriesDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(300, 400));

        gridLayout->addWidget(textEdit, 0, 0, 1, 5);

        comboBox = new QComboBox(EtatstriesDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(100, 24));

        gridLayout->addWidget(comboBox, 1, 0, 1, 2);

        pushButton = new QPushButton(EtatstriesDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(pushButton, 1, 2, 1, 2);

        pushButton_2 = new QPushButton(EtatstriesDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(pushButton_2, 1, 4, 1, 1);

        pushButton_4 = new QPushButton(EtatstriesDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(151, 27));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(EtatstriesDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(151, 27));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        label_2 = new QLabel(EtatstriesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(131, 21));

        gridLayout->addWidget(label_2, 2, 2, 1, 1);

        dateEdit = new QDateEdit(EtatstriesDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(110, 27));

        gridLayout->addWidget(dateEdit, 2, 3, 1, 1);

        pushButton_3 = new QPushButton(EtatstriesDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(pushButton_3, 2, 4, 1, 1);


        retranslateUi(EtatstriesDialog);

        QMetaObject::connectSlotsByName(EtatstriesDialog);
    } // setupUi

    void retranslateUi(QWidget *EtatstriesDialog)
    {
        EtatstriesDialog->setWindowTitle(QApplication::translate("EtatstriesDialog", "Etats tri\303\251s", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("EtatstriesDialog", "&Trier", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("EtatstriesDialog", "&Imprimer", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("EtatstriesDialog", "Avancer", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("EtatstriesDialog", "Reculer", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EtatstriesDialog", "Ann\303\251e", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("EtatstriesDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EtatstriesDialog: public Ui_EtatstriesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETATSTRIES_H
