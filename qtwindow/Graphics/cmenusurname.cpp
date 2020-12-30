#include "cmenusurname.h"
#include "ui_cmenusurname.h"

cmenusurname::cmenusurname(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmenusurname)
{    
    ui->setupUi(this);
}

cmenusurname::~cmenusurname()
{
    delete ui;
}

void cmenusurname::on_lineEdit_textEdited(const QString &arg1)
{
    str = arg1;
}

void cmenusurname::on_pushButton_clicked()
{
    emit okclick();
}

std::string cmenusurname::getStr() {
    return str.toStdString();
}

void cmenusurname::setDefault(std::string defstr) {
    ui->lineEdit->setText(QString::fromStdString(defstr));
}
