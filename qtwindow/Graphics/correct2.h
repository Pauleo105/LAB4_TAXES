#ifndef CORRECT2_H
#define CORRECT2_H

#include <QDialog>

namespace Ui {
class correct2;
}

class correct2 : public QDialog
{
    Q_OBJECT

public:
    explicit correct2(QWidget *parent = nullptr);
    ~correct2();
    int getType() {return type;}

private slots:
    void on_comboBox_activated(int index);

    void on_pushButton_clicked();

signals:
    void budget();
    void contract();

private:
    Ui::correct2 *ui;
    int type = 0;
};

#endif // CORRECT2_H
