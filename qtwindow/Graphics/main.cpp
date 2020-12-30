#include "mainwindow.h"
#include "form.h"
#include "/home/paulo/corc++/lab4/tax.h"
#include "/home/paulo/corc++/lab4/dialog.h"
#include "/home/paulo/corc++/lab4/supportfunc.h"
#include "/home/paulo/corc++/lab4/dialogcor.h"
#include <QApplication>
#include <QRect>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    taxes::Table tab;
    MainWindow w(&tab);
    w.setWindowTitle("Main menu");
    w.showMaximized();
    return a.exec();
}
