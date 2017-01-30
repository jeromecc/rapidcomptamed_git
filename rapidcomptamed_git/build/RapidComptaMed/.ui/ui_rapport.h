/********************************************************************************
** Form generated from reading UI file 'rapport.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAPPORT_H
#define UI_RAPPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MailDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MailDialog)
    {
        if (MailDialog->objectName().isEmpty())
            MailDialog->setObjectName(QString::fromUtf8("MailDialog"));
        MailDialog->resize(400, 300);
        gridLayout = new QGridLayout(MailDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(MailDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MailDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(MailDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MailDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MailDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MailDialog);
    } // setupUi

    void retranslateUi(QDialog *MailDialog)
    {
        MailDialog->setWindowTitle(QApplication::translate("MailDialog", "Envoyer un rapport de bug", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MailDialog: public Ui_MailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAPPORT_H
