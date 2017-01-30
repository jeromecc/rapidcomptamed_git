/********************************************************************************
** Form generated from reading UI file 'headingParamDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADINGPARAMDIALOG_H
#define UI_HEADINGPARAMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_headingUserParam
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *usersComboBox;
    QPushButton *quitButton;
    QComboBox *headingsComboBox;
    QPushButton *recordButton;

    void setupUi(QWidget *headingUserParam)
    {
        if (headingUserParam->objectName().isEmpty())
            headingUserParam->setObjectName(QString::fromUtf8("headingUserParam"));
        headingUserParam->resize(680, 383);
        gridLayout_2 = new QGridLayout(headingUserParam);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(headingUserParam);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(660, 250));

        verticalLayout->addWidget(textEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(headingUserParam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(140, 30));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        usersComboBox = new QComboBox(headingUserParam);
        usersComboBox->setObjectName(QString::fromUtf8("usersComboBox"));
        usersComboBox->setMinimumSize(QSize(200, 25));

        gridLayout->addWidget(usersComboBox, 0, 1, 1, 1);

        quitButton = new QPushButton(headingUserParam);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(quitButton, 0, 3, 2, 1);

        headingsComboBox = new QComboBox(headingUserParam);
        headingsComboBox->setObjectName(QString::fromUtf8("headingsComboBox"));
        headingsComboBox->setMinimumSize(QSize(250, 30));

        gridLayout->addWidget(headingsComboBox, 1, 0, 1, 2);

        recordButton = new QPushButton(headingUserParam);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(recordButton, 0, 2, 2, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(usersComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(headingUserParam);

        QMetaObject::connectSlotsByName(headingUserParam);
    } // setupUi

    void retranslateUi(QWidget *headingUserParam)
    {
        headingUserParam->setWindowTitle(QApplication::translate("headingUserParam", "Ent\303\252tes et pieds de page", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("headingUserParam", "Login User", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("headingUserParam", "Quitter", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("headingUserParam", "Enregistrer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class headingUserParam: public Ui_headingUserParam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADINGPARAMDIALOG_H
