/********************************************************************************
** Form generated from reading UI file 'grandlivredialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRANDLIVREDIALOG_H
#define UI_GRANDLIVREDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GrandLivreDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QLabel *label_3;
    QDateEdit *dateEdit_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;

    void setupUi(QWidget *GrandLivreDialog)
    {
        if (GrandLivreDialog->objectName().isEmpty())
            GrandLivreDialog->setObjectName(QString::fromUtf8("GrandLivreDialog"));
        GrandLivreDialog->resize(992, 572);
        gridLayout_3 = new QGridLayout(GrandLivreDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(748, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(GrandLivreDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        textEdit = new QTextEdit(GrandLivreDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(0, 350));

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame = new QFrame(GrandLivreDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(420, 135));
        frame->setMaximumSize(QSize(16777215, 135));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 5, 401, 120));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(160, 20));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(110, 25));

        gridLayout->addWidget(dateEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(160, 20));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        dateEdit_2 = new QDateEdit(layoutWidget);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setMinimumSize(QSize(110, 25));

        gridLayout->addWidget(dateEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(160, 20));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dateEdit_3 = new QDateEdit(layoutWidget);
        dateEdit_3->setObjectName(QString::fromUtf8("dateEdit_3"));
        dateEdit_3->setMinimumSize(QSize(110, 25));

        gridLayout->addWidget(dateEdit_3, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(160, 20));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(200, 25));

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);


        horizontalLayout_2->addWidget(frame);

        groupBox = new QGroupBox(GrandLivreDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(130, 130));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 87, 91));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        layoutWidget->raise();

        horizontalLayout_2->addWidget(groupBox);

        label_5 = new QLabel(GrandLivreDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(250, 80));
        label_5->setMaximumSize(QSize(16777215, 80));

        horizontalLayout_2->addWidget(label_5);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(dateEdit);
        label_2->setBuddy(dateEdit_2);
        label_3->setBuddy(dateEdit_3);
        label_4->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(GrandLivreDialog);

        QMetaObject::connectSlotsByName(GrandLivreDialog);
    } // setupUi

    void retranslateUi(QWidget *GrandLivreDialog)
    {
        GrandLivreDialog->setWindowTitle(QApplication::translate("GrandLivreDialog", "GrandLivre", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("GrandLivreDialog", "?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GrandLivreDialog", "Ann\303\251e", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GrandLivreDialog", "du", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GrandLivreDialog", "au", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GrandLivreDialog", "Praticien", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GrandLivreDialog", "Contr\303\264les", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("GrandLivreDialog", "&Trier", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("GrandLivreDialog", "Im&primer", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("GrandLivreDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GrandLivreDialog: public Ui_GrandLivreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRANDLIVREDIALOG_H
