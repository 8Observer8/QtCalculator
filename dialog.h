#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_btnAdd_clicked();

    void on_btnSub_clicked();

    void on_btnMul_clicked();

    void on_btnDiv_clicked();

public:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
