#include "deletecontr.h"
#include "ui_deletecontr.h"

deletecontr::deletecontr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletecontr)
{
    ui->setupUi(this);
}

deletecontr::~deletecontr()
{
    delete ui;
}

void deletecontr::on_pushButton_clicked()
{
    emit ok_click();
}

void deletecontr::on_lineEdit_textEdited(const QString &arg1)
{
    contract = arg1;
}
