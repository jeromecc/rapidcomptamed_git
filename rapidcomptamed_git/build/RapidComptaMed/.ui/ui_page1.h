/********************************************************************************
** Form generated from reading UI file 'page1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE1_H
#define UI_PAGE1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_WizardPage1
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWizardPage *WizardPage1)
    {
        if (WizardPage1->objectName().isEmpty())
            WizardPage1->setObjectName(QString::fromUtf8("WizardPage1"));
        WizardPage1->resize(400, 300);
        gridLayout = new QGridLayout(WizardPage1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WizardPage1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(WizardPage1);

        QMetaObject::connectSlotsByName(WizardPage1);
    } // setupUi

    void retranslateUi(QWizardPage *WizardPage1)
    {
        WizardPage1->setWindowTitle(QApplication::translate("WizardPage1", "WizardPage", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WizardPage1", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WizardPage1: public Ui_WizardPage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE1_H
