#include "addnewstudentdialog.h"
#include "ui_addnewstudentdialog.h"

#include "student.h"
#include <fstream>

#include <QMessageBox>

addNewStudentDialog::addNewStudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addNewStudentDialog)
{
    ui->setupUi(this);

    // setting tabs and button disabled
    ui -> tabWidget -> setTabEnabled(1, false);
    ui -> tabWidget -> setTabEnabled(2, false);

}

addNewStudentDialog::~addNewStudentDialog()
{
    delete ui;
}

// storing basic data
void addNewStudentDialog::on_nextBtn1_clicked()
{
    if (ui -> nameLE -> text().isEmpty() || ui -> rollNumSB -> value() == 0) {
        QMessageBox :: information(this, "Incomplete", "Please fill the required data!");
    }
    else {
        student.name = ui -> nameLE -> text().toStdString();
        student.roll = ui -> rollNumSB -> value();
        student.stuClass = ui -> classCB -> currentText().toStdString();
        student.div = ui -> divCB -> currentText().toStdString();

        ui -> tabWidget -> setTabEnabled(1, true);
        ui -> tabWidget -> setCurrentIndex(1);
    }
}

// storing marks
void addNewStudentDialog::on_nextBtn2_clicked()
{
    if (ui -> pSB -> value() == 0 || ui -> cSB -> value() == 0 || ui -> mSB -> value() == 0) {
        QMessageBox :: information(this, "Incomplete", "Please enter the required marks!");
    }
    else {
        student.p = ui -> pSB -> value();
        student.c = ui -> cSB -> value();
        student.m = ui -> mSB -> value();
        student.total = student.p + student.c + student.m;

        ui -> tabWidget -> setTabEnabled(2, true);
        ui -> tabWidget -> setCurrentIndex(2);

        // basic data output
        ui -> nameLabel -> setText(QString::fromStdString(student.name));
        ui -> classLabel -> setText(QString::fromStdString(student.stuClass));
        ui -> divLabel -> setText(QString::fromStdString(student.div));
        ui -> rollNumLabel -> setText(QString::number(student.roll));

        // marks data output
        ui -> pLabel -> setText(QString::number(student.p));
        ui -> cLabel -> setText(QString::number(student.c));
        ui -> mLabel -> setText(QString::number(student.m));
        ui -> totalLabel -> setText(QString::number(student.total) + " / 150");
    }
}


void addNewStudentDialog::on_saveBtn_clicked()
{
    // save data to text file
    std::ofstream fout {"studentData.txt", std::ios::app};
    fout << student.name << " " << student.roll << " " << student.stuClass << " " << student.div << " "
         << student.p << " " << student.c << " " << student.m << " " << student.total << std::endl;
    fout.close();

    accept();
}

