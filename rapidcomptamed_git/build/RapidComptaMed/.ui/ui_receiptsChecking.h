/********************************************************************************
** Form generated from reading UI file 'receiptsChecking.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPTSCHECKING_H
#define UI_RECEIPTSCHECKING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_receiptsCheckingWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *recordButton;
    QLabel *labelAlpha;
    QDateEdit *dateEndEdit;
    QLabel *endDateLabel;
    QLabel *usersLabel;
    QPushButton *closeButton;
    QComboBox *comboBoxUsers;
    QPushButton *cancelButton;
    QPushButton *revertButton;
    QDateEdit *dateBeginEdit;
    QLabel *beginDateLabel;
    QLabel *label;
    QTableView *tableView;
    QLabel *detailLabel;
    QLineEdit *detailEdit;

    void setupUi(QWidget *receiptsCheckingWidget)
    {
        if (receiptsCheckingWidget->objectName().isEmpty())
            receiptsCheckingWidget->setObjectName(QString::fromUtf8("receiptsCheckingWidget"));
        receiptsCheckingWidget->resize(539, 378);
        receiptsCheckingWidget->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(receiptsCheckingWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        recordButton = new QPushButton(receiptsCheckingWidget);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        gridLayout->addWidget(recordButton, 5, 2, 1, 1);

        labelAlpha = new QLabel(receiptsCheckingWidget);
        labelAlpha->setObjectName(QString::fromUtf8("labelAlpha"));

        gridLayout->addWidget(labelAlpha, 0, 1, 1, 3);

        dateEndEdit = new QDateEdit(receiptsCheckingWidget);
        dateEndEdit->setObjectName(QString::fromUtf8("dateEndEdit"));

        gridLayout->addWidget(dateEndEdit, 3, 3, 1, 1);

        endDateLabel = new QLabel(receiptsCheckingWidget);
        endDateLabel->setObjectName(QString::fromUtf8("endDateLabel"));

        gridLayout->addWidget(endDateLabel, 3, 2, 1, 1);

        usersLabel = new QLabel(receiptsCheckingWidget);
        usersLabel->setObjectName(QString::fromUtf8("usersLabel"));
        usersLabel->setWordWrap(true);

        gridLayout->addWidget(usersLabel, 4, 2, 1, 1);

        closeButton = new QPushButton(receiptsCheckingWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout->addWidget(closeButton, 6, 3, 1, 1);

        comboBoxUsers = new QComboBox(receiptsCheckingWidget);
        comboBoxUsers->setObjectName(QString::fromUtf8("comboBoxUsers"));

        gridLayout->addWidget(comboBoxUsers, 4, 3, 1, 1);

        cancelButton = new QPushButton(receiptsCheckingWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 5, 3, 1, 1);

        revertButton = new QPushButton(receiptsCheckingWidget);
        revertButton->setObjectName(QString::fromUtf8("revertButton"));

        gridLayout->addWidget(revertButton, 6, 2, 1, 1);

        dateBeginEdit = new QDateEdit(receiptsCheckingWidget);
        dateBeginEdit->setObjectName(QString::fromUtf8("dateBeginEdit"));

        gridLayout->addWidget(dateBeginEdit, 3, 1, 1, 1);

        beginDateLabel = new QLabel(receiptsCheckingWidget);
        beginDateLabel->setObjectName(QString::fromUtf8("beginDateLabel"));
        beginDateLabel->setWordWrap(true);

        gridLayout->addWidget(beginDateLabel, 3, 0, 1, 1);

        label = new QLabel(receiptsCheckingWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(181, 70));

        gridLayout->addWidget(label, 5, 0, 2, 2);

        tableView = new QTableView(receiptsCheckingWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 4);

        detailLabel = new QLabel(receiptsCheckingWidget);
        detailLabel->setObjectName(QString::fromUtf8("detailLabel"));
        detailLabel->setWordWrap(true);

        gridLayout->addWidget(detailLabel, 2, 0, 1, 1);

        detailEdit = new QLineEdit(receiptsCheckingWidget);
        detailEdit->setObjectName(QString::fromUtf8("detailEdit"));
        detailEdit->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(detailEdit, 2, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(receiptsCheckingWidget);

        QMetaObject::connectSlotsByName(receiptsCheckingWidget);
    } // setupUi

    void retranslateUi(QWidget *receiptsCheckingWidget)
    {
        receiptsCheckingWidget->setWindowTitle(QApplication::translate("receiptsCheckingWidget", "Pointer les recettes", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("receiptsCheckingWidget", "En&registre", 0, QApplication::UnicodeUTF8));
        labelAlpha->setText(QApplication::translate("receiptsCheckingWidget", "Alpha", 0, QApplication::UnicodeUTF8));
        endDateLabel->setText(QApplication::translate("receiptsCheckingWidget", "Date fin", 0, QApplication::UnicodeUTF8));
        usersLabel->setText(QApplication::translate("receiptsCheckingWidget", "Utilisateurs", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("receiptsCheckingWidget", "&Quitter", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("receiptsCheckingWidget", "&Cancel", 0, QApplication::UnicodeUTF8));
        revertButton->setText(QApplication::translate("receiptsCheckingWidget", "A&nnule", 0, QApplication::UnicodeUTF8));
        beginDateLabel->setText(QApplication::translate("receiptsCheckingWidget", "Date d\303\251but", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("receiptsCheckingWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        detailLabel->setText(QApplication::translate("receiptsCheckingWidget", "D\303\251tail du r\303\250glement", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class receiptsCheckingWidget: public Ui_receiptsCheckingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTSCHECKING_H
