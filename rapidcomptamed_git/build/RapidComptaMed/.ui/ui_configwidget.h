/********************************************************************************
** Form generated from reading UI file 'configwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWIDGET_H
#define UI_CONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWidget
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *quitButton;
    QPushButton *okButton;

    void setupUi(QWidget *ConfigWidget)
    {
        if (ConfigWidget->objectName().isEmpty())
            ConfigWidget->setObjectName(QString::fromUtf8("ConfigWidget"));
        ConfigWidget->resize(675, 626);
        gridLayout = new QGridLayout(ConfigWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(ConfigWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 638, 571));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 2);

        quitButton = new QPushButton(ConfigWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        gridLayout->addWidget(quitButton, 1, 0, 1, 1);

        okButton = new QPushButton(ConfigWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 1, 1, 1, 1);


        retranslateUi(ConfigWidget);

        QMetaObject::connectSlotsByName(ConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *ConfigWidget)
    {
        ConfigWidget->setWindowTitle(QApplication::translate("ConfigWidget", "Configurer les donn\303\251es de Rapidcomptamed", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ConfigWidget", "&Quit", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ConfigWidget", "&Record", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigWidget: public Ui_ConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWIDGET_H
