#ifndef CMENULASTNAME_H
#define CMENULASTNAME_H

#include <QDialog>

namespace Ui {
class cmenulastname;
}

class cmenulastname : public QDialog
{
    Q_OBJECT

public:
    explicit cmenulastname(QWidget *parent = nullptr);
    ~cmenulastname();
    std::string getStr();
    void setDefault(std::string);

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

signals:
    void okclick();

private:
    Ui::cmenulastname *ui;
    QString str;
};

#endif // CMENULASTNAME_H
