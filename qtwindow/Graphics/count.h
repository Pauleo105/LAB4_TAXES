#ifndef COUNT_H
#define COUNT_H

#include <QDialog>
#include "supportui.h"

namespace Ui {
class count;
}

class count : public QDialog
{
    Q_OBJECT

public:
    explicit count(QWidget *parent = nullptr);
    ~count();
    unsigned int getInt();
private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

signals:
    void okclick();

private:
    Ui::count *ui;
    QString priv;
};

#endif // COUNT_H
