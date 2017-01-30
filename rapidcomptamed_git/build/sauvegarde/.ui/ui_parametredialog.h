/********************************************************************************
** Form generated from reading UI file 'parametredialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETREDIALOG_H
#define UI_PARAMETREDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametreDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ParametreDialog)
    {
        if (ParametreDialog->objectName().isEmpty())
            ParametreDialog->setObjectName(QString::fromUtf8("ParametreDialog"));
        ParametreDialog->resize(383, 290);
        gridLayout_2 = new QGridLayout(ParametreDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(ParametreDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(181, 0));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        comboBox = new QComboBox(ParametreDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(161, 24));

        gridLayout->addWidget(comboBox, 0, 1, 1, 2);

        label_2 = new QLabel(ParametreDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(181, 0));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEdit_2 = new QLineEdit(ParametreDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(161, 0));

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        label_4 = new QLabel(ParametreDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(181, 51));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        lineEdit_3 = new QLineEdit(ParametreDialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(161, 0));

        gridLayout->addWidget(lineEdit_3, 2, 2, 1, 1);

        label = new QLabel(ParametreDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(181, 0));
        label->setFont(font);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        comboBox_2 = new QComboBox(ParametreDialog);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(161, 0));

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        pushButton = new QPushButton(ParametreDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(331, 81));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ParametreDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(181, 27));

        verticalLayout->addWidget(pushButton_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(comboBox);
        label_2->setBuddy(lineEdit_2);
        label_4->setBuddy(lineEdit_3);
        label->setBuddy(comboBox_2);
#endif // QT_NO_SHORTCUT

        retranslateUi(ParametreDialog);

        QMetaObject::connectSlotsByName(ParametreDialog);
    } // setupUi

    void retranslateUi(QWidget *ParametreDialog)
    {
        ParametreDialog->setWindowTitle(QApplication::translate("ParametreDialog", "Param\303\251trage de l'utilisateur et de l'acte pr\303\251f\303\251r\303\251.", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ParametreDialog", "Utilisateur pr\303\251f\303\251rentiel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ParametreDialog", "Acte pr\303\251f\303\251rentiel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ParametreDialog", "Valeur de l'acte pr\303\251f\303\251rentiel ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ParametreDialog", "Compte pr\303\251f\303\251rentiel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ParametreDialog", "&Enregistrer", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ParametreDialog", "&Fermer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParametreDialog: public Ui_ParametreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETREDIALOG_H
