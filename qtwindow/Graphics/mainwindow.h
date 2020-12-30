#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "add_window.h"
#include "/home/paulo/corc++/lab4/tax.h"
#include "add_contractnum.h"
#include "add_budget.h"
#include "find_main.h"
#include "find2.h"
#include "findcontr.h"
#include "delete1.h"
#include "deletecontr.h"
#include "correct1.h"
#include "correct2.h"
#include "correctcontract.h"
#include "correctmenu.h"
#include "count.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(taxes::Table* tabb, QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_quitbutton_clicked();

    void on_countbutton_clicked();

    void on_addbutton_clicked();

    void on_findbutton_clicked();

    void on_deletebutton_clicked();

    void on_showbutton_clicked();

    void on_correctbutton_clicked();

    void showcontr();

    void add_window_processing2();

    void add_budgetclose();

    void add_window_processing();

    void afterfind1();

    void afterfind2();

    void findcontract();

    void afterdelete1();

    void deletecontract();

    void aftercorrect1();

    void contractcorrect();

    void aftercorrect2();

    void aftercount();

private:
    taxes::Table* tab;
    Ui::MainWindow *ui;
    add_window ui_add;
    add_contractnum ui_contract;
    add_budget ui_data;
    find_main ui_find1;
    find2 ui_find2;
    findcontr ui_findcontr;
    delete1 ui_delete1;
    deletecontr ui_deletecontr;
    correct1 ui_correct1;
    correct2 ui_correct2;
    correctcontract ui_correctcontr;
    correctmenu ui_correctmenu;
    count ui_count;
    int temptype;
    unsigned int tempcontract;
    unsigned int tempprivate;
    taxes::Budget* tempptr;
};

#endif // MAINWINDOW_H
