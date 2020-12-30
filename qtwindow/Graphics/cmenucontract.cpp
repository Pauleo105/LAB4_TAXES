#include "cmenucontract.h"
#include "ui_cmenucontract.h"
#include "supportui.h"
#include <sstream>
#include <QMessageBox>

cmenucontract::cmenucontract(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmenucontract)
{
    ui->setupUi(this);
}

cmenucontract::~cmenucontract()
{
    delete ui;
}

void cmenucontract::on_pushButton_clicked()
{
    if (qstrtoint(contract) == -2) {
        this->close();
        return;
    }
    else if (qstrtoint(contract) == -1) {
        QMessageBox::warning(this, "Error!", "Invalid input!");
    }
    else emit okclick();
}

void cmenucontract::on_lineEdit_textEdited(const QString &arg1)
{
    contract = arg1;
}

void cmenucontract::setDefault(unsigned int num) {
    std::stringstream ss;
    ss << num;
    ui->lineEdit->setText(QString::fromStdString(ss.str()));
}
