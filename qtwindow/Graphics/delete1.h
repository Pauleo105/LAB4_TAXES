#ifndef DELETE1_H
#define DELETE1_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class delete1;
}

class delete1 : public QDialog
{
    Q_OBJECT

public:
    explicit delete1(QWidget *parent = nullptr);
    ~delete1();
    int getType() {return type;}
    unsigned int getPrivate() {return qstrtoint(privnum);}

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

signals:
    void budget();
    void contract();

private:
    Ui::delete1 *ui;
    QString privnum;
    int type = 0;
};

#endif // DELETE1_H
