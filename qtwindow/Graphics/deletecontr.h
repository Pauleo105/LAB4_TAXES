#ifndef DELETECONTR_H
#define DELETECONTR_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class deletecontr;
}

class deletecontr : public QDialog
{
    Q_OBJECT

public:
    explicit deletecontr(QWidget *parent = nullptr);
    ~deletecontr();
    unsigned int getContract() {return qstrtoint(contract);}

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

signals:
    void ok_click();

private:
    Ui::deletecontr *ui;
    QString contract;
};

#endif // DELETECONTR_H
