/********************************************************************************
** Form generated from reading UI file 'comptatorapidcompta.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPTATORAPIDCOMPTA_H
#define UI_COMPTATORAPIDCOMPTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComptatorapidcomptaWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *explanationLabel;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ComptatorapidcomptaWidget)
    {
        if (ComptatorapidcomptaWidget->objectName().isEmpty())
            ComptatorapidcomptaWidget->setObjectName(QString::fromUtf8("ComptatorapidcomptaWidget"));
        ComptatorapidcomptaWidget->resize(400, 501);
        gridLayout = new QGridLayout(ComptatorapidcomptaWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        explanationLabel = new QLabel(ComptatorapidcomptaWidget);
        explanationLabel->setObjectName(QString::fromUtf8("explanationLabel"));
        explanationLabel->setWordWrap(true);

        gridLayout->addWidget(explanationLabel, 0, 0, 1, 1);

        listWidget = new QListWidget(ComptatorapidcomptaWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(256, 16777215));

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ComptatorapidcomptaWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(ComptatorapidcomptaWidget);

        QMetaObject::connectSlotsByName(ComptatorapidcomptaWidget);
    } // setupUi

    void retranslateUi(QWidget *ComptatorapidcomptaWidget)
    {
        ComptatorapidcomptaWidget->setWindowTitle(QApplication::translate("ComptatorapidcomptaWidget", "Recup\303\251ration des bases dans rapidecomptabilite", 0, QApplication::UnicodeUTF8));
        explanationLabel->setText(QApplication::translate("ComptatorapidcomptaWidget", "Choisissez ci dessous l'ancienne base \303\240 transf\303\251rer dans la nouvelle.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ComptatorapidcomptaWidget: public Ui_ComptatorapidcomptaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPTATORAPIDCOMPTA_H
