/********************************************************************************
** Form generated from reading UI file 'immobilisations.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMMOBILISATIONS_H
#define UI_IMMOBILISATIONS_H

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
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImmobilisationsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *labelLogins;
    QComboBox *comboBoxLogins;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *ImmobilisationsDialog)
    {
        if (ImmobilisationsDialog->objectName().isEmpty())
            ImmobilisationsDialog->setObjectName(QString::fromUtf8("ImmobilisationsDialog"));
        ImmobilisationsDialog->resize(612, 528);
        gridLayout = new QGridLayout(ImmobilisationsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelLogins = new QLabel(ImmobilisationsDialog);
        labelLogins->setObjectName(QString::fromUtf8("labelLogins"));

        gridLayout->addWidget(labelLogins, 0, 0, 1, 1);

        comboBoxLogins = new QComboBox(ImmobilisationsDialog);
        comboBoxLogins->setObjectName(QString::fromUtf8("comboBoxLogins"));
        comboBoxLogins->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(comboBoxLogins, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(ImmobilisationsDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(ImmobilisationsDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        frame = new QFrame(ImmobilisationsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(580, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 551, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_6 = new QSpacerItem(13, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(frame);

        textEdit = new QTextEdit(ImmobilisationsDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 4);


        retranslateUi(ImmobilisationsDialog);

        QMetaObject::connectSlotsByName(ImmobilisationsDialog);
    } // setupUi

    void retranslateUi(QWidget *ImmobilisationsDialog)
    {
        ImmobilisationsDialog->setWindowTitle(QApplication::translate("ImmobilisationsDialog", "Immobilisations", 0, QApplication::UnicodeUTF8));
        labelLogins->setText(QApplication::translate("ImmobilisationsDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ImmobilisationsDialog", "?", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ImmobilisationsDialog", "&Nouveau", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ImmobilisationsDialog", "E&ffacer", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ImmobilisationsDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImmobilisationsDialog: public Ui_ImmobilisationsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMMOBILISATIONS_H
