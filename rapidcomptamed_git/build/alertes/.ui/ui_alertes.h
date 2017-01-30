/********************************************************************************
** Form generated from reading UI file 'alertes.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTES_H
#define UI_ALERTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlertesWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCalendarWidget *calendar;
    QLabel *tableLabel;
    QLabel *alertesLabel;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *recordButton;
    QPushButton *deleteButton;
    QPushButton *quitButton;
    QLineEdit *alerteEdit;
    QLabel *userLabel;
    QComboBox *usersBox;

    void setupUi(QWidget *AlertesWidget)
    {
        if (AlertesWidget->objectName().isEmpty())
            AlertesWidget->setObjectName(QString::fromUtf8("AlertesWidget"));
        AlertesWidget->resize(968, 565);
        gridLayout_2 = new QGridLayout(AlertesWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        calendar = new QCalendarWidget(AlertesWidget);
        calendar->setObjectName(QString::fromUtf8("calendar"));

        gridLayout->addWidget(calendar, 3, 1, 3, 1);

        tableLabel = new QLabel(AlertesWidget);
        tableLabel->setObjectName(QString::fromUtf8("tableLabel"));

        gridLayout->addWidget(tableLabel, 4, 0, 1, 1);

        alertesLabel = new QLabel(AlertesWidget);
        alertesLabel->setObjectName(QString::fromUtf8("alertesLabel"));

        gridLayout->addWidget(alertesLabel, 1, 0, 1, 1);

        tableView = new QTableView(AlertesWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 5, 0, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        recordButton = new QPushButton(AlertesWidget);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(recordButton);

        deleteButton = new QPushButton(AlertesWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(deleteButton);

        quitButton = new QPushButton(AlertesWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(quitButton);


        gridLayout->addLayout(horizontalLayout, 6, 1, 1, 1);

        alerteEdit = new QLineEdit(AlertesWidget);
        alerteEdit->setObjectName(QString::fromUtf8("alerteEdit"));
        alerteEdit->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(alerteEdit, 3, 0, 1, 1);

        userLabel = new QLabel(AlertesWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        gridLayout->addWidget(userLabel, 1, 1, 1, 1);

        usersBox = new QComboBox(AlertesWidget);
        usersBox->setObjectName(QString::fromUtf8("usersBox"));
        usersBox->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(usersBox, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(AlertesWidget);

        QMetaObject::connectSlotsByName(AlertesWidget);
    } // setupUi

    void retranslateUi(QWidget *AlertesWidget)
    {
        AlertesWidget->setWindowTitle(QApplication::translate("AlertesWidget", "Alertes paiement", 0, QApplication::UnicodeUTF8));
        tableLabel->setText(QApplication::translate("AlertesWidget", "Tableau des alertes, ID, et dates", 0, QApplication::UnicodeUTF8));
        alertesLabel->setText(QApplication::translate("AlertesWidget", "Inscrire la nouvelle alerte", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("AlertesWidget", "En&registre", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("AlertesWidget", "E&fface", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("AlertesWidget", "&quitter", 0, QApplication::UnicodeUTF8));
        userLabel->setText(QApplication::translate("AlertesWidget", "Utilisateurs", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AlertesWidget: public Ui_AlertesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTES_H
