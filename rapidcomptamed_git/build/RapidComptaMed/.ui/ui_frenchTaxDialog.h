/********************************************************************************
** Form generated from reading UI file 'frenchTaxDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRENCHTAXDIALOG_H
#define UI_FRENCHTAXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frenchTaxDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QPushButton *printButton;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *userComboBox;
    QPushButton *pushButton;

    void setupUi(QWidget *frenchTaxDialog)
    {
        if (frenchTaxDialog->objectName().isEmpty())
            frenchTaxDialog->setObjectName(QString::fromUtf8("frenchTaxDialog"));
        frenchTaxDialog->resize(561, 534);
        gridLayout_2 = new QGridLayout(frenchTaxDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(frenchTaxDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        groupBox = new QGroupBox(frenchTaxDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(500, 140));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(32, 20, 353, 108));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(90, 30));

        horizontalLayout->addWidget(dateEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        printButton = new QPushButton(layoutWidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setMinimumSize(QSize(75, 50));

        gridLayout->addWidget(printButton, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(75, 50));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        userComboBox = new QComboBox(layoutWidget);
        userComboBox->setObjectName(QString::fromUtf8("userComboBox"));
        userComboBox->setMinimumSize(QSize(120, 30));

        horizontalLayout_2->addWidget(userComboBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 50));

        gridLayout->addWidget(pushButton, 1, 1, 1, 2);


        verticalLayout->addWidget(groupBox);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(userComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(frenchTaxDialog);

        QMetaObject::connectSlotsByName(frenchTaxDialog);
    } // setupUi

    void retranslateUi(QWidget *frenchTaxDialog)
    {
        frenchTaxDialog->setWindowTitle(QApplication::translate("frenchTaxDialog", "2035", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("frenchTaxDialog", "G\303\251rer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("frenchTaxDialog", "Ann\303\251e", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("frenchTaxDialog", "Im&primer", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("frenchTaxDialog", "PD&F", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frenchTaxDialog", "User", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("frenchTaxDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frenchTaxDialog: public Ui_frenchTaxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRENCHTAXDIALOG_H
