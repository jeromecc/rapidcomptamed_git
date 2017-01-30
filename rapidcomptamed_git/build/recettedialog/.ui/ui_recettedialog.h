/********************************************************************************
** Form generated from reading UI file 'recettedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECETTEDIALOG_H
#define UI_RECETTEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecetteDialog
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *pulldownCheckBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QDateEdit *dateEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QComboBox *sitesComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QComboBox *userComboBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_17;
    QComboBox *bankAccountCcomboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QComboBox *payeurComboBox;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *thesaurusComboBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ccamButton;
    QLineEdit *ccamAndValuesLineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_18;
    QSpinBox *distanceSpinBox;
    QComboBox *rulesKmComboBox;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *labelPercentages;
    QPushButton *pushButton_11;
    QProgressBar *factorProgressBar;
    QPushButton *pushButton_12;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *percentSpinBox;
    QLabel *labelPercentSpinBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_13;
    QPushButton *controlButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_16;
    QCheckBox *keepValueCheckBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout1;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLineEdit *freeReceipValueEdit;
    QTableView *tableView;
    QLineEdit *lineEdit_4;
    QLabel *label_15;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout2;
    QCheckBox *Espece;
    QCheckBox *Cheque;
    QCheckBox *cb;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QCheckBox *letOpenedCheckBox;
    QCheckBox *virementBox;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QPushButton *recordButton;
    QPushButton *seanceButton;
    QPushButton *pondereButton;
    QPushButton *pushButton_5;
    QVBoxLayout *vboxLayout1;
    QLabel *resultNameLabel;
    QLabel *resultValueLabel;

    void setupUi(QWidget *RecetteDialog)
    {
        if (RecetteDialog->objectName().isEmpty())
            RecetteDialog->setObjectName(QString::fromUtf8("RecetteDialog"));
        RecetteDialog->resize(980, 662);
        RecetteDialog->setMinimumSize(QSize(800, 660));
        gridLayout_3 = new QGridLayout(RecetteDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_4 = new QGroupBox(RecetteDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(350, 230));
        groupBox_4->setAutoFillBackground(false);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pulldownCheckBox = new QCheckBox(groupBox_4);
        pulldownCheckBox->setObjectName(QString::fromUtf8("pulldownCheckBox"));

        verticalLayout_4->addWidget(pulldownCheckBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(140, 27));

        horizontalLayout_3->addWidget(label_2);

        dateEdit = new QDateEdit(groupBox_4);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(200, 25));

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(140, 0));

        horizontalLayout_5->addWidget(label_14);

        dateEdit_2 = new QDateEdit(groupBox_4);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setMinimumSize(QSize(200, 25));

        horizontalLayout_5->addWidget(dateEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(140, 27));

        horizontalLayout_6->addWidget(label_11);

        sitesComboBox = new QComboBox(groupBox_4);
        sitesComboBox->setObjectName(QString::fromUtf8("sitesComboBox"));
        sitesComboBox->setMinimumSize(QSize(200, 25));
        sitesComboBox->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_6->addWidget(sitesComboBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(140, 27));

        horizontalLayout_7->addWidget(label_3);

        userComboBox = new QComboBox(groupBox_4);
        userComboBox->setObjectName(QString::fromUtf8("userComboBox"));
        userComboBox->setMinimumSize(QSize(200, 25));

        horizontalLayout_7->addWidget(userComboBox);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(140, 27));

        horizontalLayout_8->addWidget(label_17);

        bankAccountCcomboBox = new QComboBox(groupBox_4);
        bankAccountCcomboBox->setObjectName(QString::fromUtf8("bankAccountCcomboBox"));
        bankAccountCcomboBox->setMinimumSize(QSize(200, 25));

        horizontalLayout_8->addWidget(bankAccountCcomboBox);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(140, 27));

        horizontalLayout_13->addWidget(label_9);

        payeurComboBox = new QComboBox(groupBox_4);
        payeurComboBox->setObjectName(QString::fromUtf8("payeurComboBox"));
        payeurComboBox->setMinimumSize(QSize(200, 25));

        horizontalLayout_13->addWidget(payeurComboBox);


        verticalLayout_4->addLayout(horizontalLayout_13);


        verticalLayout_5->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(RecetteDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(350, 230));
        layoutWidget = new QWidget(groupBox_5);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 350, 191));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(140, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        label->setFont(font);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);

        thesaurusComboBox = new QComboBox(layoutWidget);
        thesaurusComboBox->setObjectName(QString::fromUtf8("thesaurusComboBox"));
        thesaurusComboBox->setMinimumSize(QSize(200, 25));
        thesaurusComboBox->setMaximumSize(QSize(16777215, 16777215));
        thesaurusComboBox->setEditable(true);

        horizontalLayout->addWidget(thesaurusComboBox);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 2);

        ccamButton = new QPushButton(layoutWidget);
        ccamButton->setObjectName(QString::fromUtf8("ccamButton"));
        ccamButton->setMinimumSize(QSize(70, 50));
        ccamButton->setMaximumSize(QSize(41, 27));

        gridLayout_2->addWidget(ccamButton, 2, 0, 1, 1);

        ccamAndValuesLineEdit = new QLineEdit(layoutWidget);
        ccamAndValuesLineEdit->setObjectName(QString::fromUtf8("ccamAndValuesLineEdit"));
        ccamAndValuesLineEdit->setMinimumSize(QSize(150, 27));

        gridLayout_2->addWidget(ccamAndValuesLineEdit, 2, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(65, 25));

        horizontalLayout_12->addWidget(label_18);

        distanceSpinBox = new QSpinBox(layoutWidget);
        distanceSpinBox->setObjectName(QString::fromUtf8("distanceSpinBox"));
        distanceSpinBox->setMinimumSize(QSize(65, 0));

        horizontalLayout_12->addWidget(distanceSpinBox);

        rulesKmComboBox = new QComboBox(layoutWidget);
        rulesKmComboBox->setObjectName(QString::fromUtf8("rulesKmComboBox"));
        rulesKmComboBox->setMinimumSize(QSize(200, 30));

        horizontalLayout_12->addWidget(rulesKmComboBox);


        gridLayout_2->addLayout(horizontalLayout_12, 3, 0, 1, 2);


        verticalLayout_5->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(RecetteDialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(350, 110));
        layoutWidget1 = new QWidget(groupBox_6);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 321, 66));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelPercentages = new QLabel(layoutWidget1);
        labelPercentages->setObjectName(QString::fromUtf8("labelPercentages"));
        labelPercentages->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(labelPercentages, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget1);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 0, 1, 1, 1);

        factorProgressBar = new QProgressBar(layoutWidget1);
        factorProgressBar->setObjectName(QString::fromUtf8("factorProgressBar"));
        factorProgressBar->setValue(24);

        gridLayout->addWidget(factorProgressBar, 1, 0, 1, 1);

        pushButton_12 = new QPushButton(layoutWidget1);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 1, 1, 1, 1);

        layoutWidget2 = new QWidget(groupBox_6);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(110, 100, 122, 25));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        percentSpinBox = new QSpinBox(layoutWidget2);
        percentSpinBox->setObjectName(QString::fromUtf8("percentSpinBox"));

        horizontalLayout_9->addWidget(percentSpinBox);

        labelPercentSpinBox = new QLabel(layoutWidget2);
        labelPercentSpinBox->setObjectName(QString::fromUtf8("labelPercentSpinBox"));
        labelPercentSpinBox->setWordWrap(true);

        horizontalLayout_9->addWidget(labelPercentSpinBox);


        verticalLayout_5->addWidget(groupBox_6);


        gridLayout_3->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(RecetteDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(492, 80));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 20, 531, 46));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(layoutWidget3);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        horizontalLayout_2->addWidget(pushButton_13);

        controlButton = new QPushButton(layoutWidget3);
        controlButton->setObjectName(QString::fromUtf8("controlButton"));
        controlButton->setMinimumSize(QSize(0, 44));
        QFont font1;
        font1.setPointSize(11);
        controlButton->setFont(font1);

        horizontalLayout_2->addWidget(controlButton);

        pushButton_7 = new QPushButton(layoutWidget3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 44));

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 44));
        pushButton_8->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_16 = new QPushButton(layoutWidget3);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(0, 44));
        pushButton_16->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(pushButton_16);

        keepValueCheckBox = new QCheckBox(layoutWidget3);
        keepValueCheckBox->setObjectName(QString::fromUtf8("keepValueCheckBox"));

        horizontalLayout_2->addWidget(keepValueCheckBox);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(RecetteDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 240));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(131, 20));

        gridLayout1->addWidget(label_4, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout1->addWidget(lineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(131, 20));

        gridLayout1->addWidget(label_5, 1, 0, 1, 1);

        freeReceipValueEdit = new QLineEdit(groupBox_2);
        freeReceipValueEdit->setObjectName(QString::fromUtf8("freeReceipValueEdit"));

        gridLayout1->addWidget(freeReceipValueEdit, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout1, 0, 1, 1, 1);

        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(261, 81));
        tableView->setMaximumSize(QSize(16777215, 100));

        gridLayout_5->addWidget(tableView, 4, 1, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(200, 30));
        lineEdit_4->setMaximumSize(QSize(16777215, 30));

        gridLayout_5->addWidget(lineEdit_4, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 1, 0, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 4, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        gridLayout_7->addLayout(verticalLayout_3, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(RecetteDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(330, 220));
        groupBox->setMaximumSize(QSize(16777215, 200));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        Espece = new QCheckBox(groupBox);
        Espece->setObjectName(QString::fromUtf8("Espece"));

        gridLayout2->addWidget(Espece, 0, 0, 1, 1);

        Cheque = new QCheckBox(groupBox);
        Cheque->setObjectName(QString::fromUtf8("Cheque"));

        gridLayout2->addWidget(Cheque, 1, 0, 1, 1);

        cb = new QCheckBox(groupBox);
        cb->setObjectName(QString::fromUtf8("cb"));

        gridLayout2->addWidget(cb, 2, 0, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout2->addWidget(checkBox, 4, 0, 1, 1);

        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout2->addWidget(checkBox_4, 5, 0, 1, 1);

        letOpenedCheckBox = new QCheckBox(groupBox);
        letOpenedCheckBox->setObjectName(QString::fromUtf8("letOpenedCheckBox"));

        gridLayout2->addWidget(letOpenedCheckBox, 6, 0, 1, 1);

        virementBox = new QCheckBox(groupBox);
        virementBox->setObjectName(QString::fromUtf8("virementBox"));

        gridLayout2->addWidget(virementBox, 3, 0, 1, 1);


        hboxLayout->addLayout(gridLayout2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        recordButton = new QPushButton(splitter);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setMinimumSize(QSize(141, 27));
        splitter->addWidget(recordButton);

        vboxLayout->addWidget(splitter);

        seanceButton = new QPushButton(groupBox);
        seanceButton->setObjectName(QString::fromUtf8("seanceButton"));

        vboxLayout->addWidget(seanceButton);

        pondereButton = new QPushButton(groupBox);
        pondereButton->setObjectName(QString::fromUtf8("pondereButton"));

        vboxLayout->addWidget(pondereButton);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 0));

        vboxLayout->addWidget(pushButton_5);


        hboxLayout->addLayout(vboxLayout);


        gridLayout_6->addLayout(hboxLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        resultNameLabel = new QLabel(RecetteDialog);
        resultNameLabel->setObjectName(QString::fromUtf8("resultNameLabel"));
        resultNameLabel->setMinimumSize(QSize(0, 20));

        vboxLayout1->addWidget(resultNameLabel);

        resultValueLabel = new QLabel(RecetteDialog);
        resultValueLabel->setObjectName(QString::fromUtf8("resultValueLabel"));
        resultValueLabel->setMinimumSize(QSize(200, 20));

        vboxLayout1->addWidget(resultValueLabel);


        verticalLayout_2->addLayout(vboxLayout1);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(dateEdit);
        label_3->setBuddy(userComboBox);
        label_17->setBuddy(bankAccountCcomboBox);
        label->setBuddy(thesaurusComboBox);
        label_18->setBuddy(rulesKmComboBox);
        label_4->setBuddy(lineEdit);
        label_5->setBuddy(freeReceipValueEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(RecetteDialog);

        QMetaObject::connectSlotsByName(RecetteDialog);
    } // setupUi

    void retranslateUi(QWidget *RecetteDialog)
    {
        RecetteDialog->setWindowTitle(QApplication::translate("RecetteDialog", "Recettes", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("RecetteDialog", "Param\303\250tres", 0, QApplication::UnicodeUTF8));
        pulldownCheckBox->setText(QApplication::translate("RecetteDialog", "Diminuer", 0, QApplication::UnicodeUTF8));
        label_2->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(0, 170, 0);", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RecetteDialog", "Date de paiement", 0, QApplication::UnicodeUTF8));
        label_14->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(0, 170, 0);", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RecetteDialog", "Date des actes", 0, QApplication::UnicodeUTF8));
        label_11->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(0, 170, 0);", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("RecetteDialog", "Site", 0, QApplication::UnicodeUTF8));
        label_3->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(0, 170, 0);", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RecetteDialog", "Utilisateur", 0, QApplication::UnicodeUTF8));
        label_17->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(0, 170, 0);", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("RecetteDialog", "Compte", 0, QApplication::UnicodeUTF8));
        label_9->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(0, 170, 0);", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RecetteDialog", "Payeur :", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("RecetteDialog", "Valeurs", 0, QApplication::UnicodeUTF8));
        label->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(0, 0, 127);", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RecetteDialog", "Thesaurus\n"
"personnel", 0, QApplication::UnicodeUTF8));
        ccamButton->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(0, 0, 127);", 0, QApplication::UnicodeUTF8));
        ccamButton->setText(QApplication::translate("RecetteDialog", "&Valeurs", 0, QApplication::UnicodeUTF8));
        label_18->setStyleSheet(QApplication::translate("RecetteDialog", "color:rgb(0, 0, 255)", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("RecetteDialog", "IK", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("RecetteDialog", "Pourcentage des paiements", 0, QApplication::UnicodeUTF8));
        labelPercentages->setStyleSheet(QApplication::translate("RecetteDialog", "color: rgb(255, 0, 0);", 0, QApplication::UnicodeUTF8));
        labelPercentages->setText(QApplication::translate("RecetteDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("RecetteDialog", "+", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("RecetteDialog", "-", 0, QApplication::UnicodeUTF8));
        labelPercentSpinBox->setText(QApplication::translate("RecetteDialog", "pour cent", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("RecetteDialog", "Contr\303\264les", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("RecetteDialog", "Fermeture\n"
"auto", 0, QApplication::UnicodeUTF8));
        controlButton->setText(QApplication::translate("RecetteDialog", "Recettes", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("RecetteDialog", "+thesaurus", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("RecetteDialog", "Log", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("RecetteDialog", "?", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        keepValueCheckBox->setToolTip(QApplication::translate("RecetteDialog", "<html><head/><body><p>Garder la derni\303\250re valeur en cas de choix de pourcentage.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        keepValueCheckBox->setText(QApplication::translate("RecetteDialog", "Garder", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("RecetteDialog", "Entr\303\251es", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RecetteDialog", "Entr\303\251e libre", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RecetteDialog", "Somme libre", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("RecetteDialog", "Nom Pr\303\251nom", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("RecetteDialog", "Choisir", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RecetteDialog", "Enregistrement", 0, QApplication::UnicodeUTF8));
        Espece->setText(QApplication::translate("RecetteDialog", "&Esp\303\250ce", 0, QApplication::UnicodeUTF8));
        Cheque->setText(QApplication::translate("RecetteDialog", "C&h\303\250que", 0, QApplication::UnicodeUTF8));
        cb->setText(QApplication::translate("RecetteDialog", "C&b", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("RecetteDialog", "D&af", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("RecetteDialog", "&D\303\273", 0, QApplication::UnicodeUTF8));
        letOpenedCheckBox->setText(QApplication::translate("RecetteDialog", "&Bloquer ouvert", 0, QApplication::UnicodeUTF8));
        virementBox->setText(QApplication::translate("RecetteDialog", "&Virement", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("RecetteDialog", "Enregistrer", 0, QApplication::UnicodeUTF8));
        seanceButton->setText(QApplication::translate("RecetteDialog", "Enregistrer la &s\303\251ance", 0, QApplication::UnicodeUTF8));
        pondereButton->setText(QApplication::translate("RecetteDialog", "&Pond\303\251rer la liste", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("RecetteDialog", "&Quitter", 0, QApplication::UnicodeUTF8));
        resultNameLabel->setText(QApplication::translate("RecetteDialog", "La recette enregistr\303\251e =", 0, QApplication::UnicodeUTF8));
        resultValueLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RecetteDialog: public Ui_RecetteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECETTEDIALOG_H
