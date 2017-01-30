/********************************************************************************
** Form generated from reading UI file 'depositwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITWIDGET_H
#define UI_DEPOSITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepositWidget
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *accountLabel;
    QComboBox *bankComboBox;
    QLabel *cashLabel;
    QLabel *checksLabel;
    QLabel *visaLabel;
    QLabel *otherLabel;
    QLabel *commentLabel;
    QLineEdit *commentEdit;
    QDoubleSpinBox *cashDoubleSpinBox;
    QDoubleSpinBox *checksDoubleSpinBox;
    QDoubleSpinBox *visaDoubleSpinBox;
    QDoubleSpinBox *otherDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QDateEdit *beginDateEdit;
    QDateEdit *endDateEdit;
    QLabel *beginDateLabel;
    QLabel *endDateLabel;
    QComboBox *usersComboBox;
    QLabel *usersLabel;
    QDoubleSpinBox *balanceDoubleSpinBox;
    QLabel *balanceLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *balanceButton;
    QPushButton *cancelButton;
    QPushButton *quitButton;

    void setupUi(QWidget *DepositWidget)
    {
        if (DepositWidget->objectName().isEmpty())
            DepositWidget->setObjectName(QString::fromUtf8("DepositWidget"));
        DepositWidget->resize(539, 406);
        gridLayout_3 = new QGridLayout(DepositWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        accountLabel = new QLabel(DepositWidget);
        accountLabel->setObjectName(QString::fromUtf8("accountLabel"));
        accountLabel->setWordWrap(true);

        gridLayout->addWidget(accountLabel, 0, 0, 1, 1);

        bankComboBox = new QComboBox(DepositWidget);
        bankComboBox->setObjectName(QString::fromUtf8("bankComboBox"));

        gridLayout->addWidget(bankComboBox, 0, 1, 1, 3);

        cashLabel = new QLabel(DepositWidget);
        cashLabel->setObjectName(QString::fromUtf8("cashLabel"));
        cashLabel->setWordWrap(true);

        gridLayout->addWidget(cashLabel, 4, 0, 1, 1);

        checksLabel = new QLabel(DepositWidget);
        checksLabel->setObjectName(QString::fromUtf8("checksLabel"));
        checksLabel->setWordWrap(true);

        gridLayout->addWidget(checksLabel, 5, 0, 1, 1);

        visaLabel = new QLabel(DepositWidget);
        visaLabel->setObjectName(QString::fromUtf8("visaLabel"));
        visaLabel->setWordWrap(true);

        gridLayout->addWidget(visaLabel, 6, 0, 1, 1);

        otherLabel = new QLabel(DepositWidget);
        otherLabel->setObjectName(QString::fromUtf8("otherLabel"));
        otherLabel->setWordWrap(true);

        gridLayout->addWidget(otherLabel, 7, 0, 1, 1);

        commentLabel = new QLabel(DepositWidget);
        commentLabel->setObjectName(QString::fromUtf8("commentLabel"));
        commentLabel->setWordWrap(true);

        gridLayout->addWidget(commentLabel, 9, 0, 1, 1);

        commentEdit = new QLineEdit(DepositWidget);
        commentEdit->setObjectName(QString::fromUtf8("commentEdit"));

        gridLayout->addWidget(commentEdit, 9, 1, 1, 3);

        cashDoubleSpinBox = new QDoubleSpinBox(DepositWidget);
        cashDoubleSpinBox->setObjectName(QString::fromUtf8("cashDoubleSpinBox"));
        cashDoubleSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(cashDoubleSpinBox, 4, 1, 1, 2);

        checksDoubleSpinBox = new QDoubleSpinBox(DepositWidget);
        checksDoubleSpinBox->setObjectName(QString::fromUtf8("checksDoubleSpinBox"));

        gridLayout->addWidget(checksDoubleSpinBox, 5, 1, 1, 2);

        visaDoubleSpinBox = new QDoubleSpinBox(DepositWidget);
        visaDoubleSpinBox->setObjectName(QString::fromUtf8("visaDoubleSpinBox"));

        gridLayout->addWidget(visaDoubleSpinBox, 6, 1, 1, 2);

        otherDoubleSpinBox = new QDoubleSpinBox(DepositWidget);
        otherDoubleSpinBox->setObjectName(QString::fromUtf8("otherDoubleSpinBox"));

        gridLayout->addWidget(otherDoubleSpinBox, 7, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 3, 1, 1);

        beginDateEdit = new QDateEdit(DepositWidget);
        beginDateEdit->setObjectName(QString::fromUtf8("beginDateEdit"));

        gridLayout->addWidget(beginDateEdit, 2, 1, 1, 2);

        endDateEdit = new QDateEdit(DepositWidget);
        endDateEdit->setObjectName(QString::fromUtf8("endDateEdit"));

        gridLayout->addWidget(endDateEdit, 3, 1, 1, 2);

        beginDateLabel = new QLabel(DepositWidget);
        beginDateLabel->setObjectName(QString::fromUtf8("beginDateLabel"));

        gridLayout->addWidget(beginDateLabel, 2, 0, 1, 1);

        endDateLabel = new QLabel(DepositWidget);
        endDateLabel->setObjectName(QString::fromUtf8("endDateLabel"));

        gridLayout->addWidget(endDateLabel, 3, 0, 1, 1);

        usersComboBox = new QComboBox(DepositWidget);
        usersComboBox->setObjectName(QString::fromUtf8("usersComboBox"));

        gridLayout->addWidget(usersComboBox, 1, 1, 1, 3);

        usersLabel = new QLabel(DepositWidget);
        usersLabel->setObjectName(QString::fromUtf8("usersLabel"));

        gridLayout->addWidget(usersLabel, 1, 0, 1, 1);

        balanceDoubleSpinBox = new QDoubleSpinBox(DepositWidget);
        balanceDoubleSpinBox->setObjectName(QString::fromUtf8("balanceDoubleSpinBox"));

        gridLayout->addWidget(balanceDoubleSpinBox, 8, 1, 1, 2);

        balanceLabel = new QLabel(DepositWidget);
        balanceLabel->setObjectName(QString::fromUtf8("balanceLabel"));

        gridLayout->addWidget(balanceLabel, 8, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(DepositWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);

        balanceButton = new QPushButton(DepositWidget);
        balanceButton->setObjectName(QString::fromUtf8("balanceButton"));

        horizontalLayout->addWidget(balanceButton);

        cancelButton = new QPushButton(DepositWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        quitButton = new QPushButton(DepositWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        horizontalLayout->addWidget(quitButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        accountLabel->setBuddy(bankComboBox);
        cashLabel->setBuddy(cashDoubleSpinBox);
        checksLabel->setBuddy(checksDoubleSpinBox);
        visaLabel->setBuddy(visaDoubleSpinBox);
        otherLabel->setBuddy(otherDoubleSpinBox);
        commentLabel->setBuddy(commentEdit);
        beginDateLabel->setBuddy(beginDateEdit);
        endDateLabel->setBuddy(endDateEdit);
        usersLabel->setBuddy(usersComboBox);
        balanceLabel->setBuddy(balanceDoubleSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(DepositWidget);

        QMetaObject::connectSlotsByName(DepositWidget);
    } // setupUi

    void retranslateUi(QWidget *DepositWidget)
    {
        DepositWidget->setWindowTitle(QApplication::translate("DepositWidget", "Bank Deposits", 0, QApplication::UnicodeUTF8));
        accountLabel->setText(QApplication::translate("DepositWidget", "Bank Account", 0, QApplication::UnicodeUTF8));
        cashLabel->setText(QApplication::translate("DepositWidget", "Cash deposits", 0, QApplication::UnicodeUTF8));
        checksLabel->setText(QApplication::translate("DepositWidget", "Checks deposits", 0, QApplication::UnicodeUTF8));
        visaLabel->setText(QApplication::translate("DepositWidget", "Credit cards deposits", 0, QApplication::UnicodeUTF8));
        otherLabel->setText(QApplication::translate("DepositWidget", "Other deposits\n"
"(virements)", 0, QApplication::UnicodeUTF8));
        commentLabel->setText(QApplication::translate("DepositWidget", "Comment", 0, QApplication::UnicodeUTF8));
        beginDateLabel->setText(QApplication::translate("DepositWidget", "Begin date", 0, QApplication::UnicodeUTF8));
        endDateLabel->setText(QApplication::translate("DepositWidget", "End date", 0, QApplication::UnicodeUTF8));
        usersLabel->setText(QApplication::translate("DepositWidget", "Users", 0, QApplication::UnicodeUTF8));
        balanceLabel->setText(QApplication::translate("DepositWidget", "Last balance", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("DepositWidget", "&Record", 0, QApplication::UnicodeUTF8));
        balanceButton->setText(QApplication::translate("DepositWidget", "&Balance", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("DepositWidget", "&Cancel", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("DepositWidget", "&Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DepositWidget: public Ui_DepositWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITWIDGET_H
