#ifndef CMENUSURNAME_H
#define CMENUSURNAME_H

#include <QDialog>

namespace Ui {
class cmenusurname;
}

class cmenusurname : public QDialog
{
    Q_OBJECT

public:
    explicit cmenusurname(QWidget *parent = nullptr);
    ~cmenusurname();
    std::string getStr();
    void setDefault(std::string);

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

signals:
    void okclick();

private:
    Ui::cmenusurname *ui;
    QString str;
};

#endif // CMENUSURNAME_H
