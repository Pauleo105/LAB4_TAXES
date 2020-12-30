#include "cmenuname.h"
#include "ui_cmenuname.h"

cmenuname::cmenuname(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmenuname)
{
    ui->setupUi(this);
}

cmenuname::~cmenuname()
{
    delete ui;
}

void cmenuname::on_lineEdit_textEdited(const QString &arg1)
{
    str = arg1;
}

void cmenuname::on_pushButton_clicked()
{
    emit okclick();
}

std::string cmenuname::getStr() {
    return str.toStdString();
}

void cmenuname::setDefault(std::string defstr) {
    ui->lineEdit->setText(QString::fromStdString(defstr));
}
