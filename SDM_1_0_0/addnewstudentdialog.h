#ifndef ADDNEWSTUDENTDIALOG_H
#define ADDNEWSTUDENTDIALOG_H

#include <QDialog>

#include "student.h"

namespace Ui {
class addNewStudentDialog;
}

class addNewStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addNewStudentDialog(QWidget *parent = nullptr);
    ~addNewStudentDialog();

private slots:
    void on_nextBtn1_clicked();

    void on_nextBtn2_clicked();

    void on_saveBtn_clicked();

private:
    Ui::addNewStudentDialog *ui;
    Student student;
};

#endif // ADDNEWSTUDENTDIALOG_H
