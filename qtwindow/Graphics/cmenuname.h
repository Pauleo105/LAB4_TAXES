#ifndef CMENUNAME_H
#define CMENUNAME_H

#include <QDialog>

namespace Ui {
class cmenuname;
}

class cmenuname : public QDialog
{
    Q_OBJECT

public:
    explicit cmenuname(QWidget *parent = nullptr);
    ~cmenuname();
    std::string getStr();
    void setDefault(std::string);

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

signals:
    void okclick();

private:
    Ui::cmenuname *ui;
    QString str;
};

#endif // CMENUNAME_H
