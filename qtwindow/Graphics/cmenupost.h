#ifndef CMENUPOST_H
#define CMENUPOST_H

#include <QDialog>

namespace Ui {
class cmenupost;
}

class cmenupost : public QDialog
{
    Q_OBJECT

public:
    explicit cmenupost(QWidget *parent = nullptr);
    ~cmenupost();
    std::string getStr();
    void setDefault(std::string);

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

signals:
    void okclick();
private:
    Ui::cmenupost *ui;
    QString str;
};

#endif // CMENUPOST_H
