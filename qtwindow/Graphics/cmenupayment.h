#ifndef CMENUPAYMENT_H
#define CMENUPAYMENT_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class cmenupayment;
}

class cmenupayment : public QDialog
{
    Q_OBJECT

public:
    explicit cmenupayment(QWidget *parent = nullptr);
    ~cmenupayment();
    int getDay();
    int getMonth();
    std::string getPayment() {return payment.toStdString();}
    int getMoney() {return qstrtoint(money);}

private slots:
    void on_pushButton_clicked();

    void on_payment_textEdited(const QString &arg1);

    void on_money_textEdited(const QString &arg1);

    void on_comboBox_activated(int index);

    void on_day_textEdited(const QString &arg1);

signals:
    void okclick();

private:
    Ui::cmenupayment *ui;
    QString payment;
    QString money;
    QString day;
    int month = 0;
};

#endif // CMENUPAYMENT_H
