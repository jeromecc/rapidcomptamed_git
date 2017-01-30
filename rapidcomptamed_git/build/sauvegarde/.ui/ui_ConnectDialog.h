/********************************************************************************
** Form generated from reading UI file 'ConnectDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConnectDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *hostEdit;
    QLabel *label_2;
    QLineEdit *userEdit;
    QLabel *label_3;
    QLineEdit *passEdit;
    QLabel *label_4;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *quitButton;

    void setupUi(QDialog *ConnectDialog)
    {
        if (ConnectDialog->objectName().isEmpty())
            ConnectDialog->setObjectName(QString::fromUtf8("ConnectDialog"));
        ConnectDialog->resize(355, 268);
        gridLayout_2 = new QGridLayout(ConnectDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ConnectDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hostEdit = new QLineEdit(ConnectDialog);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));
        hostEdit->setMinimumSize(QSize(110, 30));

        gridLayout->addWidget(hostEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ConnectDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        userEdit = new QLineEdit(ConnectDialog);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));
        userEdit->setMinimumSize(QSize(110, 30));

        gridLayout->addWidget(userEdit, 1, 1, 1, 1);

        label_3 = new QLabel(ConnectDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        passEdit = new QLineEdit(ConnectDialog);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setMinimumSize(QSize(110, 30));

        gridLayout->addWidget(passEdit, 2, 1, 1, 1);

        label_4 = new QLabel(ConnectDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        portEdit = new QLineEdit(ConnectDialog);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        portEdit->setMinimumSize(QSize(110, 30));

        gridLayout->addWidget(portEdit, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okButton = new QPushButton(ConnectDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);

        quitButton = new QPushButton(ConnectDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        horizontalLayout->addWidget(quitButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(hostEdit);
        label_2->setBuddy(userEdit);
        label_3->setBuddy(passEdit);
        label_4->setBuddy(portEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ConnectDialog);

        QMetaObject::connectSlotsByName(ConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectDialog)
    {
        ConnectDialog->setWindowTitle(QApplication::translate("ConnectDialog", "Param\303\250tres MySql", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConnectDialog", "Host", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ConnectDialog", "User", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConnectDialog", "Password", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConnectDialog", "Port", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ConnectDialog", "&Ok", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ConnectDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConnectDialog: public Ui_ConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
