#ifndef FIND_MAIN_H
#define FIND_MAIN_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class find_main;
}

class find_main : public QDialog
{
    Q_OBJECT

public:
    explicit find_main(QWidget *parent = nullptr);
    ~find_main();
    unsigned int getNum() {return qstrtoint(privatenum);}

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

signals:
    void ok_click();

private:
    Ui::find_main *ui;
    QString privatenum;
};

#endif // FIND_MAIN_H
