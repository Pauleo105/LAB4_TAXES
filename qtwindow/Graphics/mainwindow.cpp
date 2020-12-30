#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "../../tax.h"
#include "../../supportfunc.h"
#include <iostream>
#include <string>

MainWindow::MainWindow(taxes::Table* tabb, QWidget *parent) :
    QMainWindow(parent),
    tab(tabb),
    ui(new Ui::MainWindow)
{
    connect(&ui_add, SIGNAL(addok_clicked()), this, SLOT(add_window_processing()));
    connect(&ui_add, SIGNAL(contractwaited()), this, SLOT(showcontr()));
    connect(&ui_contract, SIGNAL(contractokclicked()), this, SLOT(add_window_processing()));
    connect(&ui_data, SIGNAL(ok_clicked()), this, SLOT(add_window_processing2()));
    connect(&ui_find1, SIGNAL(ok_click()), this, SLOT(afterfind1()));
    connect(&ui_find2, SIGNAL(ok_click()), this, SLOT(afterfind2()));
    connect(&ui_find2, SIGNAL(contract()), this, SLOT(findcontract()));
    connect(&ui_findcontr, SIGNAL(ok_click()), this, SLOT(afterfind2()));
    connect(&ui_delete1, SIGNAL(contract()), this, SLOT(deletecontract()));
    connect(&ui_delete1, SIGNAL(budget()), this, SLOT(afterdelete1()));
    connect(&ui_deletecontr, SIGNAL(ok_click()), this, SLOT(afterdelete1()));
    connect(&ui_correct1, SIGNAL(okclick()), this, SLOT(aftercorrect1()));
    connect(&ui_correct2, SIGNAL(budget()), this, SLOT(aftercorrect2()));
    connect(&ui_correct2, SIGNAL(contract()), this, SLOT(contractcorrect()));
    connect(&ui_correctcontr, SIGNAL(okclick()), this, SLOT(aftercorrect2()));
    connect(&ui_count, SIGNAL(okclick()), this, SLOT(aftercount()));

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quitbutton_clicked()
{
    this->close();
}

void MainWindow::on_countbutton_clicked()
{
    ui_count.show();
}

void MainWindow::on_addbutton_clicked()
{
    ui_add.show();
}

void MainWindow::showcontr()
{
    ui_contract.show();
}

void MainWindow::on_findbutton_clicked()
{
    ui_find1.show();
}

void MainWindow::on_deletebutton_clicked()
{
    ui_delete1.show();
}

void MainWindow::on_showbutton_clicked()
{
    std::stringstream s;
    (*tab).show(s);
    QMessageBox::information(this, "Success!", QString::fromUtf8(s.str().c_str()));
}

void MainWindow::on_correctbutton_clicked()
{
    ui_correct1.show();
}

void MainWindow::add_budgetclose() {
    ui_data.close();
}

void MainWindow::add_window_processing2() {
    ui_data.close();
    std::string sur = (ui_data.getSurname()).toStdString();
    std::string name = (ui_data.getName()).toStdString();
    std::string last = (ui_data.getLastname()).toStdString();
    std::string work = (ui_data.getWork()).toStdString();
    std::string post = (ui_data.getPost()).toStdString();
    if (temptype) {
        taxes::Budget* b = new taxes::Contract(tempcontract, sur, name, last, work, post);
        (*tab).add(b, tempprivate);
    }
    else {
        taxes::Budget* b = new taxes::Budget(sur, name, last, work, post);
        (*tab).add(b, tempprivate);
    }
}

void MainWindow::add_window_processing() {
    ui_add.close();
    ui_contract.close();
    unsigned int contract = 0;
    unsigned int prnu = ui_add.getPriv();
    int ttype = ui_add.getType();
    if (ttype) {
        contract = ui_contract.getContractnum();
    }
    taxes::Budget* ppt = nullptr;
    if (!collisioncheck(*tab, ppt, prnu, contract, ttype)) {
        QMessageBox::warning(this, "Error!", "This element exists!!!\nPlease try again!");
        return;
    }
    if (ppt != nullptr) {
        std::string sor = ppt->getOnlySurname();
        ui_data.setSNL(QString::fromUtf8(ppt->getOnlyName().c_str()), QString::fromUtf8(ppt->getOnlySurname().c_str()), QString::fromUtf8(ppt->getOnlyLastame().c_str()));
    }
    else {
        ui_data.setClear();
    }
    temptype = ttype;
    tempprivate = prnu;
    tempcontract = contract;
    ui_data.show();
}

void MainWindow::afterfind1() {
    ui_find1.close();
    taxes::Budget* ptr;
    unsigned int num = ui_find1.getNum();
    (*tab).find(ptr, num, 0);
    if (ptr == nullptr) {
        QMessageBox::warning(this, "Error!", "Your element is not found!");
        return;
    }
    tempptr = ptr;
    tempprivate = num;
    ui_find2.show();
}

void MainWindow::findcontract() {
    ui_findcontr.show();
}

void MainWindow::afterfind2() {
    ui_find2.close();
    ui_findcontr.close();
    temptype = ui_find2.getType();
    tempcontract = (ui_find2.getType()) ? (ui_findcontr.getCon()) : 0;
    if ((*tab).find(tempptr, tempprivate, tempcontract)) {
        std::stringstream s;
        s << *tempptr;
        QMessageBox::information(this, "Success!", QString::fromUtf8(s.str().c_str()));
    }
    else QMessageBox::warning(this, "Error!", "Your element is not found!");
}

void MainWindow::afterdelete1() {
    ui_delete1.close();
    ui_deletecontr.close();
    temptype = ui_delete1.getType();
    tempprivate = ui_delete1.getPrivate();
    tempcontract = temptype ? ui_deletecontr.getContract() : 0;
    if (!(*tab).ddelete(tempprivate, tempcontract)) QMessageBox::warning(this, "Error!", "Your element is not found!");
    else QMessageBox::information(this, "Info", "Deleted successfully!");
}

void MainWindow::deletecontract() {
    ui_deletecontr.show();
}

void MainWindow::aftercorrect1() {
    ui_correct1.close();
    taxes::Budget* ptr;
    unsigned int num = ui_correct1.getNum();
    (*tab).find(ptr, num, 0);
    if (ptr == nullptr) {
        QMessageBox::warning(this, "Error!", "Your element is not found!");
        return;
    }
    tempptr = ptr;
    tempprivate = num;
    ui_correct2.show();
}

void MainWindow::contractcorrect() {
    ui_correctcontr.show();
}

void MainWindow::aftercorrect2() {
    ui_correct2.close();
    ui_correctcontr.close();
    temptype = ui_correct2.getType();
    tempcontract = (ui_correct2.getType()) ? (ui_correctcontr.getContract()) : 0;
    if ((*tab).find(tempptr, tempprivate, tempcontract)) {
        ui_correctmenu.setPtr(tempptr);
        if (temptype) ui_correctmenu.setContract();
        else ui_correctmenu.setBudget();
        ui_correctmenu.setWindowTitle("Record correction");
        ui_correctmenu.showMaximized();
    }
    else QMessageBox::warning(this, "Error!", "Your element is not found!");
}

void MainWindow::aftercount() {
    ui_count.close();
    unsigned int fin = (*tab).counttax(ui_count.getInt());
    std::stringstream s1, s2;
    s1 << ui_count.getInt();
    s2 << fin;
    QMessageBox::information(this, "Success!", "Summary gain of person with id number "+QString::fromStdString(s1.str())+" is "+QString::fromStdString(s2.str()));
}
