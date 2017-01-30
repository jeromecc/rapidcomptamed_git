/********************************************************************************
** Form generated from reading UI file 'validDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIDDIALOG_H
#define UI_VALIDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ValidDialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QCheckBox *cashBox;
    QCheckBox *checksBox;
    QCheckBox *cardsBox;
    QCheckBox *othersBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ValidDialog)
    {
        if (ValidDialog->objectName().isEmpty())
            ValidDialog->setObjectName(QString::fromUtf8("ValidDialog"));
        ValidDialog->resize(240, 320);
        layoutWidget = new QWidget(ValidDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 221, 301));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cashBox = new QCheckBox(layoutWidget);
        cashBox->setObjectName(QString::fromUtf8("cashBox"));

        gridLayout->addWidget(cashBox, 1, 0, 1, 1);

        checksBox = new QCheckBox(layoutWidget);
        checksBox->setObjectName(QString::fromUtf8("checksBox"));

        gridLayout->addWidget(checksBox, 2, 0, 1, 1);

        cardsBox = new QCheckBox(layoutWidget);
        cardsBox->setObjectName(QString::fromUtf8("cardsBox"));

        gridLayout->addWidget(cardsBox, 3, 0, 1, 1);

        othersBox = new QCheckBox(layoutWidget);
        othersBox->setObjectName(QString::fromUtf8("othersBox"));
        othersBox->setEnabled(true);

        gridLayout->addWidget(othersBox, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);


        retranslateUi(ValidDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ValidDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ValidDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ValidDialog);
    } // setupUi

    void retranslateUi(QDialog *ValidDialog)
    {
        ValidDialog->setWindowTitle(QApplication::translate("ValidDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ValidDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        cashBox->setText(QApplication::translate("ValidDialog", "Cash", 0, QApplication::UnicodeUTF8));
        checksBox->setText(QApplication::translate("ValidDialog", "Checks", 0, QApplication::UnicodeUTF8));
        cardsBox->setText(QApplication::translate("ValidDialog", "Cards", 0, QApplication::UnicodeUTF8));
        othersBox->setText(QApplication::translate("ValidDialog", "Vir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ValidDialog: public Ui_ValidDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIDDIALOG_H
