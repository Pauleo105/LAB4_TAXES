#ifndef ADD_CONTRACTNUM_H
#define ADD_CONTRACTNUM_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class add_contractnum;
}

class add_contractnum : public QDialog
{
    Q_OBJECT

private:
    Ui::add_contractnum *ui;
    QString contractnum;

public:
    explicit add_contractnum(QWidget *parent = nullptr);
    ~add_contractnum();

    int getContractnum() const {return qstrtoint(contractnum);}

private slots:
    void on_contractnumline_textEdited(const QString &arg1);

    void on_cnumbutton_clicked();

signals:
    void contractokclicked();


};

#endif // ADD_CONTRACTNUM_H
