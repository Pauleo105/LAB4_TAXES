#include "add_contractnum.h"
#include "ui_add_contractnum.h"
#include "QMessageBox"

add_contractnum::add_contractnum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_contractnum)
{
    ui->setupUi(this);
}

add_contractnum::~add_contractnum()
{
    delete ui;
}

void add_contractnum::on_contractnumline_textEdited(const QString &arg1)
{
    contractnum = arg1;
}

void add_contractnum::on_cnumbutton_clicked()
{
    if (qstrtoint(contractnum) < 0) {
        QMessageBox::warning(this, "Attention", "Invalid input!!!\n Please try again!");
    }
    else emit contractokclicked();
}
