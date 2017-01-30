/********************************************************************************
** Form generated from reading UI file 'vision.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISION_H
#define UI_VISION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisionDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *quitButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *VisionDialog)
    {
        if (VisionDialog->objectName().isEmpty())
            VisionDialog->setObjectName(QString::fromUtf8("VisionDialog"));
        VisionDialog->resize(904, 268);
        gridLayout_2 = new QGridLayout(VisionDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(VisionDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        deleteButton = new QPushButton(VisionDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        quitButton = new QPushButton(VisionDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(quitButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(VisionDialog);

        QMetaObject::connectSlotsByName(VisionDialog);
    } // setupUi

    void retranslateUi(QWidget *VisionDialog)
    {
        VisionDialog->setWindowTitle(QApplication::translate("VisionDialog", "Vision", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("VisionDialog", "&Effacer", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("VisionDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VisionDialog: public Ui_VisionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISION_H
