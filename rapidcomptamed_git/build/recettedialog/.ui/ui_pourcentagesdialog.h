/********************************************************************************
** Form generated from reading UI file 'pourcentagesdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POURCENTAGESDIALOG_H
#define UI_POURCENTAGESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PourcentagesDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *hboxLayout2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *PourcentagesDialog)
    {
        if (PourcentagesDialog->objectName().isEmpty())
            PourcentagesDialog->setObjectName(QString::fromUtf8("PourcentagesDialog"));
        PourcentagesDialog->resize(400, 159);
        gridLayout = new QGridLayout(PourcentagesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(PourcentagesDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(121, 31));

        hboxLayout->addWidget(label);

        lineEdit = new QLineEdit(PourcentagesDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(221, 27));

        hboxLayout->addWidget(lineEdit);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(PourcentagesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(121, 31));

        hboxLayout1->addWidget(label_2);

        lineEdit_2 = new QLineEdit(PourcentagesDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(221, 27));

        hboxLayout1->addWidget(lineEdit_2);


        gridLayout1->addLayout(hboxLayout1, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        pushButton = new QPushButton(PourcentagesDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        hboxLayout2->addWidget(pushButton);

        pushButton_2 = new QPushButton(PourcentagesDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        hboxLayout2->addWidget(pushButton_2);


        gridLayout1->addLayout(hboxLayout2, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
#endif // QT_NO_SHORTCUT

        retranslateUi(PourcentagesDialog);

        QMetaObject::connectSlotsByName(PourcentagesDialog);
    } // setupUi

    void retranslateUi(QWidget *PourcentagesDialog)
    {
        PourcentagesDialog->setWindowTitle(QApplication::translate("PourcentagesDialog", "Saisir les r\303\250gles et leurs pourcentages", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PourcentagesDialog", "R\303\250gle", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PourcentagesDialog", "Pourcentage", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PourcentagesDialog", "Enregi&strer", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("PourcentagesDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PourcentagesDialog: public Ui_PourcentagesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POURCENTAGESDIALOG_H
