#ifndef CMENUCONTRACT_H
#define CMENUCONTRACT_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class cmenucontract;
}

class cmenucontract : public QDialog
{
    Q_OBJECT

public:
    explicit cmenucontract(QWidget *parent = nullptr);
    ~cmenucontract();
    unsigned int getContract() {return qstrtoint(contract);}
    void setDefault(unsigned int);

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

signals:
    void okclick();

private:
    Ui::cmenucontract *ui;
    QString contract;
};

#endif // CMENUCONTRACT_H
