#ifndef STUDENTRECORDTABLE_H
#define STUDENTRECORDTABLE_H

#include <QDialog>

namespace Ui {
class studentRecordTable;
}

class studentRecordTable : public QDialog
{
    Q_OBJECT

public:
    explicit studentRecordTable(QWidget *parent = nullptr);
    ~studentRecordTable();

private slots:
    void on_showBtn_clicked();

private:
    Ui::studentRecordTable *ui;
};

#endif // STUDENTRECORDTABLE_H
