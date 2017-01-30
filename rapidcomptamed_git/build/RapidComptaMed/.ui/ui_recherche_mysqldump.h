/********************************************************************************
** Form generated from reading UI file 'recherche_mysqldump.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHERCHE_MYSQLDUMP_H
#define UI_RECHERCHE_MYSQLDUMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DrivesDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *pathMysqlDumpEdit;
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;
    QLabel *driveLabel;
    QComboBox *comboBox;
    QLabel *pathmysqldumLabel;
    QPushButton *autosearchButton;

    void setupUi(QDialog *DrivesDialog)
    {
        if (DrivesDialog->objectName().isEmpty())
            DrivesDialog->setObjectName(QString::fromUtf8("DrivesDialog"));
        DrivesDialog->resize(400, 300);
        gridLayout = new QGridLayout(DrivesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pathMysqlDumpEdit = new QLineEdit(DrivesDialog);
        pathMysqlDumpEdit->setObjectName(QString::fromUtf8("pathMysqlDumpEdit"));

        gridLayout->addWidget(pathMysqlDumpEdit, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(DrivesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        textBrowser = new QTextBrowser(DrivesDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 3, 0, 1, 2);

        driveLabel = new QLabel(DrivesDialog);
        driveLabel->setObjectName(QString::fromUtf8("driveLabel"));
        driveLabel->setWordWrap(true);

        gridLayout->addWidget(driveLabel, 0, 0, 1, 1);

        comboBox = new QComboBox(DrivesDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        pathmysqldumLabel = new QLabel(DrivesDialog);
        pathmysqldumLabel->setObjectName(QString::fromUtf8("pathmysqldumLabel"));
        pathmysqldumLabel->setMinimumSize(QSize(0, 31));
        pathmysqldumLabel->setWordWrap(true);

        gridLayout->addWidget(pathmysqldumLabel, 1, 0, 1, 1);

        autosearchButton = new QPushButton(DrivesDialog);
        autosearchButton->setObjectName(QString::fromUtf8("autosearchButton"));

        gridLayout->addWidget(autosearchButton, 2, 1, 1, 1);


        retranslateUi(DrivesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DrivesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DrivesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DrivesDialog);
    } // setupUi

    void retranslateUi(QDialog *DrivesDialog)
    {
        DrivesDialog->setWindowTitle(QApplication::translate("DrivesDialog", "Recherche de mysqldump", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("DrivesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; color:#0000ff;\">Choisir le r\303\251pertoire racine .</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; color:#0000ff;\">Pour Windows en g\303\251n\303\251ral c'est C:\\</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; color:#0"
                        "000ff;\">Pour Linux c'est /</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; color:#0000ff;\">Puis le chemin vers mysqldump si vous le connaissez, par exemple sous Linux /usr/bin/mysqldump.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; color:#0000ff;\">Puis cliquez sur OK.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        driveLabel->setText(QApplication::translate("DrivesDialog", "Drives", 0, QApplication::UnicodeUTF8));
        pathmysqldumLabel->setText(QApplication::translate("DrivesDialog", "Chemin de mysqldump", 0, QApplication::UnicodeUTF8));
        autosearchButton->setText(QApplication::translate("DrivesDialog", "&Recherche automatique", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DrivesDialog: public Ui_DrivesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHERCHE_MYSQLDUMP_H
