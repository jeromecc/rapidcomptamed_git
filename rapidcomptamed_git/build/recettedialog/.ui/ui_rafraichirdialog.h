/********************************************************************************
** Form generated from reading UI file 'rafraichirdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAFRAICHIRDIALOG_H
#define UI_RAFRAICHIRDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RafraichirDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pushButton_4;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QSpacerItem *spacerItem1;
    QPushButton *pushButton_3;
    QSpacerItem *spacerItem2;
    QPushButton *pushButton;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *RafraichirDialog)
    {
        if (RafraichirDialog->objectName().isEmpty())
            RafraichirDialog->setObjectName(QString::fromUtf8("RafraichirDialog"));
        RafraichirDialog->resize(553, 308);
        gridLayout = new QGridLayout(RafraichirDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(438, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton_4 = new QPushButton(RafraichirDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        hboxLayout->addWidget(pushButton_4);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 2);

        groupBox = new QGroupBox(RafraichirDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(490, 120));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 440, 81));
        gridLayout2 = new QGridLayout(layoutWidget);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(121, 30));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);

        gridLayout2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(311, 27));

        gridLayout2->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setSizeIncrement(QSize(130, 30));

        gridLayout2->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout2->addWidget(lineEdit_3, 1, 1, 1, 1);


        gridLayout1->addWidget(groupBox, 1, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(RafraichirDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(121, 30));
        label_2->setFont(font);

        hboxLayout1->addWidget(label_2);

        lineEdit_2 = new QLineEdit(RafraichirDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(311, 27));

        hboxLayout1->addWidget(lineEdit_2);


        gridLayout1->addLayout(hboxLayout1, 2, 0, 1, 2);

        pushButton_2 = new QPushButton(RafraichirDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 0));

        gridLayout1->addWidget(pushButton_2, 3, 0, 1, 1);

        spacerItem1 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(RafraichirDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 0));

        gridLayout1->addWidget(pushButton_3, 4, 0, 1, 1);

        spacerItem2 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 4, 1, 1, 1);

        pushButton = new QPushButton(RafraichirDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 27));

        gridLayout1->addWidget(pushButton, 5, 0, 1, 1);

        spacerItem3 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 5, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
        label_3->setBuddy(lineEdit_3);
        label_2->setBuddy(lineEdit_2);
#endif // QT_NO_SHORTCUT

        retranslateUi(RafraichirDialog);

        QMetaObject::connectSlotsByName(RafraichirDialog);
    } // setupUi

    void retranslateUi(QWidget *RafraichirDialog)
    {
        RafraichirDialog->setWindowTitle(QApplication::translate("RafraichirDialog", "Ajout d' un acte ou d'une recette", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("RafraichirDialog", "?", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RafraichirDialog", "Ajouter un acte", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RafraichirDialog", "Type d'acte", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RafraichirDialog", "Valeur de l'acte", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RafraichirDialog", "Ajouter une d\303\251pense", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("RafraichirDialog", "Ajouter un &acte", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("RafraichirDialog", "Ajouter une &d\303\251pense", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("RafraichirDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RafraichirDialog: public Ui_RafraichirDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAFRAICHIRDIALOG_H
