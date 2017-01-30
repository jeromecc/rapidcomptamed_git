/********************************************************************************
** Form generated from reading UI file 'balancedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCEDIALOG_H
#define UI_BALANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BalanceDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *BalanceDialog)
    {
        if (BalanceDialog->objectName().isEmpty())
            BalanceDialog->setObjectName(QString::fromUtf8("BalanceDialog"));
        BalanceDialog->resize(480, 359);
        gridLayout_2 = new QGridLayout(BalanceDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(BalanceDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(BalanceDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(BalanceDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(BalanceDialog);

        QMetaObject::connectSlotsByName(BalanceDialog);
    } // setupUi

    void retranslateUi(QDialog *BalanceDialog)
    {
        BalanceDialog->setWindowTitle(QApplication::translate("BalanceDialog", "Balance", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("BalanceDialog", "&Ok", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("BalanceDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BalanceDialog: public Ui_BalanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCEDIALOG_H
