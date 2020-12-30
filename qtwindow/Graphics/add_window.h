#ifndef ADD_WINDOW_H
#define ADD_WINDOW_H

#include <QString>
#include <QDialog>
#include <supportui.h>

namespace Ui {
class add_window;
}

class add_window : public QDialog
{
    Q_OBJECT

private:
    Ui::add_window *ui;
    int type = 0;
    QString privatenum;

public:
    explicit add_window(QWidget *parent = nullptr);
    ~add_window();

    int getType() const {return type;}
    unsigned int getPriv() const {return qstrtoint(privatenum);}

signals:
    void addok_clicked();
    void contractwaited();

private slots:
    void on_okbutton_clicked();

    void on_comboBox_activated(int index);

    void on_lineEdit_textEdited(const QString &arg1);
};

#endif // ADD_WINDOW_H
