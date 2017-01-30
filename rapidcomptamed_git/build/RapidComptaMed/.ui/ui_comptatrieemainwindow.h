/********************************************************************************
** Form generated from reading UI file 'comptatrieemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPTATRIEEMAINWINDOW_H
#define UI_COMPTATRIEEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMdiArea>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComptatrieeMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ComptatrieeMainWindow)
    {
        if (ComptatrieeMainWindow->objectName().isEmpty())
            ComptatrieeMainWindow->setObjectName(QString::fromUtf8("ComptatrieeMainWindow"));
        ComptatrieeMainWindow->resize(1006, 670);
        ComptatrieeMainWindow->setMinimumSize(QSize(0, 670));
        centralwidget = new QWidget(ComptatrieeMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        ComptatrieeMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ComptatrieeMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1006, 25));
        ComptatrieeMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ComptatrieeMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ComptatrieeMainWindow->setStatusBar(statusbar);

        retranslateUi(ComptatrieeMainWindow);

        QMetaObject::connectSlotsByName(ComptatrieeMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ComptatrieeMainWindow)
    {
        ComptatrieeMainWindow->setWindowTitle(QApplication::translate("ComptatrieeMainWindow", "Comptabilit\303\251 analys\303\251e", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ComptatrieeMainWindow: public Ui_ComptatrieeMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPTATRIEEMAINWINDOW_H
