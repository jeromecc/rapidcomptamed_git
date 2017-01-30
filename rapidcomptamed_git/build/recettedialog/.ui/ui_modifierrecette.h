/********************************************************************************
** Form generated from reading UI file 'modifierrecette.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIERRECETTE_H
#define UI_MODIFIERRECETTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifierRecette
{
public:
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QLabel *sumsLabel;
    QGroupBox *groupBox;
    QPushButton *searchButton;
    QWidget *widget;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QLabel *label_2;
    QDateEdit *beginDateEdit;
    QHBoxLayout *hboxLayout;
    QLabel *dateendLabel;
    QDateEdit *endDateEdit;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *usersLabel;
    QComboBox *usersComboBox;
    QLabel *sitesLabel;
    QComboBox *sitesComboBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *seancesRadioButton;

    void setupUi(QWidget *ModifierRecette)
    {
        if (ModifierRecette->objectName().isEmpty())
            ModifierRecette->setObjectName(QString::fromUtf8("ModifierRecette"));
        ModifierRecette->resize(969, 628);
        ModifierRecette->setMinimumSize(QSize(710, 520));
        gridLayout_2 = new QGridLayout(ModifierRecette);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView = new QTableView(ModifierRecette);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(691, 270));
        tableView->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 2);

        sumsLabel = new QLabel(ModifierRecette);
        sumsLabel->setObjectName(QString::fromUtf8("sumsLabel"));
        sumsLabel->setMinimumSize(QSize(680, 55));

        gridLayout_2->addWidget(sumsLabel, 1, 0, 1, 2);

        groupBox = new QGroupBox(ModifierRecette);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(371, 201));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        searchButton = new QPushButton(groupBox);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(430, 140, 131, 36));
        searchButton->setMinimumSize(QSize(131, 25));
        searchButton->setMaximumSize(QSize(16777215, 16777215));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 130, 388, 58));
        vboxLayout = new QVBoxLayout(widget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);
        beginDateEdit = new QDateEdit(splitter);
        beginDateEdit->setObjectName(QString::fromUtf8("beginDateEdit"));
        beginDateEdit->setMinimumSize(QSize(100, 24));
        beginDateEdit->setMaximumSize(QSize(76, 24));
        splitter->addWidget(beginDateEdit);

        vboxLayout->addWidget(splitter);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        dateendLabel = new QLabel(widget);
        dateendLabel->setObjectName(QString::fromUtf8("dateendLabel"));

        hboxLayout->addWidget(dateendLabel);

        endDateEdit = new QDateEdit(widget);
        endDateEdit->setObjectName(QString::fromUtf8("endDateEdit"));
        endDateEdit->setMinimumSize(QSize(100, 24));
        endDateEdit->setMaximumSize(QSize(76, 24));

        hboxLayout->addWidget(endDateEdit);


        vboxLayout->addLayout(hboxLayout);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(12, 30, 591, 59));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(70, 21));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(110, 24));
        lineEdit->setMaximumSize(QSize(200, 24));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        usersLabel = new QLabel(widget1);
        usersLabel->setObjectName(QString::fromUtf8("usersLabel"));
        usersLabel->setMinimumSize(QSize(70, 21));

        gridLayout->addWidget(usersLabel, 1, 0, 1, 1);

        usersComboBox = new QComboBox(widget1);
        usersComboBox->setObjectName(QString::fromUtf8("usersComboBox"));
        usersComboBox->setMinimumSize(QSize(161, 24));
        usersComboBox->setMaximumSize(QSize(2000, 24));

        gridLayout->addWidget(usersComboBox, 1, 1, 1, 1);

        sitesLabel = new QLabel(widget1);
        sitesLabel->setObjectName(QString::fromUtf8("sitesLabel"));
        sitesLabel->setWordWrap(true);

        gridLayout->addWidget(sitesLabel, 1, 2, 1, 1);

        sitesComboBox = new QComboBox(widget1);
        sitesComboBox->setObjectName(QString::fromUtf8("sitesComboBox"));
        sitesComboBox->setMinimumSize(QSize(160, 0));

        gridLayout->addWidget(sitesComboBox, 1, 3, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 2, 1);

        groupBox_2 = new QGroupBox(ModifierRecette);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(300, 211));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 271, 181));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 51));
        pushButton_2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(80, 51));
        pushButton_3->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(80, 51));

        gridLayout_3->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 3, 0, 1, 2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 51));

        gridLayout_3->addWidget(pushButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton = new QRadioButton(ModifierRecette);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(radioButton);

        seancesRadioButton = new QRadioButton(ModifierRecette);
        seancesRadioButton->setObjectName(QString::fromUtf8("seancesRadioButton"));

        horizontalLayout->addWidget(seancesRadioButton);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(beginDateEdit);
        dateendLabel->setBuddy(endDateEdit);
        label->setBuddy(lineEdit);
        usersLabel->setBuddy(usersComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ModifierRecette);

        QMetaObject::connectSlotsByName(ModifierRecette);
    } // setupUi

    void retranslateUi(QWidget *ModifierRecette)
    {
        ModifierRecette->setWindowTitle(QApplication::translate("ModifierRecette", "Voir et modifier les recettes, g\303\251rer les dus.", 0, QApplication::UnicodeUTF8));
        sumsLabel->setText(QApplication::translate("ModifierRecette", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ModifierRecette", "Filtrer les donn\303\251es", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("ModifierRecette", "&Rechercher\n"
"selon le filtrage", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ModifierRecette", "Date de d\303\251but", 0, QApplication::UnicodeUTF8));
        beginDateEdit->setDisplayFormat(QApplication::translate("ModifierRecette", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        dateendLabel->setText(QApplication::translate("ModifierRecette", "Date de fin", 0, QApplication::UnicodeUTF8));
        endDateEdit->setDisplayFormat(QApplication::translate("ModifierRecette", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ModifierRecette", "Filtrer patient", 0, QApplication::UnicodeUTF8));
        usersLabel->setText(QApplication::translate("ModifierRecette", "Utilisateur", 0, QApplication::UnicodeUTF8));
        sitesLabel->setText(QApplication::translate("ModifierRecette", "Site", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ModifierRecette", "Actions", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ModifierRecette", "&Effacer\n"
"la ligne", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ModifierRecette", "&Quitter", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ModifierRecette", "?", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("ModifierRecette", "Im&primer", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ModifierRecette", "G\303\251rer\n"
"les dus.", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("ModifierRecette", "&Recettes", 0, QApplication::UnicodeUTF8));
        seancesRadioButton->setText(QApplication::translate("ModifierRecette", "&S\303\251ances", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModifierRecette: public Ui_ModifierRecette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIERRECETTE_H
