#ifndef CORRECTCONTRACT_H
#define CORRECTCONTRACT_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class correctcontract;
}

class correctcontract : public QDialog
{
    Q_OBJECT

public:
    explicit correctcontract(QWidget *parent = nullptr);
    ~correctcontract();
    unsigned int getContract() {return qstrtoint(contract);}

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

signals:
    void okclick();

private:
    Ui::correctcontract *ui;
    QString contract;
};

#endif // CORRECTCONTRACT_H
