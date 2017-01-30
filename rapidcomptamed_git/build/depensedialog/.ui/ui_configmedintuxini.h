/********************************************************************************
** Form generated from reading UI file 'configmedintuxini.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGMEDINTUXINI_H
#define UI_CONFIGMEDINTUXINI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigMedintuxIniWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *medintuxBaseEdit;
    QLabel *baseLabel;
    QLabel *hostLabel;
    QLineEdit *loginEdit;
    QLabel *portLabel;
    QLabel *loginLabel;
    QLineEdit *passEdit;
    QLineEdit *driverEdit;
    QLineEdit *portEdit;
    QPushButton *quitButton;
    QLabel *driverLabel;
    QLabel *passLabel;
    QLabel *medintuxIndexLabel;
    QLineEdit *medintuxTableIndexEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *recordButton;
    QLineEdit *hostEdit;

    void setupUi(QWidget *ConfigMedintuxIniWidget)
    {
        if (ConfigMedintuxIniWidget->objectName().isEmpty())
            ConfigMedintuxIniWidget->setObjectName(QString::fromUtf8("ConfigMedintuxIniWidget"));
        ConfigMedintuxIniWidget->resize(586, 274);
        gridLayout_2 = new QGridLayout(ConfigMedintuxIniWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        medintuxBaseEdit = new QLineEdit(ConfigMedintuxIniWidget);
        medintuxBaseEdit->setObjectName(QString::fromUtf8("medintuxBaseEdit"));

        gridLayout->addWidget(medintuxBaseEdit, 0, 1, 1, 3);

        baseLabel = new QLabel(ConfigMedintuxIniWidget);
        baseLabel->setObjectName(QString::fromUtf8("baseLabel"));
        baseLabel->setWordWrap(true);

        gridLayout->addWidget(baseLabel, 0, 0, 1, 1);

        hostLabel = new QLabel(ConfigMedintuxIniWidget);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));
        hostLabel->setWordWrap(true);

        gridLayout->addWidget(hostLabel, 1, 0, 1, 1);

        loginEdit = new QLineEdit(ConfigMedintuxIniWidget);
        loginEdit->setObjectName(QString::fromUtf8("loginEdit"));

        gridLayout->addWidget(loginEdit, 2, 1, 1, 3);

        portLabel = new QLabel(ConfigMedintuxIniWidget);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));
        portLabel->setWordWrap(true);

        gridLayout->addWidget(portLabel, 3, 0, 1, 1);

        loginLabel = new QLabel(ConfigMedintuxIniWidget);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setWordWrap(true);

        gridLayout->addWidget(loginLabel, 2, 0, 1, 1);

        passEdit = new QLineEdit(ConfigMedintuxIniWidget);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));

        gridLayout->addWidget(passEdit, 4, 1, 1, 3);

        driverEdit = new QLineEdit(ConfigMedintuxIniWidget);
        driverEdit->setObjectName(QString::fromUtf8("driverEdit"));

        gridLayout->addWidget(driverEdit, 5, 1, 1, 3);

        portEdit = new QLineEdit(ConfigMedintuxIniWidget);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));

        gridLayout->addWidget(portEdit, 3, 1, 1, 3);

        quitButton = new QPushButton(ConfigMedintuxIniWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        gridLayout->addWidget(quitButton, 7, 2, 1, 1);

        driverLabel = new QLabel(ConfigMedintuxIniWidget);
        driverLabel->setObjectName(QString::fromUtf8("driverLabel"));
        driverLabel->setWordWrap(true);

        gridLayout->addWidget(driverLabel, 5, 0, 1, 1);

        passLabel = new QLabel(ConfigMedintuxIniWidget);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        passLabel->setWordWrap(true);

        gridLayout->addWidget(passLabel, 4, 0, 1, 1);

        medintuxIndexLabel = new QLabel(ConfigMedintuxIniWidget);
        medintuxIndexLabel->setObjectName(QString::fromUtf8("medintuxIndexLabel"));
        medintuxIndexLabel->setWordWrap(true);

        gridLayout->addWidget(medintuxIndexLabel, 6, 0, 1, 1);

        medintuxTableIndexEdit = new QLineEdit(ConfigMedintuxIniWidget);
        medintuxTableIndexEdit->setObjectName(QString::fromUtf8("medintuxTableIndexEdit"));

        gridLayout->addWidget(medintuxTableIndexEdit, 6, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 0, 1, 2);

        recordButton = new QPushButton(ConfigMedintuxIniWidget);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setDefault(true);

        gridLayout->addWidget(recordButton, 7, 3, 1, 1);

        hostEdit = new QLineEdit(ConfigMedintuxIniWidget);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));

        gridLayout->addWidget(hostEdit, 1, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ConfigMedintuxIniWidget);

        QMetaObject::connectSlotsByName(ConfigMedintuxIniWidget);
    } // setupUi

    void retranslateUi(QWidget *ConfigMedintuxIniWidget)
    {
        ConfigMedintuxIniWidget->setWindowTitle(QApplication::translate("ConfigMedintuxIniWidget", "Configurer le fichier de liaison avecMedintux", 0, QApplication::UnicodeUTF8));
        baseLabel->setText(QApplication::translate("ConfigMedintuxIniWidget", "medintux_base", 0, QApplication::UnicodeUTF8));
        hostLabel->setText(QApplication::translate("ConfigMedintuxIniWidget", "Host", 0, QApplication::UnicodeUTF8));
        portLabel->setText(QApplication::translate("ConfigMedintuxIniWidget", "Port", 0, QApplication::UnicodeUTF8));
        loginLabel->setText(QApplication::translate("ConfigMedintuxIniWidget", "Login", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ConfigMedintuxIniWidget", "Close", 0, QApplication::UnicodeUTF8));
        driverLabel->setText(QApplication::translate("ConfigMedintuxIniWidget", "Driver", 0, QApplication::UnicodeUTF8));
        passLabel->setText(QApplication::translate("ConfigMedintuxIniWidget", "Password", 0, QApplication::UnicodeUTF8));
        medintuxIndexLabel->setText(QApplication::translate("ConfigMedintuxIniWidget", "Table index", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("ConfigMedintuxIniWidget", "Enregistre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigMedintuxIniWidget: public Ui_ConfigMedintuxIniWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGMEDINTUXINI_H
