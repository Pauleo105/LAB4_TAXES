#ifndef FINDCONTR_H
#define FINDCONTR_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class findcontr;
}

class findcontr : public QDialog
{
    Q_OBJECT

public:
    explicit findcontr(QWidget *parent = nullptr);
    ~findcontr();
    unsigned int getCon() {return qstrtoint(contract);}

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

signals:
    void ok_click();

private:
    Ui::findcontr *ui;
    QString contract;
};

#endif // FINDCONTR_H
