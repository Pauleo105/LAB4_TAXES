#ifndef CMENUWORK_H
#define CMENUWORK_H

#include <QDialog>

namespace Ui {
class cmenuwork;
}

class cmenuwork : public QDialog
{
    Q_OBJECT

public:
    explicit cmenuwork(QWidget *parent = nullptr);
    ~cmenuwork();
    std::string getStr();
    void setDefault(std::string);

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

signals:
    void okclick();
private:
    Ui::cmenuwork *ui;
    QString str;
};

#endif // CMENUWORK_H
