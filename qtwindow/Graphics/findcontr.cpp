#include "findcontr.h"
#include "ui_findcontr.h"

findcontr::findcontr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::findcontr)
{
    ui->setupUi(this);
}

findcontr::~findcontr()
{
    delete ui;
}

void findcontr::on_lineEdit_textEdited(const QString &arg1)
{
    contract = arg1;
}

void findcontr::on_pushButton_clicked()
{
    emit ok_click();
}
