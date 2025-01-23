/********************************************************************************
** Form generated from reading UI file 'editstudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTUDENTDIALOG_H
#define UI_EDITSTUDENTDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editStudentDialog
{
public:
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpinBox *rollNumSB;
    QSpacerItem *verticalSpacer_2;
    QPushButton *okBtn;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *saveBtn;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *nameLE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *classCB;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *divCB;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *pSB;
    QSpacerItem *horizontalSpacer_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpinBox *cSB;
    QSpacerItem *horizontalSpacer_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpinBox *mSB;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *editStudentDialog)
    {
        if (editStudentDialog->objectName().isEmpty())
            editStudentDialog->setObjectName("editStudentDialog");
        editStudentDialog->resize(985, 709);
        QFont font;
        font.setFamilies({QString::fromUtf8("URW Gothic")});
        editStudentDialog->setFont(font);
        editStudentDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(41, 48, 47);"));
        horizontalLayout_8 = new QHBoxLayout(editStudentDialog);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(editStudentDialog);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 198);"));

        verticalLayout_3->addWidget(label);

        rollNumSB = new QSpinBox(editStudentDialog);
        rollNumSB->setObjectName("rollNumSB");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("URW Gothic")});
        font2.setPointSize(25);
        font2.setBold(true);
        rollNumSB->setFont(font2);
        rollNumSB->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 198);"));

        verticalLayout_3->addWidget(rollNumSB);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 58, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        okBtn = new QPushButton(editStudentDialog);
        okBtn->setObjectName("okBtn");
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        okBtn->setFont(font3);
        okBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 198);\n"
"color: rgb(0, 73, 66);"));

        verticalLayout_2->addWidget(okBtn);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer = new QSpacerItem(20, 128, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        saveBtn = new QPushButton(editStudentDialog);
        saveBtn->setObjectName("saveBtn");
        saveBtn->setFont(font3);
        saveBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 73, 66);\n"
"background-color: rgb(0, 255, 198);"));

        verticalLayout_4->addWidget(saveBtn);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_5);

        groupBox = new QGroupBox(editStudentDialog);
        groupBox->setObjectName("groupBox");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("URW Gothic")});
        font4.setPointSize(15);
        font4.setBold(true);
        groupBox->setFont(font4);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 198);"));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("URW Gothic")});
        font5.setPointSize(11);
        font5.setBold(true);
        groupBox_2->setFont(font5);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        nameLE = new QLineEdit(groupBox_2);
        nameLE->setObjectName("nameLE");
        nameLE->setFont(font2);
        nameLE->setStyleSheet(QString::fromUtf8("background-color: rgb(41, 48, 47);"));

        horizontalLayout_3->addWidget(nameLE);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        classCB = new QComboBox(groupBox_2);
        classCB->addItem(QString());
        classCB->addItem(QString());
        classCB->addItem(QString());
        classCB->addItem(QString());
        classCB->addItem(QString());
        classCB->setObjectName("classCB");
        classCB->setFont(font2);

        horizontalLayout_2->addWidget(classCB);

        horizontalSpacer_2 = new QSpacerItem(458, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        divCB = new QComboBox(groupBox_2);
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

        horizontalSpacer = new QSpacerItem(518, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_6->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(11, 41, 695, 53));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        pSB = new QSpinBox(layoutWidget);
        pSB->setObjectName("pSB");
        pSB->setFont(font2);

        horizontalLayout_4->addWidget(pSB);

        horizontalSpacer_5 = new QSpacerItem(518, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(11, 111, 701, 53));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        horizontalLayout_5->addWidget(label_6);

        cSB = new QSpinBox(layoutWidget1);
        cSB->setObjectName("cSB");
        cSB->setFont(font2);

        horizontalLayout_5->addWidget(cSB);

        horizontalSpacer_4 = new QSpacerItem(488, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(11, 181, 701, 53));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        horizontalLayout_6->addWidget(label_7);

        mSB = new QSpinBox(layoutWidget2);
        mSB->setObjectName("mSB");
        mSB->setFont(font2);

        horizontalLayout_6->addWidget(mSB);

        horizontalSpacer_3 = new QSpacerItem(538, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(groupBox_3);


        horizontalLayout_7->addWidget(groupBox);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        retranslateUi(editStudentDialog);

        QMetaObject::connectSlotsByName(editStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *editStudentDialog)
    {
        editStudentDialog->setWindowTitle(QCoreApplication::translate("editStudentDialog", "Edit Student Data", nullptr));
        label->setText(QCoreApplication::translate("editStudentDialog", "Roll No.:", nullptr));
        okBtn->setText(QCoreApplication::translate("editStudentDialog", "OK", nullptr));
        saveBtn->setText(QCoreApplication::translate("editStudentDialog", "Save", nullptr));
        groupBox->setTitle(QCoreApplication::translate("editStudentDialog", "Data:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("editStudentDialog", "Basic:", nullptr));
        label_2->setText(QCoreApplication::translate("editStudentDialog", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("editStudentDialog", "Class:", nullptr));
        classCB->setItemText(0, QCoreApplication::translate("editStudentDialog", "IT", nullptr));
        classCB->setItemText(1, QCoreApplication::translate("editStudentDialog", "COMP", nullptr));
        classCB->setItemText(2, QCoreApplication::translate("editStudentDialog", "MECH", nullptr));
        classCB->setItemText(3, QCoreApplication::translate("editStudentDialog", "ENTC", nullptr));
        classCB->setItemText(4, QCoreApplication::translate("editStudentDialog", "CIVIL", nullptr));

        label_4->setText(QCoreApplication::translate("editStudentDialog", "Div.:", nullptr));
        divCB->setItemText(0, QCoreApplication::translate("editStudentDialog", "A", nullptr));
        divCB->setItemText(1, QCoreApplication::translate("editStudentDialog", "B", nullptr));
        divCB->setItemText(2, QCoreApplication::translate("editStudentDialog", "C", nullptr));
        divCB->setItemText(3, QCoreApplication::translate("editStudentDialog", "D", nullptr));
        divCB->setItemText(4, QCoreApplication::translate("editStudentDialog", "E", nullptr));
        divCB->setItemText(5, QCoreApplication::translate("editStudentDialog", "F", nullptr));
        divCB->setItemText(6, QCoreApplication::translate("editStudentDialog", "G", nullptr));
        divCB->setItemText(7, QCoreApplication::translate("editStudentDialog", "H", nullptr));
        divCB->setItemText(8, QCoreApplication::translate("editStudentDialog", "I", nullptr));
        divCB->setItemText(9, QCoreApplication::translate("editStudentDialog", "J", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("editStudentDialog", "Marks:", nullptr));
        label_5->setText(QCoreApplication::translate("editStudentDialog", "Physics:", nullptr));
        label_6->setText(QCoreApplication::translate("editStudentDialog", "Chemistry:", nullptr));
        label_7->setText(QCoreApplication::translate("editStudentDialog", "Marks:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editStudentDialog: public Ui_editStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTUDENTDIALOG_H
