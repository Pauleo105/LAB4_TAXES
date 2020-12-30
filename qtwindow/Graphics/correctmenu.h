#ifndef CORRECTMENU_H
#define CORRECTMENU_H

#include <QMainWindow>
#include "../../tax.h"
#include "cmenusurname.h"
#include "cmenuname.h"
#include "cmenulastname.h"
#include "cmenuwork.h"
#include "cmenupost.h"
#include "cmenupayment.h"
#include "cmenucontract.h"

namespace Ui {
class correctmenu;
}

class correctmenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit correctmenu(QWidget *parent = nullptr);
    ~correctmenu();
    void setPtr(taxes::Budget*& ftp) {ptr=ftp;}
    void setBudget();
    void setContract();

private slots:
    void on_surname_clicked();

    void on_name_clicked();

    void on_lastname_clicked();

    void on_work_clicked();

    void on_post_clicked();

    void on_payment_clicked();

    void on_contract_clicked();

    void surname();

    void name();

    void lastname();

    void work();

    void post();

    void payment();

    void contract();

    void on_pushButton_clicked();

private:
    Ui::correctmenu *ui;
    taxes::Budget* ptr;
    cmenusurname ui_surname;
    cmenuname ui_name;
    cmenulastname ui_lastname;
    cmenuwork ui_work;
    cmenupost ui_post;
    cmenupayment ui_payment;
    cmenucontract ui_contract;
};

#endif // CORRECTMENU_H
