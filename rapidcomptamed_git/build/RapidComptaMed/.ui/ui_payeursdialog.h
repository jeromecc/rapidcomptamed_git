/********************************************************************************
** Form generated from reading UI file 'payeursdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYEURSDIALOG_H
#define UI_PAYEURSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PayeursDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *nameDebtorEdit;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QTextEdit *textEdit;
    QHBoxLayout *hboxLayout2;
    QLabel *label_3;
    QLineEdit *CPlineEdit;
    QHBoxLayout *hboxLayout3;
    QLabel *label_4;
    QLineEdit *townEdit;
    QHBoxLayout *hboxLayout4;
    QLabel *label_5;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *amcLabel;
    QLineEdit *amcLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *recordButton;
    QPushButton *modifyButton;
    QPushButton *quitButton;

    void setupUi(QWidget *PayeursDialog)
    {
        if (PayeursDialog->objectName().isEmpty())
            PayeursDialog->setObjectName(QString::fromUtf8("PayeursDialog"));
        PayeursDialog->resize(636, 435);
        gridLayout = new QGridLayout(PayeursDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(PayeursDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(181, 20));

        hboxLayout->addWidget(label);

        nameDebtorEdit = new QLineEdit(PayeursDialog);
        nameDebtorEdit->setObjectName(QString::fromUtf8("nameDebtorEdit"));
        nameDebtorEdit->setMinimumSize(QSize(351, 27));

        hboxLayout->addWidget(nameDebtorEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(PayeursDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(181, 20));

        hboxLayout1->addWidget(label_2);

        textEdit = new QTextEdit(PayeursDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(351, 21));

        hboxLayout1->addWidget(textEdit);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_3 = new QLabel(PayeursDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(181, 20));

        hboxLayout2->addWidget(label_3);

        CPlineEdit = new QLineEdit(PayeursDialog);
        CPlineEdit->setObjectName(QString::fromUtf8("CPlineEdit"));
        CPlineEdit->setMinimumSize(QSize(351, 27));

        hboxLayout2->addWidget(CPlineEdit);


        gridLayout->addLayout(hboxLayout2, 2, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_4 = new QLabel(PayeursDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(181, 31));

        hboxLayout3->addWidget(label_4);

        townEdit = new QLineEdit(PayeursDialog);
        townEdit->setObjectName(QString::fromUtf8("townEdit"));
        townEdit->setMinimumSize(QSize(351, 27));

        hboxLayout3->addWidget(townEdit);


        gridLayout->addLayout(hboxLayout3, 3, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_5 = new QLabel(PayeursDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(181, 20));

        hboxLayout4->addWidget(label_5);

        phoneEdit = new QLineEdit(PayeursDialog);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setMinimumSize(QSize(351, 27));

        hboxLayout4->addWidget(phoneEdit);


        gridLayout->addLayout(hboxLayout4, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        amcLabel = new QLabel(PayeursDialog);
        amcLabel->setObjectName(QString::fromUtf8("amcLabel"));
        amcLabel->setMinimumSize(QSize(181, 20));

        horizontalLayout_2->addWidget(amcLabel);

        amcLineEdit = new QLineEdit(PayeursDialog);
        amcLineEdit->setObjectName(QString::fromUtf8("amcLineEdit"));
        amcLineEdit->setMinimumSize(QSize(0, 27));

        horizontalLayout_2->addWidget(amcLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        recordButton = new QPushButton(PayeursDialog);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setMinimumSize(QSize(0, 31));
        recordButton->setDefault(true);

        horizontalLayout->addWidget(recordButton);

        modifyButton = new QPushButton(PayeursDialog);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setMinimumSize(QSize(0, 31));

        horizontalLayout->addWidget(modifyButton);

        quitButton = new QPushButton(PayeursDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setMinimumSize(QSize(0, 31));

        horizontalLayout->addWidget(quitButton);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(nameDebtorEdit);
        label_2->setBuddy(textEdit);
        label_3->setBuddy(CPlineEdit);
        label_4->setBuddy(townEdit);
        label_5->setBuddy(phoneEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(PayeursDialog);

        QMetaObject::connectSlotsByName(PayeursDialog);
    } // setupUi

    void retranslateUi(QWidget *PayeursDialog)
    {
        PayeursDialog->setWindowTitle(QApplication::translate("PayeursDialog", "Saisir un nouveau payeur", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PayeursDialog", "Nom du payeur", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PayeursDialog", "Adresse du payeur", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PayeursDialog", "Code postal", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PayeursDialog", "Ville", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PayeursDialog", "T\303\251l\303\251phone", 0, QApplication::UnicodeUTF8));
        amcLabel->setText(QApplication::translate("PayeursDialog", "Num\303\251ro AMC", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("PayeursDialog", "Enregi&strer", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("PayeursDialog", "&Voir", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("PayeursDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PayeursDialog: public Ui_PayeursDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYEURSDIALOG_H
