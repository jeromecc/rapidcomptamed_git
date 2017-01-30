/********************************************************************************
** Form generated from reading UI file 'MdpDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDPDIALOG_H
#define UI_MDPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MdpDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *userEdit;
    QLabel *label_3;
    QLineEdit *hostEdit;
    QLabel *label_4;
    QLineEdit *portEdit;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *passEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MdpDialog)
    {
        if (MdpDialog->objectName().isEmpty())
            MdpDialog->setObjectName(QString::fromUtf8("MdpDialog"));
        MdpDialog->resize(451, 290);
        gridLayout_2 = new QGridLayout(MdpDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(MdpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        userEdit = new QLineEdit(MdpDialog);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));
        userEdit->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(userEdit, 0, 1, 1, 1);

        label_3 = new QLabel(MdpDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        hostEdit = new QLineEdit(MdpDialog);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));
        hostEdit->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(hostEdit, 1, 1, 1, 1);

        label_4 = new QLabel(MdpDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        portEdit = new QLineEdit(MdpDialog);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        portEdit->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(portEdit, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MdpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        passEdit = new QLineEdit(MdpDialog);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setMinimumSize(QSize(0, 41));

        verticalLayout->addWidget(passEdit);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(MdpDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(userEdit);
        label_3->setBuddy(hostEdit);
        label->setBuddy(passEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(MdpDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MdpDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MdpDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MdpDialog);
    } // setupUi

    void retranslateUi(QDialog *MdpDialog)
    {
        MdpDialog->setWindowTitle(QApplication::translate("MdpDialog", "Mot de Passe Mysql requis.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MdpDialog", "Utilisateur", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MdpDialog", "Host", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MdpDialog", "Port", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MdpDialog", "Veuillez inscrire votre mot de passe mysql ci-dessous", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MdpDialog: public Ui_MdpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDPDIALOG_H
