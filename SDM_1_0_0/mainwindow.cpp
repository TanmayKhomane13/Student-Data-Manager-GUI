#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "addnewstudentdialog.h"
#include "editstudentdialog.h"
#include "studentrecordtable.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addNewBtn_clicked()
{
    addNewStudentDialog *dialog1 = new addNewStudentDialog(this);
    auto ret = dialog1 -> exec();

    if (ret == addNewStudentDialog::Accepted) {
        QMessageBox :: information (this, "Saved", "Student was added successfully!");
    }
    else {
        QMessageBox :: critical (this, "Failed", "Failed to add new student :(");
    }

}


void MainWindow::on_editStuBtn_clicked()
{
    editStudentDialog *dialog2 = new editStudentDialog(this);
    auto ret = dialog2 -> exec();

    if (ret == editStudentDialog::Accepted) {
        QMessageBox :: information (this, "Success", "Data was edited successfully!");
    }
    else {
        QMessageBox :: information (this, "Failed", "Data wasn't edited successfully!");
    }
}


void MainWindow::on_actionQuit_triggered()
{
    QApplication :: quit();
}


void MainWindow::on_actionAbout_Student_Data_Manager_triggered()
{
    QMessageBox :: information(this, "About Student Data Manager", "Version 1.0.0\n"
                                                 "Copyright 2025 Tanmay Khomane\n"
                                                 "Licensed under the Apache License, Version 2.0 (the 'License');\n"
                                                 "you may not use this file except in compliance with the License.\n"
                                                 "You may obtain a copy of the License at\n"
                                                 "http://www.apache.org/licenses/LICENSE-2.0\n"
                                                 "Unless required by applicable law or agreed to in writing,\n"
                                                 "software distributed under the\nLicense is distributed on an\n"
                                                 "'AS IS' BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,\n"
                                                 "either express or implied.\n"
                                                 "See the License for the specific language governing permissions and limitations under the License.");
}




void MainWindow::on_actionAbout_Us_triggered()
{
    QMessageBox :: information(this, "About Us", "App Name: Student Data Manager\n"
                                                "Description: This software is designed to manage student data for schools and colleges. "
                                                "It allows administrators to input and organize information such as student names, contact details,"
                                                "grades, and other relevant data.\n\n"
                                                "Developed By: Tanmay Khomane\n"
                                                "Contact: khomanetanmay13@gmail.com\n"
                                                "Version: 1.0.0\n"
                                                "License: Apache 2.0\n");
}


void MainWindow::on_studentTableBtn_clicked()
{
    studentRecordTable *dialog3 = new studentRecordTable(this);
    auto ret = dialog3 -> exec();
}

