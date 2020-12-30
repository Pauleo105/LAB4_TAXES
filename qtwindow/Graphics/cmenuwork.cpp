#include "cmenuwork.h"
#include "ui_cmenuwork.h"

cmenuwork::cmenuwork(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmenuwork)
{
    ui->setupUi(this);
}

cmenuwork::~cmenuwork()
{
    delete ui;
}

void cmenuwork::on_lineEdit_textEdited(const QString &arg1)
{
    str = arg1;
}

void cmenuwork::on_pushButton_clicked()
{
    emit okclick();
}

std::string cmenuwork::getStr() {
    return str.toStdString();
}

void cmenuwork::setDefault(std::string defstr) {
    ui->lineEdit->setText(QString::fromStdString(defstr));
}
