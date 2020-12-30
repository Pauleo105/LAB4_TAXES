#include "correctcontract.h"
#include "ui_correctcontract.h"
#include "supportui.h"
#include "QMessageBox"

correctcontract::correctcontract(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::correctcontract)
{
    ui->setupUi(this);
}

correctcontract::~correctcontract()
{
    delete ui;
}

void correctcontract::on_lineEdit_textEdited(const QString &arg1)
{
    contract = arg1;
}

void correctcontract::on_pushButton_clicked()
{
    if (qstrtoint(contract) < 0) {
        QMessageBox::warning(this, "Attention", "Invalid input!!!\n Please try again!");
    }
    else {
        emit okclick();
    }
}
