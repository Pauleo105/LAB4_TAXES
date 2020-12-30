#include "find_main.h"
#include "ui_find_main.h"
#include "supportui.h"
#include "QMessageBox"

find_main::find_main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::find_main)
{
    ui->setupUi(this);
}

find_main::~find_main()
{
    delete ui;
}

void find_main::on_pushButton_clicked()
{
    if (qstrtoint(privatenum) < 0) {
        QMessageBox::warning(this, "Attention", "Invalid input!!!\n Please try again!");
    }
    else {
        emit ok_click();
    }
}

void find_main::on_lineEdit_textEdited(const QString &arg1)
{
    privatenum = arg1;
}
