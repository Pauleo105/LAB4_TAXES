#include "add_budget.h"
#include "ui_add_budget.h"

add_budget::add_budget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_budget)
{
    ui->setupUi(this);
}

add_budget::~add_budget()
{
    delete ui;
}

void add_budget::on_budnameline_2_textEdited(const QString &arg1)
{
    this->name = arg1;
}

void add_budget::on_budsurnameline_textEdited(const QString &arg1)
{
    this->surname = arg1;
}

void add_budget::on_budlastnameline_textEdited(const QString &arg1)
{
    this->lastname = arg1;
}

void add_budget::on_budworkline_textEdited(const QString &arg1)
{
    this->work = arg1;
}

void add_budget::on_budpostline_textEdited(const QString &arg1)
{
    this->post = arg1;
}

void add_budget::setSNL(QString name, QString surname, QString lastname) {
    ui->budnameline_2->setText(name);
    ui->budsurnameline->setText(surname);
    ui->budlastnameline->setText(lastname);
    ui->budnameline_2->setReadOnly(true);
    ui->budsurnameline->setReadOnly(true);
    ui->budlastnameline->setReadOnly(true);
    ui->budworkline->setText("");
    ui->budpostline->setText("");
}

void add_budget::setClear() {
    ui->budnameline_2->setText("");
    ui->budsurnameline->setText("");
    ui->budlastnameline->setText("");
    ui->budnameline_2->setReadOnly(false);
    ui->budsurnameline->setReadOnly(false);
    ui->budlastnameline->setReadOnly(false);
    ui->budworkline->setText("");
    ui->budpostline->setText("");
}

void add_budget::on_budok_clicked()
{
    emit ok_clicked();
}
