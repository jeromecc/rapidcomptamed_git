/********************************************************************************
** Form generated from reading UI file 'depensedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPENSEDIALOG_H
#define UI_DEPENSEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepenseDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *movementsComboBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QComboBox *comboBoxLogins;
    QPushButton *pushButton_2;
    QComboBox *bankComboBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *spacerItem1;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *detailEdit;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QComboBox *percentageComboBox;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QLabel *yearLabel;
    QComboBox *yearComboBox;
    QPushButton *errorButton;
    QDateEdit *bankingtransactiondateEdit;
    QLabel *bankingtransactionlabel;
    QTableView *tableView;
    QHBoxLayout *hboxLayout2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout1;
    QCheckBox *especes;
    QCheckBox *cheque;
    QCheckBox *carte_bancaire;
    QCheckBox *prelevement_bancaire;
    QCheckBox *virement;
    QPushButton *pushButton;
    QGridLayout *gridLayout2;
    QPushButton *pushButton_3;
    QSpacerItem *spacerItem4;
    QPushButton *valideFactureButton;
    QPushButton *pushButton_4;
    QPushButton *bankDebitButton;
    QPushButton *analyseButton;
    QCheckBox *factureBox;
    QLabel *totauxLabel;
    QLabel *sumLabel;

    void setupUi(QWidget *DepenseDialog)
    {
        if (DepenseDialog->objectName().isEmpty())
            DepenseDialog->setObjectName(QString::fromUtf8("DepenseDialog"));
        DepenseDialog->resize(850, 555);
        DepenseDialog->setMinimumSize(QSize(750, 540));
        gridLayout_3 = new QGridLayout(DepenseDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DepenseDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 24));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        movementsComboBox = new QComboBox(DepenseDialog);
        movementsComboBox->setObjectName(QString::fromUtf8("movementsComboBox"));
        movementsComboBox->setMinimumSize(QSize(200, 24));
        movementsComboBox->setMaximumSize(QSize(16777215, 26));

        gridLayout->addWidget(movementsComboBox, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_4 = new QLabel(DepenseDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout->addWidget(label_4);

        comboBoxLogins = new QComboBox(DepenseDialog);
        comboBoxLogins->setObjectName(QString::fromUtf8("comboBoxLogins"));
        comboBoxLogins->setMinimumSize(QSize(80, 24));

        hboxLayout->addWidget(comboBoxLogins);


        gridLayout->addLayout(hboxLayout, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(DepenseDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(41, 31));

        gridLayout->addWidget(pushButton_2, 0, 4, 2, 2);

        bankComboBox = new QComboBox(DepenseDialog);
        bankComboBox->setObjectName(QString::fromUtf8("bankComboBox"));
        bankComboBox->setMinimumSize(QSize(151, 0));

        gridLayout->addWidget(bankComboBox, 1, 5, 2, 2);

        label_3 = new QLabel(DepenseDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(151, 24));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(DepenseDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 30));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 2, 2, 1, 1);

        label_7 = new QLabel(DepenseDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(131, 0));

        gridLayout->addWidget(label_7, 2, 3, 1, 1);

        label_6 = new QLabel(DepenseDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(101, 21));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        detailEdit = new QLineEdit(DepenseDialog);
        detailEdit->setObjectName(QString::fromUtf8("detailEdit"));
        detailEdit->setMinimumSize(QSize(311, 27));

        gridLayout->addWidget(detailEdit, 3, 1, 1, 2);

        label_5 = new QLabel(DepenseDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(150, 24));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        dateEdit = new QDateEdit(DepenseDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMaximumSize(QSize(109, 24));

        gridLayout->addWidget(dateEdit, 4, 1, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(DepenseDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        percentageComboBox = new QComboBox(DepenseDialog);
        percentageComboBox->setObjectName(QString::fromUtf8("percentageComboBox"));

        hboxLayout1->addWidget(percentageComboBox);


        gridLayout->addLayout(hboxLayout1, 4, 2, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 4, 3, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 4, 4, 1, 3);

        yearLabel = new QLabel(DepenseDialog);
        yearLabel->setObjectName(QString::fromUtf8("yearLabel"));
        yearLabel->setWordWrap(true);

        gridLayout->addWidget(yearLabel, 3, 3, 1, 1);

        yearComboBox = new QComboBox(DepenseDialog);
        yearComboBox->setObjectName(QString::fromUtf8("yearComboBox"));

        gridLayout->addWidget(yearComboBox, 3, 5, 1, 2);

        errorButton = new QPushButton(DepenseDialog);
        errorButton->setObjectName(QString::fromUtf8("errorButton"));

        gridLayout->addWidget(errorButton, 0, 6, 1, 1);

        bankingtransactiondateEdit = new QDateEdit(DepenseDialog);
        bankingtransactiondateEdit->setObjectName(QString::fromUtf8("bankingtransactiondateEdit"));
        bankingtransactiondateEdit->setMaximumSize(QSize(109, 24));

        gridLayout->addWidget(bankingtransactiondateEdit, 5, 1, 1, 1);

        bankingtransactionlabel = new QLabel(DepenseDialog);
        bankingtransactionlabel->setObjectName(QString::fromUtf8("bankingtransactionlabel"));

        gridLayout->addWidget(bankingtransactionlabel, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableView = new QTableView(DepenseDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        groupBox = new QGroupBox(DepenseDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(181, 155));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 172, 126));
        gridLayout1 = new QGridLayout(layoutWidget);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        especes = new QCheckBox(layoutWidget);
        especes->setObjectName(QString::fromUtf8("especes"));
        especes->setAutoExclusive(true);

        gridLayout1->addWidget(especes, 0, 0, 1, 1);

        cheque = new QCheckBox(layoutWidget);
        cheque->setObjectName(QString::fromUtf8("cheque"));
        cheque->setAutoExclusive(true);

        gridLayout1->addWidget(cheque, 1, 0, 1, 1);

        carte_bancaire = new QCheckBox(layoutWidget);
        carte_bancaire->setObjectName(QString::fromUtf8("carte_bancaire"));
        carte_bancaire->setAutoExclusive(true);

        gridLayout1->addWidget(carte_bancaire, 2, 0, 1, 1);

        prelevement_bancaire = new QCheckBox(layoutWidget);
        prelevement_bancaire->setObjectName(QString::fromUtf8("prelevement_bancaire"));
        prelevement_bancaire->setAutoExclusive(true);

        gridLayout1->addWidget(prelevement_bancaire, 3, 0, 1, 1);

        virement = new QCheckBox(layoutWidget);
        virement->setObjectName(QString::fromUtf8("virement"));
        virement->setAutoExclusive(true);

        gridLayout1->addWidget(virement, 4, 0, 1, 1);


        hboxLayout2->addWidget(groupBox);

        pushButton = new QPushButton(DepenseDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(181, 151));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton->setAutoDefault(true);

        hboxLayout2->addWidget(pushButton);

        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        pushButton_3 = new QPushButton(DepenseDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(107, 30));

        gridLayout2->addWidget(pushButton_3, 2, 1, 1, 1);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem4, 2, 2, 1, 1);

        valideFactureButton = new QPushButton(DepenseDialog);
        valideFactureButton->setObjectName(QString::fromUtf8("valideFactureButton"));
        valideFactureButton->setMinimumSize(QSize(107, 30));

        gridLayout2->addWidget(valideFactureButton, 3, 1, 1, 1);

        pushButton_4 = new QPushButton(DepenseDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(110, 30));

        gridLayout2->addWidget(pushButton_4, 4, 1, 1, 1);

        bankDebitButton = new QPushButton(DepenseDialog);
        bankDebitButton->setObjectName(QString::fromUtf8("bankDebitButton"));
        bankDebitButton->setMinimumSize(QSize(0, 50));

        gridLayout2->addWidget(bankDebitButton, 0, 3, 3, 1);

        analyseButton = new QPushButton(DepenseDialog);
        analyseButton->setObjectName(QString::fromUtf8("analyseButton"));

        gridLayout2->addWidget(analyseButton, 3, 3, 1, 1);

        factureBox = new QCheckBox(DepenseDialog);
        factureBox->setObjectName(QString::fromUtf8("factureBox"));
        factureBox->setMinimumSize(QSize(150, 21));

        gridLayout2->addWidget(factureBox, 3, 0, 1, 1);

        totauxLabel = new QLabel(DepenseDialog);
        totauxLabel->setObjectName(QString::fromUtf8("totauxLabel"));
        totauxLabel->setWordWrap(true);

        gridLayout2->addWidget(totauxLabel, 0, 0, 1, 1);

        sumLabel = new QLabel(DepenseDialog);
        sumLabel->setObjectName(QString::fromUtf8("sumLabel"));
        sumLabel->setMinimumSize(QSize(0, 30));
        sumLabel->setWordWrap(true);

        gridLayout2->addWidget(sumLabel, 0, 1, 1, 1);


        hboxLayout2->addLayout(gridLayout2);


        gridLayout_2->addLayout(hboxLayout2, 4, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(movementsComboBox);
        label_4->setBuddy(comboBoxLogins);
        label_3->setBuddy(lineEdit);
        label_7->setBuddy(bankComboBox);
        label_6->setBuddy(detailEdit);
        label_2->setBuddy(percentageComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(DepenseDialog);

        QMetaObject::connectSlotsByName(DepenseDialog);
    } // setupUi

    void retranslateUi(QWidget *DepenseDialog)
    {
        DepenseDialog->setWindowTitle(QApplication::translate("DepenseDialog", "Depenses", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DepenseDialog", "Mouvement positifs\n"
"et n\303\251gatifs", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DepenseDialog", "Utilisateur", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DepenseDialog", "?", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DepenseDialog", "Valeur", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DepenseDialog", "Compte bancaire", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DepenseDialog", "D\303\251tail", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DepenseDialog", "Date saisie", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("DepenseDialog", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DepenseDialog", "Pourcentage", 0, QApplication::UnicodeUTF8));
        yearLabel->setText(QApplication::translate("DepenseDialog", "Ann\303\251e", 0, QApplication::UnicodeUTF8));
        errorButton->setText(QApplication::translate("DepenseDialog", "Log erreur", 0, QApplication::UnicodeUTF8));
        bankingtransactionlabel->setText(QApplication::translate("DepenseDialog", "Date op\303\251ration", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DepenseDialog", "Mode de r\303\250glement", 0, QApplication::UnicodeUTF8));
        especes->setText(QApplication::translate("DepenseDialog", "&esp\303\250ce", 0, QApplication::UnicodeUTF8));
        cheque->setText(QApplication::translate("DepenseDialog", "c&h\303\250que", 0, QApplication::UnicodeUTF8));
        carte_bancaire->setText(QApplication::translate("DepenseDialog", "c&b", 0, QApplication::UnicodeUTF8));
        prelevement_bancaire->setText(QApplication::translate("DepenseDialog", "&pr\303\251l\303\250vement bancaire", 0, QApplication::UnicodeUTF8));
        virement->setText(QApplication::translate("DepenseDialog", "virement", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DepenseDialog", " &Enregistrer\n"
"la d\303\251pense", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QString());
        pushButton_3->setText(QApplication::translate("DepenseDialog", "&Effacer", 0, QApplication::UnicodeUTF8));
        valideFactureButton->setText(QApplication::translate("DepenseDialog", " &Valider la d\303\251pense\n"
"(facture)", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("DepenseDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
        pushButton_4->setShortcut(QString());
        bankDebitButton->setText(QApplication::translate("DepenseDialog", "Mouvement\n"
"&d\303\251bit\303\251 en banque", 0, QApplication::UnicodeUTF8));
        analyseButton->setText(QApplication::translate("DepenseDialog", "&Analyser", 0, QApplication::UnicodeUTF8));
        factureBox->setText(QApplication::translate("DepenseDialog", "Facture re\303\247ue", 0, QApplication::UnicodeUTF8));
        totauxLabel->setText(QApplication::translate("DepenseDialog", "Totaux d\303\251penses", 0, QApplication::UnicodeUTF8));
        sumLabel->setText(QApplication::translate("DepenseDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DepenseDialog: public Ui_DepenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPENSEDIALOG_H
