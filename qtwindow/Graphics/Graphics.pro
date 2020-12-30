#-------------------------------------------------
#
# Project created by QtCreator 2020-12-18T04:36:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Graphics
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        /home/paulo/corc++/lab4/tax.cpp \
        /home/paulo/corc++/lab4/supportfunc.cpp \
        /home/paulo/corc++/lab4/dialog.cpp \
        /home/paulo/corc++/lab4/dialogcor.cpp \
        main.cpp \
        mainwindow.cpp \
    add_window.cpp \
    supportui.cpp \
    add_budget.cpp \
    add_contractnum.cpp \
    find_main.cpp \
    find2.cpp \
    findcontr.cpp \
    delete1.cpp \
    deletecontr.cpp \
    correct1.cpp \
    correct2.cpp \
    correctcontract.cpp \
    correctmenu.cpp \
    cmenusurname.cpp \
    cmenuname.cpp \
    cmenulastname.cpp \
    cmenuwork.cpp \
    cmenupost.cpp \
    cmenupayment.cpp \
    cmenucontract.cpp \
    count.cpp

HEADERS += \
        mainwindow.h \
    add_window.h \
    supportui.h \
    add_budget.h \
    add_contractnum.h \
    find_main.h \
    find2.h \
    findcontr.h \
    delete1.h \
    deletecontr.h \
    correct1.h \
    correct2.h \
    correctcontract.h \
    correctmenu.h \
    cmenusurname.h \
    cmenuname.h \
    cmenulastname.h \
    cmenuwork.h \
    cmenupost.h \
    cmenupayment.h \
    cmenucontract.h \
    count.h

FORMS += \
        mainwindow.ui \
    add_window.ui \
    add_budget.ui \
    add_contractnum.ui \
    find_main.ui \
    find2.ui \
    findcontr.ui \
    delete1.ui \
    deletecontr.ui \
    correct1.ui \
    correct2.ui \
    correctcontract.ui \
    correctmenu.ui \
    cmenusurname.ui \
    cmenuname.ui \
    cmenulastname.ui \
    cmenuwork.ui \
    cmenupost.ui \
    cmenupayment.ui \
    cmenucontract.ui \
    count.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
