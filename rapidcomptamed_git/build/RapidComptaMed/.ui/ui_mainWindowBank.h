/********************************************************************************
** Form generated from reading UI file 'mainWindowBank.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWBANK_H
#define UI_MAINWINDOWBANK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowBankMovements
{
public:
    QAction *action_Quitter;
    QAction *action_Recettes;
    QAction *action_Mouvements;
    QAction *actionDepotsBalance;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_Fichier;
    QMenu *menu_Analyses;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowBankMovements)
    {
        if (MainWindowBankMovements->objectName().isEmpty())
            MainWindowBankMovements->setObjectName(QString::fromUtf8("MainWindowBankMovements"));
        MainWindowBankMovements->resize(480, 462);
        action_Quitter = new QAction(MainWindowBankMovements);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        action_Quitter->setCheckable(true);
        action_Recettes = new QAction(MainWindowBankMovements);
        action_Recettes->setObjectName(QString::fromUtf8("action_Recettes"));
        action_Mouvements = new QAction(MainWindowBankMovements);
        action_Mouvements->setObjectName(QString::fromUtf8("action_Mouvements"));
        actionDepotsBalance = new QAction(MainWindowBankMovements);
        actionDepotsBalance->setObjectName(QString::fromUtf8("actionDepotsBalance"));
        actionDepotsBalance->setCheckable(true);
        centralwidget = new QWidget(MainWindowBankMovements);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindowBankMovements->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowBankMovements);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 25));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        menu_Analyses = new QMenu(menubar);
        menu_Analyses->setObjectName(QString::fromUtf8("menu_Analyses"));
        MainWindowBankMovements->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowBankMovements);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowBankMovements->setStatusBar(statusbar);

        menubar->addAction(menu_Fichier->menuAction());
        menubar->addAction(menu_Analyses->menuAction());
        menu_Fichier->addAction(action_Quitter);
        menu_Analyses->addAction(action_Recettes);
        menu_Analyses->addAction(action_Mouvements);
        menu_Analyses->addAction(actionDepotsBalance);

        retranslateUi(MainWindowBankMovements);

        QMetaObject::connectSlotsByName(MainWindowBankMovements);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowBankMovements)
    {
        MainWindowBankMovements->setWindowTitle(QApplication::translate("MainWindowBankMovements", "Contr\303\264le des balances et pointages", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindowBankMovements", "&Quitter", 0, QApplication::UnicodeUTF8));
        action_Recettes->setText(QApplication::translate("MainWindowBankMovements", "&Recettes", 0, QApplication::UnicodeUTF8));
        action_Mouvements->setText(QApplication::translate("MainWindowBankMovements", "&Mouvements", 0, QApplication::UnicodeUTF8));
        actionDepotsBalance->setText(QApplication::translate("MainWindowBankMovements", "D\303\251p\303\264ts et balance", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindowBankMovements", "&Fichier", 0, QApplication::UnicodeUTF8));
        menu_Analyses->setTitle(QApplication::translate("MainWindowBankMovements", "&Analyses", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowBankMovements: public Ui_MainWindowBankMovements {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWBANK_H
