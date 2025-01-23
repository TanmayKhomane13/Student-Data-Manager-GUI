#include "studentrecordtable.h"
#include "ui_studentrecordtable.h"

#include "student.h"

#include <vector>
#include <fstream>

#include <QTableWidget>


studentRecordTable::studentRecordTable(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::studentRecordTable)
{
    ui->setupUi(this);

    // setting headers and columns
    QStringList headers {"Name", "Roll No.", "Class", "Div"};
    ui -> tableWidget -> setColumnCount(headers.size());
    ui -> tableWidget -> setHorizontalHeaderLabels(headers);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

studentRecordTable::~studentRecordTable()
{
    delete ui;
}

void studentRecordTable::on_showBtn_clicked()
{
    std::ifstream fin {"studentData.txt"};

    Student student;
    std::vector <Student> students;

    while (fin >> student.name >> student.roll >> student.stuClass >> student.div
           >> student.p >> student.c >> student.m >> student.total) {
        qDebug() << "Parsed student:"
                 << QString::fromStdString(student.name) << student.roll
                 << QString::fromStdString(student.stuClass) << QString::fromStdString(student.div)
                 << student.p << student.c << student.m << student.total;

        students.push_back(student);
    }

    ui -> tableWidget -> clearContents();
    ui -> tableWidget -> setRowCount(students.size());

    // displaying records
    for (int i = 0; i < students.size(); i++) {
        const Student &s = students[i];

        ui -> tableWidget -> setItem(i, 0, new QTableWidgetItem(QString::fromStdString(s.name)));
        ui -> tableWidget -> setItem(i, 1, new QTableWidgetItem(QString::number(s.roll)));
        ui -> tableWidget -> setItem(i, 2, new QTableWidgetItem(QString::fromStdString(s.stuClass)));
        ui -> tableWidget -> setItem(i , 3, new QTableWidgetItem(QString::fromStdString(s.div)));
    }

    fin.close();

}

