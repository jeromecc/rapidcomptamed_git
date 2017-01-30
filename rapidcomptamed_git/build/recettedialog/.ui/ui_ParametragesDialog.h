/********************************************************************************
** Form generated from reading UI file 'ParametragesDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETRAGESDIALOG_H
#define UI_PARAMETRAGESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametrageDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QPushButton *thesaurusButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *quitButton;
    QPushButton *reinitConfigButton;
    QPushButton *pushButton_9;
    QPushButton *configmedintuxdatasButton;
    QPushButton *configiniButton;

    void setupUi(QWidget *ParametrageDialog)
    {
        if (ParametrageDialog->objectName().isEmpty())
            ParametrageDialog->setObjectName(QString::fromUtf8("ParametrageDialog"));
        ParametrageDialog->resize(415, 512);
        ParametrageDialog->setMinimumSize(QSize(190, 51));
        gridLayout_2 = new QGridLayout(ParametrageDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(ParametrageDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_11 = new QPushButton(ParametrageDialog);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton_11, 1, 0, 1, 1);

        thesaurusButton = new QPushButton(ParametrageDialog);
        thesaurusButton->setObjectName(QString::fromUtf8("thesaurusButton"));
        thesaurusButton->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(thesaurusButton, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(ParametrageDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(ParametrageDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton_4, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(ParametrageDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(190, 57));

        gridLayout->addWidget(pushButton_5, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(ParametrageDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton_6, 3, 1, 1, 1);

        pushButton = new QPushButton(ParametrageDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(ParametrageDialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_8 = new QPushButton(ParametrageDialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton_8, 4, 1, 1, 1);

        quitButton = new QPushButton(ParametrageDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(quitButton, 7, 1, 1, 1);

        reinitConfigButton = new QPushButton(ParametrageDialog);
        reinitConfigButton->setObjectName(QString::fromUtf8("reinitConfigButton"));
        reinitConfigButton->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(reinitConfigButton, 5, 0, 1, 1);

        pushButton_9 = new QPushButton(ParametrageDialog);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(pushButton_9, 5, 1, 1, 1);

        configmedintuxdatasButton = new QPushButton(ParametrageDialog);
        configmedintuxdatasButton->setObjectName(QString::fromUtf8("configmedintuxdatasButton"));
        configmedintuxdatasButton->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(configmedintuxdatasButton, 7, 0, 1, 1);

        configiniButton = new QPushButton(ParametrageDialog);
        configiniButton->setObjectName(QString::fromUtf8("configiniButton"));
        configiniButton->setMinimumSize(QSize(190, 51));

        gridLayout->addWidget(configiniButton, 6, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ParametrageDialog);

        QMetaObject::connectSlotsByName(ParametrageDialog);
    } // setupUi

    void retranslateUi(QWidget *ParametrageDialog)
    {
        ParametrageDialog->setWindowTitle(QApplication::translate("ParametrageDialog", "Param\303\251trages", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ParametrageDialog", "Configurer les utilisateurs\n"
" de la comptabilit\303\251", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("ParametrageDialog", "Param\303\251trage des \n"
"ent\303\252tes et pieds de page.", 0, QApplication::UnicodeUTF8));
        thesaurusButton->setText(QApplication::translate("ParametrageDialog", "Modifier le Thesaurus\n"
"personnel", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ParametrageDialog", "Param\303\251trer les sites", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ParametrageDialog", "Entrer un Payeur", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ParametrageDialog", "Entrer un pourcentage\n"
"de paiement", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("ParametrageDialog", "Entrer un Acte", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ParametrageDialog", "Utilisateur,compte\n"
" et acte pr\303\251f\303\251rentiel", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("ParametrageDialog", "Automatisme de fermeture\n"
"de Recettes", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("ParametrageDialog", "Compl\303\251ter la base\n"
"comptabilite", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ParametrageDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
        reinitConfigButton->setText(QApplication::translate("ParametrageDialog", "R\303\251initialiser le fichier\n"
" de configuration.", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("ParametrageDialog", "Rapport de Bug", 0, QApplication::UnicodeUTF8));
        configmedintuxdatasButton->setText(QApplication::translate("ParametrageDialog", "Configurer le fichier \n"
"de liaison avec MedinTux", 0, QApplication::UnicodeUTF8));
        configiniButton->setText(QApplication::translate("ParametrageDialog", "Configurer\n"
" rapidecomptabilite", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParametrageDialog: public Ui_ParametrageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETRAGESDIALOG_H
