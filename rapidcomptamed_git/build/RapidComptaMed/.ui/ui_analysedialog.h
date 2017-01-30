/********************************************************************************
** Form generated from reading UI file 'analysedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSEDIALOG_H
#define UI_ANALYSEDIALOG_H

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

class Ui_AnalyseDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AnalyseDialog)
    {
        if (AnalyseDialog->objectName().isEmpty())
            AnalyseDialog->setObjectName(QString::fromUtf8("AnalyseDialog"));
        AnalyseDialog->resize(484, 355);
        gridLayout = new QGridLayout(AnalyseDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(AnalyseDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AnalyseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(AnalyseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AnalyseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AnalyseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AnalyseDialog);
    } // setupUi

    void retranslateUi(QDialog *AnalyseDialog)
    {
        AnalyseDialog->setWindowTitle(QApplication::translate("AnalyseDialog", "Analyse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AnalyseDialog: public Ui_AnalyseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSEDIALOG_H
