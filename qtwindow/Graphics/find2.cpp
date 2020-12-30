#include "find2.h"
#include "ui_find2.h"

find2::find2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::find2)
{
    ui->setupUi(this);
}

find2::~find2()
{
    delete ui;
}

void find2::on_comboBox_activated(int index)
{
    ind = index;
}

void find2::on_pushButton_clicked()
{
    if (ind == 0) {
        emit ok_click();
    }
    else {
        emit contract();
    }
}
