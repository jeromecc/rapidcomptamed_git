/********************************************************************************
** Form generated from reading UI file 'actesdispodialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTESDISPODIALOG_H
#define UI_ACTESDISPODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActesdispoDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *actsComboBox;
    QLabel *label;
    QLineEdit *codeEdit;
    QLabel *label_2;
    QLineEdit *descriptionEdit;
    QLabel *label_6;
    QLineEdit *modeEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *totalValueEdit;
    QLabel *label_5;
    QLineEdit *partialValueEdit;
    QLabel *dateLabel;
    QDateEdit *dateEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *recordButton;
    QPushButton *quitButton;
    QComboBox *tableComboBox;
    QLabel *typeLabel;

    void setupUi(QWidget *ActesdispoDialog)
    {
        if (ActesdispoDialog->objectName().isEmpty())
            ActesdispoDialog->setObjectName(QString::fromUtf8("ActesdispoDialog"));
        ActesdispoDialog->resize(536, 318);
        gridLayout = new QGridLayout(ActesdispoDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        actsComboBox = new QComboBox(ActesdispoDialog);
        actsComboBox->setObjectName(QString::fromUtf8("actsComboBox"));
        actsComboBox->setMinimumSize(QSize(321, 27));

        gridLayout->addWidget(actsComboBox, 1, 1, 1, 2);

        label = new QLabel(ActesdispoDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(141, 20));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        codeEdit = new QLineEdit(ActesdispoDialog);
        codeEdit->setObjectName(QString::fromUtf8("codeEdit"));
        codeEdit->setMinimumSize(QSize(321, 27));

        gridLayout->addWidget(codeEdit, 3, 1, 1, 2);

        label_2 = new QLabel(ActesdispoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(141, 20));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        descriptionEdit = new QLineEdit(ActesdispoDialog);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));
        descriptionEdit->setMinimumSize(QSize(321, 27));

        gridLayout->addWidget(descriptionEdit, 4, 1, 1, 2);

        label_6 = new QLabel(ActesdispoDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(141, 20));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        modeEdit = new QLineEdit(ActesdispoDialog);
        modeEdit->setObjectName(QString::fromUtf8("modeEdit"));

        gridLayout->addWidget(modeEdit, 5, 1, 1, 1);

        label_3 = new QLabel(ActesdispoDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(141, 20));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_4 = new QLabel(ActesdispoDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(141, 20));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        totalValueEdit = new QLineEdit(ActesdispoDialog);
        totalValueEdit->setObjectName(QString::fromUtf8("totalValueEdit"));
        totalValueEdit->setMinimumSize(QSize(321, 27));

        gridLayout->addWidget(totalValueEdit, 6, 1, 1, 2);

        label_5 = new QLabel(ActesdispoDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(141, 20));

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        partialValueEdit = new QLineEdit(ActesdispoDialog);
        partialValueEdit->setObjectName(QString::fromUtf8("partialValueEdit"));
        partialValueEdit->setMinimumSize(QSize(321, 27));

        gridLayout->addWidget(partialValueEdit, 7, 1, 1, 2);

        dateLabel = new QLabel(ActesdispoDialog);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setMinimumSize(QSize(141, 20));

        gridLayout->addWidget(dateLabel, 8, 0, 1, 1);

        dateEdit = new QDateEdit(ActesdispoDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 8, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        addButton = new QPushButton(ActesdispoDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        hboxLayout->addWidget(addButton);

        deleteButton = new QPushButton(ActesdispoDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        hboxLayout->addWidget(deleteButton);

        recordButton = new QPushButton(ActesdispoDialog);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        hboxLayout->addWidget(recordButton);

        quitButton = new QPushButton(ActesdispoDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        hboxLayout->addWidget(quitButton);


        gridLayout->addLayout(hboxLayout, 9, 0, 1, 3);

        tableComboBox = new QComboBox(ActesdispoDialog);
        tableComboBox->setObjectName(QString::fromUtf8("tableComboBox"));
        tableComboBox->setMinimumSize(QSize(321, 0));

        gridLayout->addWidget(tableComboBox, 0, 1, 1, 1);

        typeLabel = new QLabel(ActesdispoDialog);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setWordWrap(true);

        gridLayout->addWidget(typeLabel, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(codeEdit);
        label_2->setBuddy(descriptionEdit);
        label_6->setBuddy(actsComboBox);
        label_4->setBuddy(totalValueEdit);
        label_5->setBuddy(partialValueEdit);
        dateLabel->setBuddy(dateEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ActesdispoDialog);

        QMetaObject::connectSlotsByName(ActesdispoDialog);
    } // setupUi

    void retranslateUi(QWidget *ActesdispoDialog)
    {
        ActesdispoDialog->setWindowTitle(QApplication::translate("ActesdispoDialog", "Saisir ou modifier des actes  dans la base.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ActesdispoDialog", "Code de l'acte", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ActesdispoDialog", "Description", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ActesdispoDialog", "Actes", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ActesdispoDialog", "Type d'acte", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ActesdispoDialog", "Valeur totale", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ActesdispoDialog", "Valeur tiers", 0, QApplication::UnicodeUTF8));
        dateLabel->setText(QApplication::translate("ActesdispoDialog", "Date effet", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("ActesdispoDialog", "&Nouveau", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("ActesdispoDialog", "E&ffacer", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("ActesdispoDialog", "Enregi&strer", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ActesdispoDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("ActesdispoDialog", "Table", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ActesdispoDialog: public Ui_ActesdispoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTESDISPODIALOG_H
