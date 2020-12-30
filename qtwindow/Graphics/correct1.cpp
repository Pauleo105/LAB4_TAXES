#include "correct1.h"
#include "ui_correct1.h"
#include "supportui.h"
#include "QMessageBox"

correct1::correct1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::correct1)
{
    ui->setupUi(this);
}

correct1::~correct1()
{
    delete ui;
}

void correct1::on_pushButton_clicked()
{
    if (qstrtoint(privnum) < 0) {
        QMessageBox::warning(this, "Attention", "Invalid input!!!\n Please try again!");
    }
    else {
        emit okclick();
    }
}

void correct1::on_lineEdit_textEdited(const QString &arg1)
{
    privnum = arg1;
}
