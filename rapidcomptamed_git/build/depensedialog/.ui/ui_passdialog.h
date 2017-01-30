/********************************************************************************
** Form generated from reading UI file 'passdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSDIALOG_H
#define UI_PASSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PassDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PassDialog)
    {
        if (PassDialog->objectName().isEmpty())
            PassDialog->setObjectName(QString::fromUtf8("PassDialog"));
        PassDialog->resize(240, 181);
        gridLayout = new QGridLayout(PassDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PassDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(PassDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PassDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(PassDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PassDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PassDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PassDialog);
    } // setupUi

    void retranslateUi(QDialog *PassDialog)
    {
        PassDialog->setWindowTitle(QApplication::translate("PassDialog", "Mot de passe requis.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PassDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PassDialog: public Ui_PassDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSDIALOG_H
