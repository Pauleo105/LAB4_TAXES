#ifndef FIND2_H
#define FIND2_H

#include <QDialog>

namespace Ui {
class find2;
}

class find2 : public QDialog
{
    Q_OBJECT

public:
    explicit find2(QWidget *parent = nullptr);
    ~find2();
    int getType() {return ind;}

private slots:
    void on_comboBox_activated(int index);

    void on_pushButton_clicked();

signals:
    void ok_click();
    void contract();

private:
    Ui::find2 *ui;
    int ind = 0;
};

#endif // FIND2_H
