/********************************************************************************
** Form generated from reading UI file 'nameindex.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEINDEX_H
#define UI_NAMEINDEX_H

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
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_NamesDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *searchLabel;
    QLineEdit *searchEdit;
    QTableView *tableView;
    QPushButton *recordButton;
    QPushButton *deleteButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NamesDialog)
    {
        if (NamesDialog->objectName().isEmpty())
            NamesDialog->setObjectName(QString::fromUtf8("NamesDialog"));
        NamesDialog->resize(400, 549);
        gridLayout = new QGridLayout(NamesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        searchLabel = new QLabel(NamesDialog);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));

        gridLayout->addWidget(searchLabel, 0, 0, 1, 1);

        searchEdit = new QLineEdit(NamesDialog);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

        gridLayout->addWidget(searchEdit, 1, 0, 1, 2);

        tableView = new QTableView(NamesDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 1, 2);

        recordButton = new QPushButton(NamesDialog);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        gridLayout->addWidget(recordButton, 3, 0, 1, 1);

        deleteButton = new QPushButton(NamesDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout->addWidget(deleteButton, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(NamesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);


        retranslateUi(NamesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NamesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NamesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NamesDialog);
    } // setupUi

    void retranslateUi(QDialog *NamesDialog)
    {
        NamesDialog->setWindowTitle(QApplication::translate("NamesDialog", "Rechercher un patient", 0, QApplication::UnicodeUTF8));
        searchLabel->setText(QApplication::translate("NamesDialog", "Rechercher", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("NamesDialog", "Enregistre le nom", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("NamesDialog", "Efface le nom", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NamesDialog: public Ui_NamesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEINDEX_H
