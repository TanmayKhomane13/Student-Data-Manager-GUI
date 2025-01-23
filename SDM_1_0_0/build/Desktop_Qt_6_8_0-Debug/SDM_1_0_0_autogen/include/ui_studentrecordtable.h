/********************************************************************************
** Form generated from reading UI file 'studentrecordtable.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTRECORDTABLE_H
#define UI_STUDENTRECORDTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_studentRecordTable
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *showBtn;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget;

    void setupUi(QDialog *studentRecordTable)
    {
        if (studentRecordTable->objectName().isEmpty())
            studentRecordTable->setObjectName("studentRecordTable");
        studentRecordTable->resize(926, 726);
        studentRecordTable->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 198);\n"
"background-color: rgb(41, 48, 47);"));
        horizontalLayout_2 = new QHBoxLayout(studentRecordTable);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(318, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        showBtn = new QPushButton(studentRecordTable);
        showBtn->setObjectName("showBtn");
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Sans")});
        font.setPointSize(20);
        font.setBold(true);
        showBtn->setFont(font);
        showBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 73, 66);\n"
"background-color: rgb(0, 255, 198);"));

        horizontalLayout->addWidget(showBtn);

        horizontalSpacer_2 = new QSpacerItem(358, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(studentRecordTable);
        tableWidget->setObjectName("tableWidget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("URW Gothic")});
        font1.setPointSize(25);
        font1.setBold(true);
        tableWidget->setFont(font1);
        tableWidget->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(tableWidget);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(studentRecordTable);

        QMetaObject::connectSlotsByName(studentRecordTable);
    } // setupUi

    void retranslateUi(QDialog *studentRecordTable)
    {
        studentRecordTable->setWindowTitle(QCoreApplication::translate("studentRecordTable", "Student Records Table", nullptr));
        showBtn->setText(QCoreApplication::translate("studentRecordTable", "Show Records", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentRecordTable: public Ui_studentRecordTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTRECORDTABLE_H
