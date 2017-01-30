/********************************************************************************
** Form generated from reading UI file 'modifUtil.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFUTIL_H
#define UI_MODIFUTIL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifUtilDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QTableView *tableViewUtil;
    QHBoxLayout *hboxLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ModifUtilDialog)
    {
        if (ModifUtilDialog->objectName().isEmpty())
            ModifUtilDialog->setObjectName(QString::fromUtf8("ModifUtilDialog"));
        ModifUtilDialog->resize(625, 467);
        gridLayout = new QGridLayout(ModifUtilDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        tableViewUtil = new QTableView(ModifUtilDialog);
        tableViewUtil->setObjectName(QString::fromUtf8("tableViewUtil"));

        gridLayout1->addWidget(tableViewUtil, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pushButton = new QPushButton(ModifUtilDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        hboxLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(ModifUtilDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        hboxLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(ModifUtilDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        hboxLayout->addWidget(pushButton_2);


        gridLayout1->addLayout(hboxLayout, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);


        retranslateUi(ModifUtilDialog);

        QMetaObject::connectSlotsByName(ModifUtilDialog);
    } // setupUi

    void retranslateUi(QWidget *ModifUtilDialog)
    {
        ModifUtilDialog->setWindowTitle(QApplication::translate("ModifUtilDialog", "Modification des comptes", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ModifUtilDialog", "&Enregistrer", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ModifUtilDialog", "Eff&acer", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ModifUtilDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModifUtilDialog: public Ui_ModifUtilDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFUTIL_H
