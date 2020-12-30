#include "cmenupost.h"
#include "ui_cmenupost.h"

cmenupost::cmenupost(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmenupost)
{
    ui->setupUi(this);
}

cmenupost::~cmenupost()
{
    delete ui;
}

void cmenupost::on_pushButton_clicked()
{
    emit okclick();
}

void cmenupost::on_lineEdit_textEdited(const QString &arg1)
{
    str = arg1;
}

std::string cmenupost::getStr() {
    return str.toStdString();
}

void cmenupost::setDefault(std::string defstr) {
    ui->lineEdit->setText(QString::fromStdString(defstr));
}
