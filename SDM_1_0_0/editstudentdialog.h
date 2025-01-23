#ifndef EDITSTUDENTDIALOG_H
#define EDITSTUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class editStudentDialog;
}

class editStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit editStudentDialog(QWidget *parent = nullptr);
    ~editStudentDialog();

private slots:
    void on_okBtn_clicked();

    void on_saveBtn_clicked();

private:
    Ui::editStudentDialog *ui;
};

#endif // EDITSTUDENTDIALOG_H
