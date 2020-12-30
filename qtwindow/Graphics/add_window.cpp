#include "add_window.h"
#include "ui_add_window.h"
#include "supportui.h"
#include "QMessageBox"

add_window::add_window(QWidget *parent) : QDialog(parent), ui(new Ui::add_window)
{
    ui->setupUi(this);
}

add_window::~add_window()
{
    delete ui;
}

void add_window::on_okbutton_clicked()
{
    if (qstrtoint(privatenum) < 0) {
        QMessageBox::warning(this, "Attention", "Invalid input!!!\n Please try again!");
    }
    else if (type == 0) {
        emit addok_clicked();
    }
    else emit contractwaited();
}

void add_window::on_comboBox_activated(int index)
{
    type = index;
}

void add_window::on_lineEdit_textEdited(const QString &arg1)
{
    privatenum = arg1;
}
