/********************************************************************************
** Form generated from reading UI file 'parse.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARSE_H
#define UI_PARSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParseWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *activityLabel;
    QLabel *explanationLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *searchButton;
    QPushButton *ccamButton;
    QPushButton *ngapButton;
    QPushButton *databaseButton;
    QPushButton *quitButton;

    void setupUi(QWidget *ParseWidget)
    {
        if (ParseWidget->objectName().isEmpty())
            ParseWidget->setObjectName(QString::fromUtf8("ParseWidget"));
        ParseWidget->resize(609, 139);
        gridLayout = new QGridLayout(ParseWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        activityLabel = new QLabel(ParseWidget);
        activityLabel->setObjectName(QString::fromUtf8("activityLabel"));
        activityLabel->setMinimumSize(QSize(0, 40));
        activityLabel->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(activityLabel, 0, 0, 1, 1);

        explanationLabel = new QLabel(ParseWidget);
        explanationLabel->setObjectName(QString::fromUtf8("explanationLabel"));

        gridLayout->addWidget(explanationLabel, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchButton = new QPushButton(ParseWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);

        ccamButton = new QPushButton(ParseWidget);
        ccamButton->setObjectName(QString::fromUtf8("ccamButton"));

        horizontalLayout->addWidget(ccamButton);

        ngapButton = new QPushButton(ParseWidget);
        ngapButton->setObjectName(QString::fromUtf8("ngapButton"));

        horizontalLayout->addWidget(ngapButton);

        databaseButton = new QPushButton(ParseWidget);
        databaseButton->setObjectName(QString::fromUtf8("databaseButton"));
        databaseButton->setMinimumSize(QSize(171, 0));

        horizontalLayout->addWidget(databaseButton);

        quitButton = new QPushButton(ParseWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        horizontalLayout->addWidget(quitButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(ParseWidget);

        QMetaObject::connectSlotsByName(ParseWidget);
    } // setupUi

    void retranslateUi(QWidget *ParseWidget)
    {
        ParseWidget->setWindowTitle(QApplication::translate("ParseWidget", "ParseCCAM", 0, QApplication::UnicodeUTF8));
        activityLabel->setText(QApplication::translate("ParseWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        explanationLabel->setText(QApplication::translate("ParseWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("ParseWidget", "1 : Search File", 0, QApplication::UnicodeUTF8));
        ccamButton->setText(QApplication::translate("ParseWidget", " 2 : CCAM", 0, QApplication::UnicodeUTF8));
        ngapButton->setText(QApplication::translate("ParseWidget", "3 : Merge All", 0, QApplication::UnicodeUTF8));
        databaseButton->setText(QApplication::translate("ParseWidget", "2:create database", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ParseWidget", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParseWidget: public Ui_ParseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSE_H
