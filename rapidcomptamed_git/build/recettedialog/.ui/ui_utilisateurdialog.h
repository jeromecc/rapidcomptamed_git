/********************************************************************************
** Form generated from reading UI file 'utilisateurdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTILISATEURDIALOG_H
#define UI_UTILISATEURDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UtilisateursDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout1;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *loginEdit;
    QLineEdit *soldeEdit;
    QLabel *label;
    QComboBox *comboUserName;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *passwdEdit;
    QLabel *label_4;
    QCheckBox *verrouCheckBox;
    QComboBox *comboBankName;
    QComboBox *comboLibelle;
    QGridLayout *gridLayout2;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *codeBankEdit;
    QLineEdit *guichetEdit;
    QLineEdit *ribCompteEdit;
    QLineEdit *cleEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *newButton;
    QPushButton *modifierButton;
    QPushButton *recordButton;
    QPushButton *removeButton;
    QPushButton *choosePrefButton;
    QPushButton *quitButton;

    void setupUi(QWidget *UtilisateursDialog)
    {
        if (UtilisateursDialog->objectName().isEmpty())
            UtilisateursDialog->setObjectName(QString::fromUtf8("UtilisateursDialog"));
        UtilisateursDialog->setWindowModality(Qt::ApplicationModal);
        UtilisateursDialog->resize(653, 373);
        gridLayout = new QGridLayout(UtilisateursDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_5 = new QLabel(UtilisateursDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(UtilisateursDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout1->addWidget(label_6, 5, 0, 1, 1);

        loginEdit = new QLineEdit(UtilisateursDialog);
        loginEdit->setObjectName(QString::fromUtf8("loginEdit"));

        gridLayout1->addWidget(loginEdit, 1, 1, 1, 1);

        soldeEdit = new QLineEdit(UtilisateursDialog);
        soldeEdit->setObjectName(QString::fromUtf8("soldeEdit"));

        gridLayout1->addWidget(soldeEdit, 4, 1, 1, 1);

        label = new QLabel(UtilisateursDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 24));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        comboUserName = new QComboBox(UtilisateursDialog);
        comboUserName->setObjectName(QString::fromUtf8("comboUserName"));

        gridLayout1->addWidget(comboUserName, 0, 1, 1, 1);

        label_2 = new QLabel(UtilisateursDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(UtilisateursDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        passwdEdit = new QLineEdit(UtilisateursDialog);
        passwdEdit->setObjectName(QString::fromUtf8("passwdEdit"));

        gridLayout1->addWidget(passwdEdit, 2, 1, 1, 1);

        label_4 = new QLabel(UtilisateursDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 3, 0, 1, 1);

        verrouCheckBox = new QCheckBox(UtilisateursDialog);
        verrouCheckBox->setObjectName(QString::fromUtf8("verrouCheckBox"));

        gridLayout1->addWidget(verrouCheckBox, 1, 2, 1, 1);

        comboBankName = new QComboBox(UtilisateursDialog);
        comboBankName->setObjectName(QString::fromUtf8("comboBankName"));

        gridLayout1->addWidget(comboBankName, 5, 1, 1, 2);

        comboLibelle = new QComboBox(UtilisateursDialog);
        comboLibelle->setObjectName(QString::fromUtf8("comboLibelle"));

        gridLayout1->addWidget(comboLibelle, 3, 1, 1, 2);


        vboxLayout->addLayout(gridLayout1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_7 = new QLabel(UtilisateursDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout2->addWidget(label_7, 0, 0, 1, 1);

        label_9 = new QLabel(UtilisateursDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout2->addWidget(label_9, 0, 1, 1, 1);

        label_8 = new QLabel(UtilisateursDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout2->addWidget(label_8, 0, 2, 1, 1);

        label_10 = new QLabel(UtilisateursDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout2->addWidget(label_10, 0, 3, 1, 1);

        codeBankEdit = new QLineEdit(UtilisateursDialog);
        codeBankEdit->setObjectName(QString::fromUtf8("codeBankEdit"));

        gridLayout2->addWidget(codeBankEdit, 1, 0, 1, 1);

        guichetEdit = new QLineEdit(UtilisateursDialog);
        guichetEdit->setObjectName(QString::fromUtf8("guichetEdit"));

        gridLayout2->addWidget(guichetEdit, 1, 1, 1, 1);

        ribCompteEdit = new QLineEdit(UtilisateursDialog);
        ribCompteEdit->setObjectName(QString::fromUtf8("ribCompteEdit"));

        gridLayout2->addWidget(ribCompteEdit, 1, 2, 1, 1);

        cleEdit = new QLineEdit(UtilisateursDialog);
        cleEdit->setObjectName(QString::fromUtf8("cleEdit"));

        gridLayout2->addWidget(cleEdit, 1, 3, 1, 1);


        vboxLayout->addLayout(gridLayout2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        newButton = new QPushButton(UtilisateursDialog);
        newButton->setObjectName(QString::fromUtf8("newButton"));

        hboxLayout->addWidget(newButton);

        modifierButton = new QPushButton(UtilisateursDialog);
        modifierButton->setObjectName(QString::fromUtf8("modifierButton"));

        hboxLayout->addWidget(modifierButton);

        recordButton = new QPushButton(UtilisateursDialog);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        hboxLayout->addWidget(recordButton);

        removeButton = new QPushButton(UtilisateursDialog);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        hboxLayout->addWidget(removeButton);

        choosePrefButton = new QPushButton(UtilisateursDialog);
        choosePrefButton->setObjectName(QString::fromUtf8("choosePrefButton"));

        hboxLayout->addWidget(choosePrefButton);

        quitButton = new QPushButton(UtilisateursDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        hboxLayout->addWidget(quitButton);


        vboxLayout->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_6->setBuddy(comboBankName);
        label->setBuddy(comboUserName);
        label_3->setBuddy(passwdEdit);
        label_4->setBuddy(comboLibelle);
        label_7->setBuddy(codeBankEdit);
        label_9->setBuddy(guichetEdit);
        label_8->setBuddy(ribCompteEdit);
        label_10->setBuddy(cleEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboUserName, loginEdit);
        QWidget::setTabOrder(loginEdit, passwdEdit);
        QWidget::setTabOrder(passwdEdit, comboLibelle);
        QWidget::setTabOrder(comboLibelle, soldeEdit);
        QWidget::setTabOrder(soldeEdit, comboBankName);
        QWidget::setTabOrder(comboBankName, codeBankEdit);
        QWidget::setTabOrder(codeBankEdit, guichetEdit);
        QWidget::setTabOrder(guichetEdit, ribCompteEdit);
        QWidget::setTabOrder(ribCompteEdit, cleEdit);
        QWidget::setTabOrder(cleEdit, removeButton);
        QWidget::setTabOrder(removeButton, choosePrefButton);
        QWidget::setTabOrder(choosePrefButton, quitButton);
        QWidget::setTabOrder(quitButton, recordButton);
        QWidget::setTabOrder(recordButton, modifierButton);
        QWidget::setTabOrder(modifierButton, newButton);

        retranslateUi(UtilisateursDialog);

        QMetaObject::connectSlotsByName(UtilisateursDialog);
    } // setupUi

    void retranslateUi(QWidget *UtilisateursDialog)
    {
        UtilisateursDialog->setWindowTitle(QApplication::translate("UtilisateursDialog", "Configuration des param\303\250tres de l'utilisateur.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UtilisateursDialog", "Solde initial", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("UtilisateursDialog", "Nom de la Banque", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UtilisateursDialog", "Nom user", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UtilisateursDialog", "Login", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UtilisateursDialog", "Password", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UtilisateursDialog", "Libell\303\251 du compte\n"
"bancaire", 0, QApplication::UnicodeUTF8));
        verrouCheckBox->setText(QApplication::translate("UtilisateursDialog", "Verrou", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("UtilisateursDialog", "code banque", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("UtilisateursDialog", "code guichet", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("UtilisateursDialog", "num\303\251ro de compte", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("UtilisateursDialog", "cl\303\251", 0, QApplication::UnicodeUTF8));
        newButton->setText(QApplication::translate("UtilisateursDialog", "&Nouveau", 0, QApplication::UnicodeUTF8));
        modifierButton->setText(QApplication::translate("UtilisateursDialog", "&Modifier", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("UtilisateursDialog", "&Enregistrer", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("UtilisateursDialog", "Effa&cer", 0, QApplication::UnicodeUTF8));
        choosePrefButton->setText(QApplication::translate("UtilisateursDialog", "Choisir \n"
"comme &pr\303\251f\303\251rentiel", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("UtilisateursDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UtilisateursDialog: public Ui_UtilisateursDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTILISATEURDIALOG_H
