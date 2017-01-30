/********************************************************************************
** Form generated from reading UI file 'exportfiscal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTFISCAL_H
#define UI_EXPORTFISCAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *exportLineEdit;
    QTextEdit *textEdit;
    QPushButton *quitButton;
    QPushButton *okButton;
    QTabWidget *tabWidget;
    QWidget *tabYear;
    QDateEdit *yearDateEdit;
    QWidget *tabUser;
    QComboBox *tabUserComboBox;
    QWidget *tabSite;
    QComboBox *tabSiteComboBox;
    QWidget *tab;
    QComboBox *tabCompteComboBox;

    void setupUi(QWidget *ExportWidget)
    {
        if (ExportWidget->objectName().isEmpty())
            ExportWidget->setObjectName(QString::fromUtf8("ExportWidget"));
        ExportWidget->resize(561, 451);
        gridLayout = new QGridLayout(ExportWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ExportWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        exportLineEdit = new QLineEdit(ExportWidget);
        exportLineEdit->setObjectName(QString::fromUtf8("exportLineEdit"));
        exportLineEdit->setMinimumSize(QSize(0, 31));

        gridLayout->addWidget(exportLineEdit, 0, 2, 1, 1);

        textEdit = new QTextEdit(ExportWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 3);

        quitButton = new QPushButton(ExportWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        gridLayout->addWidget(quitButton, 2, 0, 1, 1);

        okButton = new QPushButton(ExportWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        gridLayout->addWidget(okButton, 2, 2, 1, 1);

        tabWidget = new QTabWidget(ExportWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(220, 80));
        tabWidget->setMaximumSize(QSize(221, 80));
        tabYear = new QWidget();
        tabYear->setObjectName(QString::fromUtf8("tabYear"));
        yearDateEdit = new QDateEdit(tabYear);
        yearDateEdit->setObjectName(QString::fromUtf8("yearDateEdit"));
        yearDateEdit->setGeometry(QRect(40, 20, 110, 22));
        tabWidget->addTab(tabYear, QString());
        tabUser = new QWidget();
        tabUser->setObjectName(QString::fromUtf8("tabUser"));
        tabUserComboBox = new QComboBox(tabUser);
        tabUserComboBox->setObjectName(QString::fromUtf8("tabUserComboBox"));
        tabUserComboBox->setGeometry(QRect(20, 10, 181, 31));
        tabWidget->addTab(tabUser, QString());
        tabSite = new QWidget();
        tabSite->setObjectName(QString::fromUtf8("tabSite"));
        tabSiteComboBox = new QComboBox(tabSite);
        tabSiteComboBox->setObjectName(QString::fromUtf8("tabSiteComboBox"));
        tabSiteComboBox->setGeometry(QRect(20, 10, 171, 31));
        tabWidget->addTab(tabSite, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabCompteComboBox = new QComboBox(tab);
        tabCompteComboBox->setObjectName(QString::fromUtf8("tabCompteComboBox"));
        tabCompteComboBox->setGeometry(QRect(10, 10, 201, 31));
        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ExportWidget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ExportWidget);
    } // setupUi

    void retranslateUi(QWidget *ExportWidget)
    {
        ExportWidget->setWindowTitle(QApplication::translate("ExportWidget", "Exportation fiscale", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExportWidget", "Chemin d'export", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ExportWidget", "&Cancel", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ExportWidget", "&Ok", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabYear), QApplication::translate("ExportWidget", "Ann\303\251e", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabUser), QApplication::translate("ExportWidget", "Utilisateur", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSite), QApplication::translate("ExportWidget", "Site", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ExportWidget", "Compte", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportWidget: public Ui_ExportWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTFISCAL_H
