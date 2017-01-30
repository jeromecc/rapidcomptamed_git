/********************************************************************************
** Form generated from reading UI file 'PratIdDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRATIDDIALOG_H
#define UI_PRATIDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PratIdDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PratIdDialog)
    {
        if (PratIdDialog->objectName().isEmpty())
            PratIdDialog->setObjectName(QString::fromUtf8("PratIdDialog"));
        PratIdDialog->resize(572, 143);
        gridLayout_3 = new QGridLayout(PratIdDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PratIdDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(110, 40));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(PratIdDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(110, 30));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(PratIdDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 40));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEdit = new QLineEdit(PratIdDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 30));

        gridLayout->addWidget(lineEdit, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PratIdDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(PratIdDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PratIdDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PratIdDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PratIdDialog);
    } // setupUi

    void retranslateUi(QDialog *PratIdDialog)
    {
        PratIdDialog->setWindowTitle(QApplication::translate("PratIdDialog", "Choisir le praticien", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PratIdDialog", "Identifiant\n"
"du praticien", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PratIdDialog", "Praticien", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PratIdDialog: public Ui_PratIdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRATIDDIALOG_H
