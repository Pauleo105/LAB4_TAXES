#include "correctmenu.h"
#include "ui_correctmenu.h"
#include "QMessageBox"

correctmenu::correctmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::correctmenu)
{
    connect(&ui_surname, SIGNAL(okclick()), this, SLOT(surname()));
    connect(&ui_name, SIGNAL(okclick()), this, SLOT(name()));
    connect(&ui_lastname, SIGNAL(okclick()), this, SLOT(lastname()));
    connect(&ui_work, SIGNAL(okclick()), this, SLOT(work()));
    connect(&ui_post, SIGNAL(okclick()), this, SLOT(post()));
    connect(&ui_payment, SIGNAL(okclick()), this, SLOT(payment()));
    connect(&ui_contract, SIGNAL(okclick()), this, SLOT(contract()));

    ui->setupUi(this);
}

correctmenu::~correctmenu()
{
    delete ui;
}

void correctmenu::setBudget() {
    ui->contract->hide();
}

void correctmenu::setContract() {
    ui->contract->show();
}

void correctmenu::on_surname_clicked()
{
    ui_surname.setDefault(ptr->getOnlySurname());
    ui_surname.show();
}

void correctmenu::on_name_clicked()
{
    ui_name.setDefault(ptr->getOnlyName());
    ui_name.show();
}

void correctmenu::on_lastname_clicked()
{
    ui_lastname.setDefault(ptr->getOnlyLastame());
    ui_lastname.show();
}

void correctmenu::on_work_clicked()
{
    ui_work.setDefault(ptr->getWork());
    ui_work.show();
}

void correctmenu::on_post_clicked()
{
    ui_post.setDefault(ptr->getPost());
    ui_post.show();
}

void correctmenu::on_payment_clicked()
{

    ui_payment.show();
}

void correctmenu::on_contract_clicked()
{
    ui_contract.setDefault(dynamic_cast<taxes::Contract*>(ptr)->getContractNum());
    ui_contract.show();
}

void correctmenu::on_pushButton_clicked()
{
    this->close();
}

void correctmenu::surname() {
    ui_surname.close();
    std::string surname = ui_surname.getStr();
    if (surname != "") ptr->setSurname(surname);
    else return;
}

void correctmenu::name() {
    ui_name.close();
    std::string name = ui_name.getStr();
    if (name != "") ptr->setName(name);
    else return;
}

void correctmenu::lastname() {
    ui_lastname.close();
    std::string lname = ui_lastname.getStr();
    if (lname != "") ptr->setLastname(lname);
    else return;
}

void correctmenu::work() {
    ui_work.close();
    std::string work = ui_work.getStr();
    if (work != "") ptr->setWorkplace(work);
    else return;
}

void correctmenu::post() {
    ui_post.close();
    std::string post = ui_post.getStr();
    if (post != "") ptr->setPost(post);
    else return;
}

void correctmenu::payment() {
    ui_payment.close();
    if (ui_payment.getDay() < 0 || ui_payment.getMonth() < 0) {
        QMessageBox::warning(this, "Error!", "Invalid input!");
        return;
    }
    taxes::Payment p(ui_payment.getDay(), ui_payment.getMonth(), ui_payment.getPayment(), ui_payment.getMoney());
    ptr->addPayment(p);
}

void correctmenu::contract() {
    ui_contract.close();
    unsigned int contr = ui_contract.getContract();
    if (contr != 1) dynamic_cast<taxes::Contract*>(ptr)->setNum(ui_contract.getContract());
    else return;
}


