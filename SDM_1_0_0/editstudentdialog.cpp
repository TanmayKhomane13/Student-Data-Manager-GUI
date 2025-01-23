#include "editstudentdialog.h"
#include "ui_editstudentdialog.h"

#include <fstream>
#include <vector>

#include "student.h"

#include <QMessageBox>
#include <QString>

editStudentDialog::editStudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editStudentDialog)
{
    ui->setupUi(this);

    ui -> saveBtn -> setEnabled(false);

}

editStudentDialog::~editStudentDialog()
{
    delete ui;
}

void editStudentDialog::on_okBtn_clicked() // okBtn will just display all the data in the widgets
{
    if (ui -> rollNumSB -> value() == 0) {
        QMessageBox :: warning(this, "Incomplete", "Please enter the roll number!");
    }
    else {
        std::ifstream fin {"studentData.txt"};
        if (!fin) {
            qDebug() << "Error opening file";
            QMessageBox :: critical(this, "Error", "Error opening file!");
        }
        else {
            qDebug() << "file opened successfully!";
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


            bool found = false;
            for(Student &s : students) {
                if (std::to_string(s.roll) == std::to_string(ui->rollNumSB->value())) {
                    found = true;

                    // debug
                    qDebug() << "Match found for student:" << QString::fromStdString(s.name);

                    // display current data in UI
                    ui -> nameLE -> setText(QString::fromStdString(s.name));
                    ui -> classCB -> setCurrentText(QString::fromStdString(s.stuClass));
                    ui -> divCB -> setCurrentText(QString::fromStdString(s.div));
                    ui -> pSB -> setValue(s.p);
                    ui -> cSB -> setValue(s.c);
                    ui -> mSB -> setValue(s.m);

                    break;
                }
            }
            if (!found) {
                QMessageBox :: critical(this, "Not Found", "Student not found!");
                return;
            }
            ui -> saveBtn -> setEnabled(true);
        }
        fin.close();

    }
}


void editStudentDialog::on_saveBtn_clicked() // after changing the data saveBtn will save it
{
    QString updatedName = ui -> nameLE -> text();
    QString updatedClass = ui -> classCB -> currentText();
    QString updatedDiv = ui -> divCB -> currentText();
    int updatedP = ui -> pSB -> value();
    int updatedC = ui -> cSB -> value();
    int updatedM = ui -> mSB -> value();

    Student student;
    std::vector <Student> students;

    std::ifstream fin {"studentData.txt"};
    if (!fin) {
        qDebug() << "Error opening file";
        QMessageBox :: critical(this, "Error", "Error opening file!");
    }
    else {
        qDebug() << "file opened successfully!";
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
        fin.close();


        bool found = false;
        for(Student &s : students) {
            if (std::to_string(s.roll) == std::to_string(ui->rollNumSB->value())) {
                found = true;

                // debug
                qDebug() << "Match found for student:" << QString::fromStdString(s.name);

                // save data from UI
                s.name = updatedName.toStdString();
                s.stuClass = updatedClass.toStdString();
                s.div = updatedDiv.toStdString();
                s.p = updatedP;
                s.c = updatedC;
                s.m = updatedM;
                s.total = updatedP + updatedC + updatedM;

                break;
            }
        }
        if (!found) {
            QMessageBox :: critical(this, "Not Found", "Student not found!");
            return;
        }
        ui -> saveBtn -> setEnabled(true);

        // save data to file
        std::ofstream fout{"studentData.txt"};
        for (const Student &s: students) {
            fout << s.name << " " << s.roll << " " << s.stuClass << " " << s.div << " "
                 << s.p << " " << s.c << " " << s.m << " " << s.total << std::endl;
        }
        fout.close();

    }

    accept();
}

