/********************************************************************************
** Form generated from reading UI file 'helpForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPFORM_H
#define UI_HELPFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helpForm
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *helpForm)
    {
        if (helpForm->objectName().isEmpty())
            helpForm->setObjectName(QString::fromUtf8("helpForm"));
        helpForm->resize(640, 480);
        gridLayout_2 = new QGridLayout(helpForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(helpForm);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(helpForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(95, 35));
        pushButton->setMaximumSize(QSize(95, 35));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(helpForm);

        QMetaObject::connectSlotsByName(helpForm);
    } // setupUi

    void retranslateUi(QWidget *helpForm)
    {
        helpForm->setWindowTitle(QApplication::translate("helpForm", "Aide", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("helpForm", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class helpForm: public Ui_helpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPFORM_H
