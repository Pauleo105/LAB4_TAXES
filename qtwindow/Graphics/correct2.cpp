#include "correct2.h"
#include "ui_correct2.h"

correct2::correct2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::correct2)
{
    ui->setupUi(this);
}

correct2::~correct2()
{
    delete ui;
}

void correct2::on_comboBox_activated(int index)
{
    type = index;
}

void correct2::on_pushButton_clicked()
{
    if (type == 0) {
        emit budget();
    }
    else {
        emit contract();
    }
}
