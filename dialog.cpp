#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include "calculator.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnAdd_clicked()
{
    Calculator calc;
    double a = ui->leA->text().toDouble();
    double b = ui->leB->text().toDouble();
    double result = calc.add(a, b);
    ui->leResult->setText(QString::number(result));
}

void Dialog::on_btnSub_clicked()
{
    Calculator calc;
    double a = ui->leA->text().toDouble();
    double b = ui->leB->text().toDouble();
    double result = calc.sub(a, b);
    ui->leResult->setText(QString::number(result));
}

void Dialog::on_btnMul_clicked()
{
    Calculator calc;
    double a = ui->leA->text().toDouble();
    double b = ui->leB->text().toDouble();
    double result = calc.mul(a, b);
    ui->leResult->setText(QString::number(result));
}

void Dialog::on_btnDiv_clicked()
{
    Calculator calc;
    double a = ui->leA->text().toDouble();
    double b = ui->leB->text().toDouble();
    double result = calc.div(a, b);
    ui->leResult->setText(QString::number(result));
}
