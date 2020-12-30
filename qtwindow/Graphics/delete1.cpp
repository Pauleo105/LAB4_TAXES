#include "delete1.h"
#include "ui_delete1.h"
#include "supportui.h"
#include "QMessageBox"

delete1::delete1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete1)
{
    ui->setupUi(this);
}

delete1::~delete1()
{
    delete ui;
}

void delete1::on_lineEdit_textEdited(const QString &arg1)
{
    privnum = arg1;
}

void delete1::on_pushButton_clicked()
{
    if (qstrtoint(privnum) < 0) {
        QMessageBox::warning(this, "Attention", "Invalid input!!!\n Please try again!");
    }
    else if (type == 0) {
        emit budget();
    }
    else {
        emit contract();
    }
}

void delete1::on_comboBox_activated(int index)
{
    type = index;
}
