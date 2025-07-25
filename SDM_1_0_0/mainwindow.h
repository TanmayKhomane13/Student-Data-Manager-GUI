#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addNewBtn_clicked();

    void on_editStuBtn_clicked();

    void on_actionQuit_triggered();

    void on_actionAbout_Student_Data_Manager_triggered();

    void on_actionAbout_Us_triggered();

    void on_studentTableBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
