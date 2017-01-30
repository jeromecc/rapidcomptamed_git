/********************************************************************************
** Form generated from reading UI file 'Notes.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTES_H
#define UI_NOTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotesWidget
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *recordButton;

    void setupUi(QWidget *NotesWidget)
    {
        if (NotesWidget->objectName().isEmpty())
            NotesWidget->setObjectName(QString::fromUtf8("NotesWidget"));
        NotesWidget->resize(539, 373);
        gridLayout = new QGridLayout(NotesWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(NotesWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        recordButton = new QPushButton(NotesWidget);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        gridLayout->addWidget(recordButton, 1, 0, 1, 1);


        retranslateUi(NotesWidget);

        QMetaObject::connectSlotsByName(NotesWidget);
    } // setupUi

    void retranslateUi(QWidget *NotesWidget)
    {
        NotesWidget->setWindowTitle(QApplication::translate("NotesWidget", "Notes", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("NotesWidget", "En&registre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NotesWidget: public Ui_NotesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTES_H
