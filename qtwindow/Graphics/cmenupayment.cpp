#include "cmenupayment.h"
#include "ui_cmenupayment.h"

cmenupayment::cmenupayment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmenupayment)
{
    ui->setupUi(this);
}

cmenupayment::~cmenupayment()
{
    delete ui;
}

void cmenupayment::on_pushButton_clicked()
{
    emit okclick();
}

void cmenupayment::on_payment_textEdited(const QString &arg1)
{
    payment = arg1;
}

void cmenupayment::on_money_textEdited(const QString &arg1)
{
    money = arg1;
}

void cmenupayment::on_comboBox_activated(int index)
{
    month = index;
}

void cmenupayment::on_day_textEdited(const QString &arg1)
{
    day = arg1;
}

int cmenupayment::getDay() {
    int d = qstrtoint(day);
    if (d > 31 || d <= 0) {
        return -1;
    }
    else {
        return qstrtoint(day);
    }
}

int cmenupayment::getMonth() {
    if (month > 11 || month < 0) return -1;
    else return month;
}
