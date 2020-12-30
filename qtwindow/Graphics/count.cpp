#include "count.h"
#include "ui_count.h"
#include "QMessageBox"

count::count(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::count)
{
    ui->setupUi(this);
}

count::~count()
{
    delete ui;
}

void count::on_lineEdit_textEdited(const QString &arg1)
{
    priv = arg1;
}

void count::on_pushButton_clicked()
{
    int q = qstrtoint(priv);
    if (q == -2) {
        this->close();
        return;
    }
    else if (q == -1) QMessageBox::warning(this, "Error!", "Invalid input!");
    else emit okclick();
}

unsigned int count::getInt() {
    return qstrtoint(priv);
}

