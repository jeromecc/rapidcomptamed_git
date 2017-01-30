/********************************************************************************
** Form generated from reading UI file 'RecupDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECUPDIALOG_H
#define UI_RECUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecupDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *whatsthisButton;
    QLabel *label;
    QComboBox *comboBox;
    QFrame *frame;
    QLabel *resultLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *restoreButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *quitButton;

    void setupUi(QWidget *RecupDialog)
    {
        if (RecupDialog->objectName().isEmpty())
            RecupDialog->setObjectName(QString::fromUtf8("RecupDialog"));
        RecupDialog->resize(400, 292);
        gridLayout = new QGridLayout(RecupDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        whatsthisButton = new QPushButton(RecupDialog);
        whatsthisButton->setObjectName(QString::fromUtf8("whatsthisButton"));

        gridLayout->addWidget(whatsthisButton, 0, 1, 1, 1);

        label = new QLabel(RecupDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(12);
        font.setItalic(true);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comboBox = new QComboBox(RecupDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(180, 30));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        frame = new QFrame(RecupDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(350, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        resultLabel = new QLabel(frame);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(10, 10, 340, 70));
        resultLabel->setMinimumSize(QSize(340, 70));

        gridLayout->addWidget(frame, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        restoreButton = new QPushButton(RecupDialog);
        restoreButton->setObjectName(QString::fromUtf8("restoreButton"));
        restoreButton->setMinimumSize(QSize(90, 50));

        horizontalLayout->addWidget(restoreButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        quitButton = new QPushButton(RecupDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setMinimumSize(QSize(90, 50));

        horizontalLayout->addWidget(quitButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(RecupDialog);

        QMetaObject::connectSlotsByName(RecupDialog);
    } // setupUi

    void retranslateUi(QWidget *RecupDialog)
    {
        RecupDialog->setWindowTitle(QApplication::translate("RecupDialog", "Restaurer des bases", 0, QApplication::UnicodeUTF8));
        whatsthisButton->setText(QApplication::translate("RecupDialog", "?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RecupDialog", "Base \303\240 restaurer :", 0, QApplication::UnicodeUTF8));
        resultLabel->setText(QString());
        restoreButton->setText(QApplication::translate("RecupDialog", "&Restaurer", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("RecupDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RecupDialog: public Ui_RecupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECUPDIALOG_H
