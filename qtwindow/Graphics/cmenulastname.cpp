#include "cmenulastname.h"
#include "ui_cmenulastname.h"

cmenulastname::cmenulastname(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmenulastname)
{
    ui->setupUi(this);
}

cmenulastname::~cmenulastname()
{
    delete ui;
}

void cmenulastname::on_lineEdit_textEdited(const QString &arg1)
{
    str = arg1;
}

void cmenulastname::on_pushButton_clicked()
{
    emit okclick();
}

std::string cmenulastname::getStr() {
    return str.toStdString();
}

void cmenulastname::setDefault(std::string defstr) {
    ui->lineEdit->setText(QString::fromStdString(defstr));
}
