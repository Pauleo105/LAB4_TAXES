#ifndef CORRECT1_H
#define CORRECT1_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class correct1;
}

class correct1 : public QDialog
{
    Q_OBJECT

public:
    explicit correct1(QWidget *parent = nullptr);
    ~correct1();
    unsigned int getNum() {return qstrtoint(privnum);}

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

signals:
    void okclick();

private:
    Ui::correct1 *ui;
    QString privnum;
};

#endif // CORRECT1_H
