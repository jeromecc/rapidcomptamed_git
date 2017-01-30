/********************************************************************************
** Form generated from reading UI file 'inputs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTS_H
#define UI_INPUTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputsWidget
{
public:
    QGridLayout *gridLayout_2;
    QCalendarWidget *calendarWidget;
    QLabel *inputsLabel;
    QLineEdit *inputsEdit;
    QVBoxLayout *verticalLayout;
    QRadioButton *especeButton;
    QRadioButton *checkButton;
    QRadioButton *cbButton;
    QRadioButton *virButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QGridLayout *gridLayout;
    QLabel *userLabel;
    QComboBox *userComboBox;
    QLabel *bankLabel;
    QComboBox *bankComboBox;
    QTableView *tableView;
    QLabel *resultLabel;

    void setupUi(QWidget *InputsWidget)
    {
        if (InputsWidget->objectName().isEmpty())
            InputsWidget->setObjectName(QString::fromUtf8("InputsWidget"));
        InputsWidget->resize(752, 604);
        gridLayout_2 = new QGridLayout(InputsWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        calendarWidget = new QCalendarWidget(InputsWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_2->addWidget(calendarWidget, 0, 0, 4, 1);

        inputsLabel = new QLabel(InputsWidget);
        inputsLabel->setObjectName(QString::fromUtf8("inputsLabel"));

        gridLayout_2->addWidget(inputsLabel, 0, 1, 1, 1);

        inputsEdit = new QLineEdit(InputsWidget);
        inputsEdit->setObjectName(QString::fromUtf8("inputsEdit"));
        inputsEdit->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(inputsEdit, 0, 2, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        especeButton = new QRadioButton(InputsWidget);
        especeButton->setObjectName(QString::fromUtf8("especeButton"));

        verticalLayout->addWidget(especeButton);

        checkButton = new QRadioButton(InputsWidget);
        checkButton->setObjectName(QString::fromUtf8("checkButton"));

        verticalLayout->addWidget(checkButton);

        cbButton = new QRadioButton(InputsWidget);
        cbButton->setObjectName(QString::fromUtf8("cbButton"));

        verticalLayout->addWidget(cbButton);

        virButton = new QRadioButton(InputsWidget);
        virButton->setObjectName(QString::fromUtf8("virButton"));

        verticalLayout->addWidget(virButton);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 3, 2);

        addButton = new QPushButton(InputsWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout_2->addWidget(addButton, 1, 3, 1, 1);

        deleteButton = new QPushButton(InputsWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout_2->addWidget(deleteButton, 2, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        userLabel = new QLabel(InputsWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        gridLayout->addWidget(userLabel, 0, 0, 1, 1);

        userComboBox = new QComboBox(InputsWidget);
        userComboBox->setObjectName(QString::fromUtf8("userComboBox"));

        gridLayout->addWidget(userComboBox, 0, 1, 1, 1);

        bankLabel = new QLabel(InputsWidget);
        bankLabel->setObjectName(QString::fromUtf8("bankLabel"));

        gridLayout->addWidget(bankLabel, 1, 0, 1, 1);

        bankComboBox = new QComboBox(InputsWidget);
        bankComboBox->setObjectName(QString::fromUtf8("bankComboBox"));

        gridLayout->addWidget(bankComboBox, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 3, 1, 1);

        tableView = new QTableView(InputsWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 4, 0, 1, 4);

        resultLabel = new QLabel(InputsWidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(resultLabel, 5, 0, 1, 1);


        retranslateUi(InputsWidget);

        QMetaObject::connectSlotsByName(InputsWidget);
    } // setupUi

    void retranslateUi(QWidget *InputsWidget)
    {
        InputsWidget->setWindowTitle(QApplication::translate("InputsWidget", "Form", 0, QApplication::UnicodeUTF8));
        inputsLabel->setText(QApplication::translate("InputsWidget", "Inputs", 0, QApplication::UnicodeUTF8));
        especeButton->setText(QApplication::translate("InputsWidget", "Especes", 0, QApplication::UnicodeUTF8));
        checkButton->setText(QApplication::translate("InputsWidget", "Cheques", 0, QApplication::UnicodeUTF8));
        cbButton->setText(QApplication::translate("InputsWidget", "Carte Bleue", 0, QApplication::UnicodeUTF8));
        virButton->setText(QApplication::translate("InputsWidget", "Virement", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("InputsWidget", "&Add", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("InputsWidget", "&Delete", 0, QApplication::UnicodeUTF8));
        userLabel->setText(QApplication::translate("InputsWidget", "Utilisateur", 0, QApplication::UnicodeUTF8));
        bankLabel->setText(QApplication::translate("InputsWidget", "Comptes", 0, QApplication::UnicodeUTF8));
        resultLabel->setText(QApplication::translate("InputsWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InputsWidget: public Ui_InputsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTS_H
