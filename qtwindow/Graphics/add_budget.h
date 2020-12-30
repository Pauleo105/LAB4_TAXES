#ifndef ADD_BUDGET_H
#define ADD_BUDGET_H

#include <QDialog>

namespace Ui {
class add_budget;
}

class add_budget : public QDialog
{
    Q_OBJECT

public:
    explicit add_budget(QWidget *parent = nullptr);
    ~add_budget();
    QString getName() const {return name;}
    QString getSurname() const {return surname;}
    QString getLastname() const {return lastname;}
    QString getWork() const {return work;}
    QString getPost() const {return post;}
    void setSNL(QString, QString, QString);
    void setClear();

private slots:
    void on_budnameline_2_textEdited(const QString &arg1);

    void on_budsurnameline_textEdited(const QString &arg1);

    void on_budlastnameline_textEdited(const QString &arg1);

    void on_budworkline_textEdited(const QString &arg1);

    void on_budpostline_textEdited(const QString &arg1);

    void on_budok_clicked();

signals:
    void ok_clicked();

private:
    Ui::add_budget *ui;
    QString surname;
    QString name;
    QString lastname;
    QString work;
    QString post;
};

#endif // ADD_BUDGET_H
