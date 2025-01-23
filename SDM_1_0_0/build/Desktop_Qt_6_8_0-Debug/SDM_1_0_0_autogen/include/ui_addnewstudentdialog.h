/********************************************************************************
** Form generated from reading UI file 'addnewstudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWSTUDENTDIALOG_H
#define UI_ADDNEWSTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addNewStudentDialog
{
public:
    QHBoxLayout *horizontalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *nameLE;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *rollNumSB;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *classCB;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *divCB;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *nextBtn1;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSpinBox *pSB;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *cSB;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *mSB;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *nextBtn2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_19;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLabel *nameLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLabel *rollNumLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QLabel *classLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLabel *divLabel;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLabel *pLabel;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QLabel *cLabel;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QLabel *mLabel;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_15;
    QLabel *totalLabel;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *saveBtn;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *addNewStudentDialog)
    {
        if (addNewStudentDialog->objectName().isEmpty())
            addNewStudentDialog->setObjectName("addNewStudentDialog");
        addNewStudentDialog->resize(1029, 729);
        horizontalLayout_6 = new QHBoxLayout(addNewStudentDialog);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        tabWidget = new QTabWidget(addNewStudentDialog);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setFamilies({QString::fromUtf8("URW Gothic")});
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 198);\n"
"background-color: rgb(41, 48, 47);"));
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(tab);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("URW Gothic")});
        font1.setPointSize(20);
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        nameLE = new QLineEdit(tab);
        nameLE->setObjectName("nameLE");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("URW Gothic")});
        font2.setPointSize(25);
        font2.setBold(true);
        nameLE->setFont(font2);
        nameLE->setClearButtonEnabled(false);

        horizontalLayout_4->addWidget(nameLE);

        horizontalSpacer_5 = new QSpacerItem(218, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        rollNumSB = new QSpinBox(tab);
        rollNumSB->setObjectName("rollNumSB");
        rollNumSB->setFont(font2);

        horizontalLayout_3->addWidget(rollNumSB);

        horizontalSpacer_4 = new QSpacerItem(588, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        classCB = new QComboBox(tab);
        classCB->addItem(QString());
        classCB->addItem(QString());
        classCB->addItem(QString());
        classCB->addItem(QString());
        classCB->addItem(QString());
        classCB->setObjectName("classCB");
        classCB->setFont(font2);

        horizontalLayout_2->addWidget(classCB);

        horizontalSpacer_3 = new QSpacerItem(558, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        divCB = new QComboBox(tab);
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->addItem(QString());
        divCB->setObjectName("divCB");
        divCB->setFont(font2);

        horizontalLayout->addWidget(divCB);

        horizontalSpacer_2 = new QSpacerItem(648, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(628, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        nextBtn1 = new QPushButton(tab);
        nextBtn1->setObjectName("nextBtn1");
        nextBtn1->setFont(font1);

        horizontalLayout_5->addWidget(nextBtn1);


        verticalLayout->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        QFont font3;
        font3.setPointSize(20);
        label_5->setFont(font3);

        horizontalLayout_9->addWidget(label_5);

        pSB = new QSpinBox(tab_2);
        pSB->setObjectName("pSB");
        QFont font4;
        font4.setPointSize(25);
        font4.setBold(true);
        pSB->setFont(font4);

        horizontalLayout_9->addWidget(pSB);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);

        horizontalLayout_8->addWidget(label_6);

        cSB = new QSpinBox(tab_2);
        cSB->setObjectName("cSB");
        cSB->setFont(font4);

        horizontalLayout_8->addWidget(cSB);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font3);

        horizontalLayout_7->addWidget(label_7);

        mSB = new QSpinBox(tab_2);
        mSB->setObjectName("mSB");
        mSB->setFont(font4);

        horizontalLayout_7->addWidget(mSB);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_6 = new QSpacerItem(588, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        nextBtn2 = new QPushButton(tab_2);
        nextBtn2->setObjectName("nextBtn2");
        nextBtn2->setFont(font3);

        horizontalLayout_10->addWidget(nextBtn2);


        verticalLayout_2->addLayout(horizontalLayout_10);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName("groupBox");
        QFont font5;
        font5.setPointSize(15);
        groupBox->setFont(font5);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setFont(font3);

        horizontalLayout_11->addWidget(label_8);

        nameLabel = new QLabel(groupBox);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setFont(font3);

        horizontalLayout_11->addWidget(nameLabel);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer = new QSpacerItem(20, 93, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setFont(font3);

        horizontalLayout_12->addWidget(label_9);

        rollNumLabel = new QLabel(groupBox);
        rollNumLabel->setObjectName("rollNumLabel");
        rollNumLabel->setFont(font3);

        horizontalLayout_12->addWidget(rollNumLabel);


        verticalLayout_3->addLayout(horizontalLayout_12);

        verticalSpacer_2 = new QSpacerItem(20, 93, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setFont(font3);

        horizontalLayout_13->addWidget(label_10);

        classLabel = new QLabel(groupBox);
        classLabel->setObjectName("classLabel");
        classLabel->setFont(font3);

        horizontalLayout_13->addWidget(classLabel);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_3 = new QSpacerItem(20, 93, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setFont(font3);

        horizontalLayout_14->addWidget(label_11);

        divLabel = new QLabel(groupBox);
        divLabel->setObjectName("divLabel");
        divLabel->setFont(font3);

        horizontalLayout_14->addWidget(divLabel);


        verticalLayout_3->addLayout(horizontalLayout_14);

        verticalSpacer_4 = new QSpacerItem(20, 93, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_19->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font5);
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_5 = new QSpacerItem(20, 103, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");
        label_12->setFont(font3);

        horizontalLayout_15->addWidget(label_12);

        pLabel = new QLabel(groupBox_2);
        pLabel->setObjectName("pLabel");
        pLabel->setFont(font3);

        horizontalLayout_15->addWidget(pLabel);


        verticalLayout_4->addLayout(horizontalLayout_15);

        verticalSpacer_6 = new QSpacerItem(20, 104, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName("label_13");
        label_13->setFont(font3);

        horizontalLayout_16->addWidget(label_13);

        cLabel = new QLabel(groupBox_2);
        cLabel->setObjectName("cLabel");
        cLabel->setFont(font3);

        horizontalLayout_16->addWidget(cLabel);


        verticalLayout_4->addLayout(horizontalLayout_16);

        verticalSpacer_7 = new QSpacerItem(20, 88, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName("label_14");
        label_14->setFont(font3);

        horizontalLayout_17->addWidget(label_14);

        mLabel = new QLabel(groupBox_2);
        mLabel->setObjectName("mLabel");
        mLabel->setFont(font3);

        horizontalLayout_17->addWidget(mLabel);


        verticalLayout_4->addLayout(horizontalLayout_17);

        verticalSpacer_9 = new QSpacerItem(20, 38, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName("label_15");
        label_15->setFont(font3);

        horizontalLayout_20->addWidget(label_15);

        totalLabel = new QLabel(groupBox_2);
        totalLabel->setObjectName("totalLabel");
        totalLabel->setFont(font3);

        horizontalLayout_20->addWidget(totalLabel);


        verticalLayout_4->addLayout(horizontalLayout_20);

        verticalSpacer_8 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);


        horizontalLayout_19->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalSpacer_7 = new QSpacerItem(438, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_7);

        saveBtn = new QPushButton(tab_3);
        saveBtn->setObjectName("saveBtn");
        QFont font6;
        font6.setPointSize(16);
        saveBtn->setFont(font6);

        horizontalLayout_18->addWidget(saveBtn);

        horizontalSpacer_8 = new QSpacerItem(448, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_18);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_6->addWidget(tabWidget);


        retranslateUi(addNewStudentDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(addNewStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *addNewStudentDialog)
    {
        addNewStudentDialog->setWindowTitle(QCoreApplication::translate("addNewStudentDialog", "Add New Student", nullptr));
        label->setText(QCoreApplication::translate("addNewStudentDialog", "Name:", nullptr));
        nameLE->setPlaceholderText(QCoreApplication::translate("addNewStudentDialog", "Student's Name", nullptr));
        label_2->setText(QCoreApplication::translate("addNewStudentDialog", "Roll No.:", nullptr));
        label_3->setText(QCoreApplication::translate("addNewStudentDialog", "Class:", nullptr));
        classCB->setItemText(0, QCoreApplication::translate("addNewStudentDialog", "IT", nullptr));
        classCB->setItemText(1, QCoreApplication::translate("addNewStudentDialog", "COMP", nullptr));
        classCB->setItemText(2, QCoreApplication::translate("addNewStudentDialog", "MECH", nullptr));
        classCB->setItemText(3, QCoreApplication::translate("addNewStudentDialog", "ENTC", nullptr));
        classCB->setItemText(4, QCoreApplication::translate("addNewStudentDialog", "CIVIL", nullptr));

        label_4->setText(QCoreApplication::translate("addNewStudentDialog", "Div.:", nullptr));
        divCB->setItemText(0, QCoreApplication::translate("addNewStudentDialog", "A", nullptr));
        divCB->setItemText(1, QCoreApplication::translate("addNewStudentDialog", "B", nullptr));
        divCB->setItemText(2, QCoreApplication::translate("addNewStudentDialog", "C", nullptr));
        divCB->setItemText(3, QCoreApplication::translate("addNewStudentDialog", "D", nullptr));
        divCB->setItemText(4, QCoreApplication::translate("addNewStudentDialog", "E", nullptr));
        divCB->setItemText(5, QCoreApplication::translate("addNewStudentDialog", "F", nullptr));
        divCB->setItemText(6, QCoreApplication::translate("addNewStudentDialog", "G", nullptr));
        divCB->setItemText(7, QCoreApplication::translate("addNewStudentDialog", "H", nullptr));
        divCB->setItemText(8, QCoreApplication::translate("addNewStudentDialog", "I", nullptr));
        divCB->setItemText(9, QCoreApplication::translate("addNewStudentDialog", "J", nullptr));

        nextBtn1->setText(QCoreApplication::translate("addNewStudentDialog", "Save and Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("addNewStudentDialog", "Basic", nullptr));
        label_5->setText(QCoreApplication::translate("addNewStudentDialog", "Physics:", nullptr));
        label_6->setText(QCoreApplication::translate("addNewStudentDialog", "Chemistry:", nullptr));
        label_7->setText(QCoreApplication::translate("addNewStudentDialog", "Maths:", nullptr));
        nextBtn2->setText(QCoreApplication::translate("addNewStudentDialog", "Save and Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("addNewStudentDialog", "Marks", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addNewStudentDialog", "Basic Information", nullptr));
        label_8->setText(QCoreApplication::translate("addNewStudentDialog", "Name:", nullptr));
        nameLabel->setText(QString());
        label_9->setText(QCoreApplication::translate("addNewStudentDialog", "Roll No.:", nullptr));
        rollNumLabel->setText(QString());
        label_10->setText(QCoreApplication::translate("addNewStudentDialog", "Class:", nullptr));
        classLabel->setText(QString());
        label_11->setText(QCoreApplication::translate("addNewStudentDialog", "Div.:", nullptr));
        divLabel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("addNewStudentDialog", "Marks:", nullptr));
        label_12->setText(QCoreApplication::translate("addNewStudentDialog", "Physics:", nullptr));
        pLabel->setText(QString());
        label_13->setText(QCoreApplication::translate("addNewStudentDialog", "Chemistry:", nullptr));
        cLabel->setText(QString());
        label_14->setText(QCoreApplication::translate("addNewStudentDialog", "Maths:", nullptr));
        mLabel->setText(QString());
        label_15->setText(QCoreApplication::translate("addNewStudentDialog", "Total:", nullptr));
        totalLabel->setText(QString());
        saveBtn->setText(QCoreApplication::translate("addNewStudentDialog", "Save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("addNewStudentDialog", "Summary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewStudentDialog: public Ui_addNewStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWSTUDENTDIALOG_H
