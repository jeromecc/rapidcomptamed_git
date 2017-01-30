/********************************************************************************
** Form generated from reading UI file 'thesaurusWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THESAURUSWIDGET_H
#define UI_THESAURUSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thesaurusWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *okButton;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QPushButton *quitButton;

    void setupUi(QWidget *thesaurusWidget)
    {
        if (thesaurusWidget->objectName().isEmpty())
            thesaurusWidget->setObjectName(QString::fromUtf8("thesaurusWidget"));
        thesaurusWidget->resize(649, 417);
        gridLayout_2 = new QGridLayout(thesaurusWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(thesaurusWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 4);

        okButton = new QPushButton(thesaurusWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        gridLayout->addWidget(okButton, 1, 0, 1, 1);

        deleteButton = new QPushButton(thesaurusWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout->addWidget(deleteButton, 1, 1, 1, 1);

        addButton = new QPushButton(thesaurusWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 1, 2, 1, 1);

        quitButton = new QPushButton(thesaurusWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        gridLayout->addWidget(quitButton, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(thesaurusWidget);

        QMetaObject::connectSlotsByName(thesaurusWidget);
    } // setupUi

    void retranslateUi(QWidget *thesaurusWidget)
    {
        thesaurusWidget->setWindowTitle(QApplication::translate("thesaurusWidget", "Modifier le Thesaurus personnel", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("thesaurusWidget", "&Ok", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("thesaurusWidget", "&Delete", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("thesaurusWidget", "&Add", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("thesaurusWidget", "&Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class thesaurusWidget: public Ui_thesaurusWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THESAURUSWIDGET_H
