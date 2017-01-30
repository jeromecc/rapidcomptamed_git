/********************************************************************************
** Form generated from reading UI file 'movementsChecking.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEMENTSCHECKING_H
#define UI_MOVEMENTSCHECKING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_movementsCheckingWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QLabel *endDateLabel;
    QLabel *userLabel;
    QPushButton *cancelButton;
    QPushButton *recordButton;
    QLabel *label;
    QDateEdit *dateEndEdit;
    QLabel *beginDateLabel;
    QPushButton *closeButton;
    QDateEdit *dateBeginEdit;
    QComboBox *comboBoxUsers;
    QLabel *labelAlpha;

    void setupUi(QWidget *movementsCheckingWidget)
    {
        if (movementsCheckingWidget->objectName().isEmpty())
            movementsCheckingWidget->setObjectName(QString::fromUtf8("movementsCheckingWidget"));
        movementsCheckingWidget->resize(575, 416);
        gridLayout_2 = new QGridLayout(movementsCheckingWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(movementsCheckingWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 5);

        endDateLabel = new QLabel(movementsCheckingWidget);
        endDateLabel->setObjectName(QString::fromUtf8("endDateLabel"));
        endDateLabel->setWordWrap(true);

        gridLayout->addWidget(endDateLabel, 2, 3, 1, 1);

        userLabel = new QLabel(movementsCheckingWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        gridLayout->addWidget(userLabel, 4, 2, 1, 1);

        cancelButton = new QPushButton(movementsCheckingWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 4, 4, 1, 1);

        recordButton = new QPushButton(movementsCheckingWidget);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        gridLayout->addWidget(recordButton, 4, 3, 1, 1);

        label = new QLabel(movementsCheckingWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(270, 70));

        gridLayout->addWidget(label, 3, 0, 3, 2);

        dateEndEdit = new QDateEdit(movementsCheckingWidget);
        dateEndEdit->setObjectName(QString::fromUtf8("dateEndEdit"));

        gridLayout->addWidget(dateEndEdit, 2, 4, 1, 1);

        beginDateLabel = new QLabel(movementsCheckingWidget);
        beginDateLabel->setObjectName(QString::fromUtf8("beginDateLabel"));
        beginDateLabel->setWordWrap(true);

        gridLayout->addWidget(beginDateLabel, 2, 0, 1, 1);

        closeButton = new QPushButton(movementsCheckingWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout->addWidget(closeButton, 5, 4, 1, 1);

        dateBeginEdit = new QDateEdit(movementsCheckingWidget);
        dateBeginEdit->setObjectName(QString::fromUtf8("dateBeginEdit"));

        gridLayout->addWidget(dateBeginEdit, 2, 1, 1, 1);

        comboBoxUsers = new QComboBox(movementsCheckingWidget);
        comboBoxUsers->setObjectName(QString::fromUtf8("comboBoxUsers"));

        gridLayout->addWidget(comboBoxUsers, 5, 2, 1, 2);

        labelAlpha = new QLabel(movementsCheckingWidget);
        labelAlpha->setObjectName(QString::fromUtf8("labelAlpha"));
        labelAlpha->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(labelAlpha, 0, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(movementsCheckingWidget);

        QMetaObject::connectSlotsByName(movementsCheckingWidget);
    } // setupUi

    void retranslateUi(QWidget *movementsCheckingWidget)
    {
        movementsCheckingWidget->setWindowTitle(QApplication::translate("movementsCheckingWidget", "Pointer les mouvements", 0, QApplication::UnicodeUTF8));
        endDateLabel->setText(QApplication::translate("movementsCheckingWidget", "Date fin", 0, QApplication::UnicodeUTF8));
        userLabel->setText(QApplication::translate("movementsCheckingWidget", "Utilisateur", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("movementsCheckingWidget", "&Cancel", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("movementsCheckingWidget", "Enregi&stre", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("movementsCheckingWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        beginDateLabel->setText(QApplication::translate("movementsCheckingWidget", "Date d\303\251but", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("movementsCheckingWidget", "&Quitter", 0, QApplication::UnicodeUTF8));
        labelAlpha->setText(QApplication::translate("movementsCheckingWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class movementsCheckingWidget: public Ui_movementsCheckingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEMENTSCHECKING_H
