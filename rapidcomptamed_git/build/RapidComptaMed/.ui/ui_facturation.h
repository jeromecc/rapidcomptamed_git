/********************************************************************************
** Form generated from reading UI file 'facturation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURATION_H
#define UI_FACTURATION_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FacturationWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *listFactureLabel;
    QComboBox *listFacturesIdComboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *newButton;
    QPushButton *eraseButton;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *prenomLabel;
    QLineEdit *firstnameEdit;
    QLabel *datepaiementLabel;
    QDateEdit *dateEdit;
    QTableView *tableView;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *printButton;
    QPushButton *recordButton;
    QPushButton *quitButton;
    QLabel *labelAlpha;

    void setupUi(QWidget *FacturationWidget)
    {
        if (FacturationWidget->objectName().isEmpty())
            FacturationWidget->setObjectName(QString::fromUtf8("FacturationWidget"));
        FacturationWidget->resize(748, 528);
        gridLayout = new QGridLayout(FacturationWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listFactureLabel = new QLabel(FacturationWidget);
        listFactureLabel->setObjectName(QString::fromUtf8("listFactureLabel"));
        listFactureLabel->setWordWrap(true);

        gridLayout->addWidget(listFactureLabel, 0, 0, 1, 1);

        listFacturesIdComboBox = new QComboBox(FacturationWidget);
        listFacturesIdComboBox->setObjectName(QString::fromUtf8("listFacturesIdComboBox"));

        gridLayout->addWidget(listFacturesIdComboBox, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(323, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 4);

        newButton = new QPushButton(FacturationWidget);
        newButton->setObjectName(QString::fromUtf8("newButton"));

        gridLayout->addWidget(newButton, 1, 0, 1, 1);

        eraseButton = new QPushButton(FacturationWidget);
        eraseButton->setObjectName(QString::fromUtf8("eraseButton"));

        gridLayout->addWidget(eraseButton, 1, 2, 1, 1);

        nameLabel = new QLabel(FacturationWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setWordWrap(true);

        gridLayout->addWidget(nameLabel, 2, 0, 1, 1);

        nameEdit = new QLineEdit(FacturationWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 2, 2, 1, 1);

        prenomLabel = new QLabel(FacturationWidget);
        prenomLabel->setObjectName(QString::fromUtf8("prenomLabel"));
        prenomLabel->setWordWrap(true);

        gridLayout->addWidget(prenomLabel, 2, 3, 1, 1);

        firstnameEdit = new QLineEdit(FacturationWidget);
        firstnameEdit->setObjectName(QString::fromUtf8("firstnameEdit"));

        gridLayout->addWidget(firstnameEdit, 2, 4, 1, 1);

        datepaiementLabel = new QLabel(FacturationWidget);
        datepaiementLabel->setObjectName(QString::fromUtf8("datepaiementLabel"));
        datepaiementLabel->setWordWrap(true);

        gridLayout->addWidget(datepaiementLabel, 2, 5, 1, 1);

        dateEdit = new QDateEdit(FacturationWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 2, 6, 1, 1);

        tableView = new QTableView(FacturationWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 3, 0, 1, 7);

        addButton = new QPushButton(FacturationWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 4, 0, 1, 1);

        deleteButton = new QPushButton(FacturationWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout->addWidget(deleteButton, 4, 1, 1, 1);

        printButton = new QPushButton(FacturationWidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));

        gridLayout->addWidget(printButton, 4, 2, 1, 1);

        recordButton = new QPushButton(FacturationWidget);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        gridLayout->addWidget(recordButton, 4, 3, 1, 2);

        quitButton = new QPushButton(FacturationWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setEnabled(true);

        gridLayout->addWidget(quitButton, 4, 5, 1, 2);

        labelAlpha = new QLabel(FacturationWidget);
        labelAlpha->setObjectName(QString::fromUtf8("labelAlpha"));
        labelAlpha->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        labelAlpha->setWordWrap(true);

        gridLayout->addWidget(labelAlpha, 1, 3, 1, 3);

        QWidget::setTabOrder(listFacturesIdComboBox, newButton);
        QWidget::setTabOrder(newButton, eraseButton);
        QWidget::setTabOrder(eraseButton, nameEdit);
        QWidget::setTabOrder(nameEdit, firstnameEdit);
        QWidget::setTabOrder(firstnameEdit, dateEdit);
        QWidget::setTabOrder(dateEdit, addButton);
        QWidget::setTabOrder(addButton, deleteButton);
        QWidget::setTabOrder(deleteButton, recordButton);
        QWidget::setTabOrder(recordButton, quitButton);
        QWidget::setTabOrder(quitButton, tableView);

        retranslateUi(FacturationWidget);

        QMetaObject::connectSlotsByName(FacturationWidget);
    } // setupUi

    void retranslateUi(QWidget *FacturationWidget)
    {
        FacturationWidget->setWindowTitle(QApplication::translate("FacturationWidget", "Facturation", 0, QApplication::UnicodeUTF8));
        listFactureLabel->setText(QApplication::translate("FacturationWidget", "Liste des factures", 0, QApplication::UnicodeUTF8));
        newButton->setText(QApplication::translate("FacturationWidget", "Nouvelle facture", 0, QApplication::UnicodeUTF8));
        eraseButton->setText(QApplication::translate("FacturationWidget", "Effacer la facture", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("FacturationWidget", "Nom", 0, QApplication::UnicodeUTF8));
        prenomLabel->setText(QApplication::translate("FacturationWidget", "Pr\303\251nom", 0, QApplication::UnicodeUTF8));
        datepaiementLabel->setText(QApplication::translate("FacturationWidget", "Date", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("FacturationWidget", "Ajouter une ligne", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("FacturationWidget", "Effacer une ligne", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("FacturationWidget", "Im&primer", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("FacturationWidget", "Enregistre", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("FacturationWidget", "quit", 0, QApplication::UnicodeUTF8));
        labelAlpha->setText(QApplication::translate("FacturationWidget", "Cette partie est en stade alpha.\n"
"Uniquement pour les testeurs.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FacturationWidget: public Ui_FacturationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURATION_H
