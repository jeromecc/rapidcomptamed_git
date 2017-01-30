/********************************************************************************
** Form generated from reading UI file 'sitesdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SITESDIALOG_H
#define UI_SITESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SitesDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QComboBox *comboBox;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QTextEdit *textEdit;
    QHBoxLayout *hboxLayout2;
    QLabel *label_3;
    QLineEdit *cpEdit;
    QHBoxLayout *hboxLayout3;
    QLabel *label_4;
    QLineEdit *townEdit;
    QHBoxLayout *hboxLayout4;
    QLabel *label_5;
    QLineEdit *phoneEdit;
    QHBoxLayout *hboxLayout5;
    QLabel *label_6;
    QLineEdit *faxEdit;
    QHBoxLayout *hboxLayout6;
    QLabel *label_7;
    QLineEdit *mailEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *recordButton;
    QPushButton *preferedButton;
    QPushButton *modifyButton;
    QPushButton *closeButton;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *delButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SitesDialog)
    {
        if (SitesDialog->objectName().isEmpty())
            SitesDialog->setObjectName(QString::fromUtf8("SitesDialog"));
        SitesDialog->resize(628, 498);
        gridLayout_2 = new QGridLayout(SitesDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(SitesDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(121, 20));

        horizontalLayout_2->addWidget(label_8);

        comboBox = new QComboBox(SitesDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(421, 30));

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(SitesDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(121, 20));

        hboxLayout->addWidget(label);

        nameEdit = new QLineEdit(SitesDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(431, 27));

        hboxLayout->addWidget(nameEdit);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(SitesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(121, 20));

        hboxLayout1->addWidget(label_2);

        textEdit = new QTextEdit(SitesDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(431, 131));

        hboxLayout1->addWidget(textEdit);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_3 = new QLabel(SitesDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(121, 20));

        hboxLayout2->addWidget(label_3);

        cpEdit = new QLineEdit(SitesDialog);
        cpEdit->setObjectName(QString::fromUtf8("cpEdit"));
        cpEdit->setMinimumSize(QSize(431, 27));

        hboxLayout2->addWidget(cpEdit);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_4 = new QLabel(SitesDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(121, 20));

        hboxLayout3->addWidget(label_4);

        townEdit = new QLineEdit(SitesDialog);
        townEdit->setObjectName(QString::fromUtf8("townEdit"));
        townEdit->setMinimumSize(QSize(431, 27));

        hboxLayout3->addWidget(townEdit);


        gridLayout->addLayout(hboxLayout3, 4, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_5 = new QLabel(SitesDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(121, 20));

        hboxLayout4->addWidget(label_5);

        phoneEdit = new QLineEdit(SitesDialog);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setMinimumSize(QSize(201, 27));

        hboxLayout4->addWidget(phoneEdit);


        gridLayout->addLayout(hboxLayout4, 5, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_6 = new QLabel(SitesDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(121, 20));

        hboxLayout5->addWidget(label_6);

        faxEdit = new QLineEdit(SitesDialog);
        faxEdit->setObjectName(QString::fromUtf8("faxEdit"));
        faxEdit->setMinimumSize(QSize(201, 27));

        hboxLayout5->addWidget(faxEdit);


        gridLayout->addLayout(hboxLayout5, 6, 0, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        label_7 = new QLabel(SitesDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(121, 20));

        hboxLayout6->addWidget(label_7);

        mailEdit = new QLineEdit(SitesDialog);
        mailEdit->setObjectName(QString::fromUtf8("mailEdit"));
        mailEdit->setMinimumSize(QSize(201, 27));

        hboxLayout6->addWidget(mailEdit);


        gridLayout->addLayout(hboxLayout6, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        recordButton = new QPushButton(SitesDialog);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setMinimumSize(QSize(80, 27));

        horizontalLayout->addWidget(recordButton);

        preferedButton = new QPushButton(SitesDialog);
        preferedButton->setObjectName(QString::fromUtf8("preferedButton"));

        horizontalLayout->addWidget(preferedButton);

        modifyButton = new QPushButton(SitesDialog);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));

        horizontalLayout->addWidget(modifyButton);

        closeButton = new QPushButton(SitesDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(80, 27));

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(SitesDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        delButton = new QPushButton(SitesDialog);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        verticalLayout->addWidget(delButton);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 409, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(nameEdit);
        label_2->setBuddy(textEdit);
        label_3->setBuddy(cpEdit);
        label_4->setBuddy(townEdit);
        label_5->setBuddy(phoneEdit);
        label_6->setBuddy(faxEdit);
        label_7->setBuddy(mailEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(SitesDialog);

        QMetaObject::connectSlotsByName(SitesDialog);
    } // setupUi

    void retranslateUi(QWidget *SitesDialog)
    {
        SitesDialog->setWindowTitle(QApplication::translate("SitesDialog", "Liste des sites d'activit\303\251", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SitesDialog", "Liste des sites", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SitesDialog", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SitesDialog", "Adresse", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SitesDialog", "Code Postal", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SitesDialog", "Ville", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SitesDialog", "T\303\251l\303\251phone", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SitesDialog", "Fax", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SitesDialog", "Mail", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("SitesDialog", "Enregi&strer", 0, QApplication::UnicodeUTF8));
        preferedButton->setText(QApplication::translate("SitesDialog", "Choisir \n"
"comme pr\303\251f\303\251rentiel", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("SitesDialog", "&Modifier", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("SitesDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("SitesDialog", "Add", 0, QApplication::UnicodeUTF8));
        delButton->setText(QApplication::translate("SitesDialog", "Del", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SitesDialog: public Ui_SitesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SITESDIALOG_H
