/********************************************************************************
** Form generated from reading UI file 'pondere.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PONDERE_H
#define UI_PONDERE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ModifActesDialog
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;
    QPushButton *applyButton;

    void setupUi(QDialog *ModifActesDialog)
    {
        if (ModifActesDialog->objectName().isEmpty())
            ModifActesDialog->setObjectName(QString::fromUtf8("ModifActesDialog"));
        ModifActesDialog->resize(343, 320);
        gridLayout = new QGridLayout(ModifActesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(ModifActesDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ModifActesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        applyButton = new QPushButton(ModifActesDialog);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        gridLayout->addWidget(applyButton, 1, 0, 1, 1);


        retranslateUi(ModifActesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModifActesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModifActesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ModifActesDialog);
    } // setupUi

    void retranslateUi(QDialog *ModifActesDialog)
    {
        ModifActesDialog->setWindowTitle(QApplication::translate("ModifActesDialog", "Pond\303\251rer les actes", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("ModifActesDialog", "Appliquer les modifications", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModifActesDialog: public Ui_ModifActesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PONDERE_H
