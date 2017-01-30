/********************************************************************************
** Form generated from reading UI file 'automatisme.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOMATISME_H
#define UI_AUTOMATISME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AutoDialog)
    {
        if (AutoDialog->objectName().isEmpty())
            AutoDialog->setObjectName(QString::fromUtf8("AutoDialog"));
        AutoDialog->resize(216, 108);
        gridLayout_2 = new QGridLayout(AutoDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButton = new QRadioButton(AutoDialog);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(AutoDialog);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(AutoDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(AutoDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(AutoDialog);

        QMetaObject::connectSlotsByName(AutoDialog);
    } // setupUi

    void retranslateUi(QWidget *AutoDialog)
    {
        AutoDialog->setWindowTitle(QApplication::translate("AutoDialog", "Automatisme de la fermeture.", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("AutoDialog", "RadioButton", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("AutoDialog", "RadioButton", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AutoDialog", "&Enregistrer", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("AutoDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AutoDialog: public Ui_AutoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMATISME_H
