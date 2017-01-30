/********************************************************************************
** Form generated from reading UI file 'sauvedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAUVEDIALOG_H
#define UI_SAUVEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SauveDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *warningLabel;
    QTextBrowser *textBrowser;
    QGridLayout *gridLayout1;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *basesComboBox;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *rythmComboBox;
    QPushButton *savingPathButton;
    QPushButton *mysqldumpButton;
    QLineEdit *partitionPathEdit;
    QVBoxLayout *vboxLayout;
    QPushButton *saveButton;
    QPushButton *quitButton;
    QPushButton *restoreButton;
    QFrame *frame;
    QGridLayout *gridLayout2;
    QLabel *resultLabel;

    void setupUi(QWidget *SauveDialog)
    {
        if (SauveDialog->objectName().isEmpty())
            SauveDialog->setObjectName(QString::fromUtf8("SauveDialog"));
        SauveDialog->resize(580, 497);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(false);
        SauveDialog->setFont(font);
        gridLayout = new QGridLayout(SauveDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        warningLabel = new QLabel(SauveDialog);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setWordWrap(true);

        gridLayout->addWidget(warningLabel, 0, 0, 1, 2);

        textBrowser = new QTextBrowser(SauveDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(16777215, 61));

        gridLayout->addWidget(textBrowser, 1, 0, 1, 2);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        comboBox = new QComboBox(SauveDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout1->addWidget(comboBox, 0, 2, 1, 1);

        label = new QLabel(SauveDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(11);
        label->setFont(font1);

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(SauveDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(161, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comic Sans MS"));
        label_2->setFont(font2);

        gridLayout1->addWidget(label_2, 2, 0, 1, 1);

        basesComboBox = new QComboBox(SauveDialog);
        basesComboBox->setObjectName(QString::fromUtf8("basesComboBox"));
        basesComboBox->setMinimumSize(QSize(181, 24));

        gridLayout1->addWidget(basesComboBox, 2, 2, 1, 1);

        label_4 = new QLabel(SauveDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(131, 21));
        label_4->setFont(font2);

        gridLayout1->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(SauveDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        gridLayout1->addWidget(label_3, 5, 0, 1, 1);

        rythmComboBox = new QComboBox(SauveDialog);
        rythmComboBox->setObjectName(QString::fromUtf8("rythmComboBox"));

        gridLayout1->addWidget(rythmComboBox, 5, 2, 1, 1);

        savingPathButton = new QPushButton(SauveDialog);
        savingPathButton->setObjectName(QString::fromUtf8("savingPathButton"));

        gridLayout1->addWidget(savingPathButton, 1, 2, 1, 1);

        mysqldumpButton = new QPushButton(SauveDialog);
        mysqldumpButton->setObjectName(QString::fromUtf8("mysqldumpButton"));

        gridLayout1->addWidget(mysqldumpButton, 4, 2, 1, 1);

        partitionPathEdit = new QLineEdit(SauveDialog);
        partitionPathEdit->setObjectName(QString::fromUtf8("partitionPathEdit"));

        gridLayout1->addWidget(partitionPathEdit, 3, 2, 1, 1);


        gridLayout->addLayout(gridLayout1, 2, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        saveButton = new QPushButton(SauveDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy);
        saveButton->setMinimumSize(QSize(111, 91));

        vboxLayout->addWidget(saveButton);

        quitButton = new QPushButton(SauveDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        vboxLayout->addWidget(quitButton);

        restoreButton = new QPushButton(SauveDialog);
        restoreButton->setObjectName(QString::fromUtf8("restoreButton"));

        vboxLayout->addWidget(restoreButton);


        gridLayout->addLayout(vboxLayout, 3, 0, 1, 1);

        frame = new QFrame(SauveDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(411, 161));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(frame);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        resultLabel = new QLabel(frame);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setMinimumSize(QSize(450, 131));

        gridLayout2->addWidget(resultLabel, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 3, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBox);
        label_2->setBuddy(basesComboBox);
        label_3->setBuddy(rythmComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboBox, basesComboBox);
        QWidget::setTabOrder(basesComboBox, saveButton);
        QWidget::setTabOrder(saveButton, quitButton);
        QWidget::setTabOrder(quitButton, rythmComboBox);
        QWidget::setTabOrder(rythmComboBox, textBrowser);

        retranslateUi(SauveDialog);

        QMetaObject::connectSlotsByName(SauveDialog);
    } // setupUi

    void retranslateUi(QWidget *SauveDialog)
    {
        SauveDialog->setWindowTitle(QApplication::translate("SauveDialog", "Sauvegarde Medintux", 0, QApplication::UnicodeUTF8));
        warningLabel->setText(QApplication::translate("SauveDialog", "warning", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("SauveDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">Ce logiciel  permet la sauvegarde automatique de vos bases de donn\303\251es MedinTux.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">Vous pouvez choisir les bases \303\240 sauvegarder et le rythme de sauvegarde automatique.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">Ces fichiers sont sauvegard\303\251s dans les r\303\251pertoires :</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">- medintux sauve pour DrTuxTest, comptabilit\303\251, ou les deux,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">- medintuxsauvetout si vous choisissez de &quot;tout&quot; sauvegarder.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">Leur titre est du type fichier-date-heure.sql.</span></p>\n"
"<p style=\" margin-to"
                        "p:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">Le chemin de sauvegarde est :</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">- pour windows la lettre de votre p\303\251riph\303\251rique (que vous obtenez par Poste de Travail ,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">- pour Linux le p\303\251riph\303\251rique dans /media.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">Le chemin du logiciel de sauv"
                        "egarde mysqldump est :</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">- dans windows dans EasyPHP ou Wamp selon votre installation (d\303\251couverte automatique),</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400;\">- pour Linux c'est /usr/bin/mysqldump en g\303\251n\303\251ral.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SauveDialog", "Chemin de sauvegarde", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SauveDialog", "Base(s) \303\240 sauvegarder", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SauveDialog", "Chemin de mysqldump", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SauveDialog", "Rythme de sauvegarde\n"
" automatique", 0, QApplication::UnicodeUTF8));
        savingPathButton->setText(QApplication::translate("SauveDialog", "Choisir le chemin de sauvegarde", 0, QApplication::UnicodeUTF8));
        mysqldumpButton->setText(QApplication::translate("SauveDialog", "Choisir la localisation de mysqldump", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("SauveDialog", "&Sauvegarder", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("SauveDialog", "&Fermer", 0, QApplication::UnicodeUTF8));
        restoreButton->setText(QApplication::translate("SauveDialog", "&Restaurer", 0, QApplication::UnicodeUTF8));
        resultLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SauveDialog: public Ui_SauveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAUVEDIALOG_H
