/********************************************************************************
** Form generated from reading UI file 'findvaluesgui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDVALUESGUI_H
#define UI_FINDVALUESGUI_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_findValueDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *abstractLabel;
    QTextEdit *othersTextEdit;
    QTextEdit *abstractTextEdit;
    QTableView *tableViewOfValues;
    QListWidget *listchosenWidget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *nameRadioButton;
    QRadioButton *abstractRadioButton;
    QLabel *labelFilter;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *nextButton;
    QPushButton *ameliButton;
    QLabel *labelChoice;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *plusButton;
    QSpacerItem *verticalSpacer;
    QPushButton *lessButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *ratioLabel;
    QDoubleSpinBox *modifSpinBox;
    QLabel *labelValues;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxCategories;
    QLabel *othersLabel;
    QLineEdit *lineEditFilter;
    QLabel *flagLabel;
    QLabel *flagPixmapLabel;
    QLabel *commandeAmeliLabel;
    QLineEdit *commandeAmeliXlsEdit;
    QButtonGroup *buttonGroup_2;

    void setupUi(QDialog *findValueDialog)
    {
        if (findValueDialog->objectName().isEmpty())
            findValueDialog->setObjectName(QString::fromUtf8("findValueDialog"));
        findValueDialog->resize(626, 548);
        findValueDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        gridLayout_3 = new QGridLayout(findValueDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        abstractLabel = new QLabel(findValueDialog);
        abstractLabel->setObjectName(QString::fromUtf8("abstractLabel"));
        abstractLabel->setWordWrap(true);

        gridLayout_2->addWidget(abstractLabel, 5, 0, 1, 1);

        othersTextEdit = new QTextEdit(findValueDialog);
        othersTextEdit->setObjectName(QString::fromUtf8("othersTextEdit"));
        othersTextEdit->setTabChangesFocus(true);

        gridLayout_2->addWidget(othersTextEdit, 6, 2, 1, 2);

        abstractTextEdit = new QTextEdit(findValueDialog);
        abstractTextEdit->setObjectName(QString::fromUtf8("abstractTextEdit"));
        abstractTextEdit->setTabChangesFocus(true);

        gridLayout_2->addWidget(abstractTextEdit, 6, 0, 1, 1);

        tableViewOfValues = new QTableView(findValueDialog);
        tableViewOfValues->setObjectName(QString::fromUtf8("tableViewOfValues"));
        tableViewOfValues->setMinimumSize(QSize(150, 200));

        gridLayout_2->addWidget(tableViewOfValues, 8, 0, 1, 1);

        listchosenWidget = new QListWidget(findValueDialog);
        listchosenWidget->setObjectName(QString::fromUtf8("listchosenWidget"));
        listchosenWidget->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(listchosenWidget, 8, 2, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameRadioButton = new QRadioButton(findValueDialog);
        buttonGroup_2 = new QButtonGroup(findValueDialog);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(nameRadioButton);
        nameRadioButton->setObjectName(QString::fromUtf8("nameRadioButton"));

        horizontalLayout_2->addWidget(nameRadioButton);

        abstractRadioButton = new QRadioButton(findValueDialog);
        buttonGroup_2->addButton(abstractRadioButton);
        abstractRadioButton->setObjectName(QString::fromUtf8("abstractRadioButton"));

        horizontalLayout_2->addWidget(abstractRadioButton);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 2, 1, 2);

        labelFilter = new QLabel(findValueDialog);
        labelFilter->setObjectName(QString::fromUtf8("labelFilter"));

        gridLayout_2->addWidget(labelFilter, 1, 2, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(findValueDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(0, 50));
        buttonBox->setLocale(QLocale(QLocale::French, QLocale::France));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 2, 2, 1, 1);

        nextButton = new QPushButton(findValueDialog);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        gridLayout->addWidget(nextButton, 2, 0, 1, 1);

        ameliButton = new QPushButton(findValueDialog);
        ameliButton->setObjectName(QString::fromUtf8("ameliButton"));

        gridLayout->addWidget(ameliButton, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 10, 0, 1, 4);

        labelChoice = new QLabel(findValueDialog);
        labelChoice->setObjectName(QString::fromUtf8("labelChoice"));
        labelChoice->setMinimumSize(QSize(0, 32));

        gridLayout_2->addWidget(labelChoice, 7, 2, 1, 2);

        label = new QLabel(findValueDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 35));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plusButton = new QPushButton(findValueDialog);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));

        verticalLayout->addWidget(plusButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lessButton = new QPushButton(findValueDialog);
        lessButton->setObjectName(QString::fromUtf8("lessButton"));

        verticalLayout->addWidget(lessButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        ratioLabel = new QLabel(findValueDialog);
        ratioLabel->setObjectName(QString::fromUtf8("ratioLabel"));
        ratioLabel->setWordWrap(true);

        verticalLayout->addWidget(ratioLabel);

        modifSpinBox = new QDoubleSpinBox(findValueDialog);
        modifSpinBox->setObjectName(QString::fromUtf8("modifSpinBox"));

        verticalLayout->addWidget(modifSpinBox);


        gridLayout_2->addLayout(verticalLayout, 8, 1, 1, 1);

        labelValues = new QLabel(findValueDialog);
        labelValues->setObjectName(QString::fromUtf8("labelValues"));
        labelValues->setMaximumSize(QSize(16777215, 35));

        gridLayout_2->addWidget(labelValues, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        comboBoxCategories = new QComboBox(findValueDialog);
        comboBoxCategories->setObjectName(QString::fromUtf8("comboBoxCategories"));

        gridLayout_2->addWidget(comboBoxCategories, 2, 0, 1, 1);

        othersLabel = new QLabel(findValueDialog);
        othersLabel->setObjectName(QString::fromUtf8("othersLabel"));
        othersLabel->setWordWrap(true);

        gridLayout_2->addWidget(othersLabel, 5, 2, 1, 2);

        lineEditFilter = new QLineEdit(findValueDialog);
        lineEditFilter->setObjectName(QString::fromUtf8("lineEditFilter"));

        gridLayout_2->addWidget(lineEditFilter, 2, 2, 1, 1);

        flagLabel = new QLabel(findValueDialog);
        flagLabel->setObjectName(QString::fromUtf8("flagLabel"));
        flagLabel->setWordWrap(true);

        gridLayout_2->addWidget(flagLabel, 0, 1, 1, 1);

        flagPixmapLabel = new QLabel(findValueDialog);
        flagPixmapLabel->setObjectName(QString::fromUtf8("flagPixmapLabel"));

        gridLayout_2->addWidget(flagPixmapLabel, 2, 1, 1, 1);

        commandeAmeliLabel = new QLabel(findValueDialog);
        commandeAmeliLabel->setObjectName(QString::fromUtf8("commandeAmeliLabel"));
        commandeAmeliLabel->setWordWrap(true);

        gridLayout_2->addWidget(commandeAmeliLabel, 9, 0, 1, 1);

        commandeAmeliXlsEdit = new QLineEdit(findValueDialog);
        commandeAmeliXlsEdit->setObjectName(QString::fromUtf8("commandeAmeliXlsEdit"));
        commandeAmeliXlsEdit->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(commandeAmeliXlsEdit, 9, 1, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelFilter->setBuddy(lineEditFilter);
        label->setBuddy(comboBoxCategories);
#endif // QT_NO_SHORTCUT

        retranslateUi(findValueDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), findValueDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), findValueDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(findValueDialog);
    } // setupUi

    void retranslateUi(QDialog *findValueDialog)
    {
        findValueDialog->setWindowTitle(QApplication::translate("findValueDialog", "Find your redefined values", 0, QApplication::UnicodeUTF8));
        abstractLabel->setText(QApplication::translate("findValueDialog", "Texte", 0, QApplication::UnicodeUTF8));
        nameRadioButton->setText(QApplication::translate("findValueDialog", "par le nom", 0, QApplication::UnicodeUTF8));
        abstractRadioButton->setText(QApplication::translate("findValueDialog", "par le texte", 0, QApplication::UnicodeUTF8));
        labelFilter->setText(QApplication::translate("findValueDialog", "Filtre", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("findValueDialog", "Next", 0, QApplication::UnicodeUTF8));
        ameliButton->setText(QApplication::translate("findValueDialog", "Ouvrir le fichier AMELI", 0, QApplication::UnicodeUTF8));
        labelChoice->setText(QApplication::translate("findValueDialog", "Liste des valeurs choisies", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("findValueDialog", "Cat\303\251gories", 0, QApplication::UnicodeUTF8));
        plusButton->setText(QApplication::translate("findValueDialog", "+", 0, QApplication::UnicodeUTF8));
        lessButton->setText(QApplication::translate("findValueDialog", "-", 0, QApplication::UnicodeUTF8));
        ratioLabel->setText(QApplication::translate("findValueDialog", "Ratio", 0, QApplication::UnicodeUTF8));
        labelValues->setText(QApplication::translate("findValueDialog", "Choisissez vos valeurs", 0, QApplication::UnicodeUTF8));
        othersLabel->setText(QApplication::translate("findValueDialog", "Autre information", 0, QApplication::UnicodeUTF8));
        flagLabel->setText(QApplication::translate("findValueDialog", "flag", 0, QApplication::UnicodeUTF8));
        flagPixmapLabel->setText(QApplication::translate("findValueDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        commandeAmeliLabel->setText(QApplication::translate("findValueDialog", "Commande d'ouverture du fichier AMELI", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class findValueDialog: public Ui_findValueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDVALUESGUI_H
