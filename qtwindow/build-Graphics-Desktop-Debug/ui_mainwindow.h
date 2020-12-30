/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *quitbutton;
    QPushButton *addbutton;
    QPushButton *findbutton;
    QPushButton *deletebutton;
    QPushButton *showbutton;
    QPushButton *correctbutton;
    QPushButton *countbutton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 360);
        MainWindow->setMinimumSize(QSize(640, 360));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        quitbutton = new QPushButton(centralWidget);
        quitbutton->setObjectName(QStringLiteral("quitbutton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quitbutton->sizePolicy().hasHeightForWidth());
        quitbutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(quitbutton);

        addbutton = new QPushButton(centralWidget);
        addbutton->setObjectName(QStringLiteral("addbutton"));
        sizePolicy.setHeightForWidth(addbutton->sizePolicy().hasHeightForWidth());
        addbutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(addbutton);

        findbutton = new QPushButton(centralWidget);
        findbutton->setObjectName(QStringLiteral("findbutton"));
        sizePolicy.setHeightForWidth(findbutton->sizePolicy().hasHeightForWidth());
        findbutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(findbutton);

        deletebutton = new QPushButton(centralWidget);
        deletebutton->setObjectName(QStringLiteral("deletebutton"));
        sizePolicy.setHeightForWidth(deletebutton->sizePolicy().hasHeightForWidth());
        deletebutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(deletebutton);

        showbutton = new QPushButton(centralWidget);
        showbutton->setObjectName(QStringLiteral("showbutton"));
        sizePolicy.setHeightForWidth(showbutton->sizePolicy().hasHeightForWidth());
        showbutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(showbutton);

        correctbutton = new QPushButton(centralWidget);
        correctbutton->setObjectName(QStringLiteral("correctbutton"));
        sizePolicy.setHeightForWidth(correctbutton->sizePolicy().hasHeightForWidth());
        correctbutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(correctbutton);

        countbutton = new QPushButton(centralWidget);
        countbutton->setObjectName(QStringLiteral("countbutton"));
        sizePolicy.setHeightForWidth(countbutton->sizePolicy().hasHeightForWidth());
        countbutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(countbutton);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        quitbutton->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        addbutton->setText(QApplication::translate("MainWindow", "Add element", nullptr));
        findbutton->setText(QApplication::translate("MainWindow", "Find element", nullptr));
        deletebutton->setText(QApplication::translate("MainWindow", "Delete element", nullptr));
        showbutton->setText(QApplication::translate("MainWindow", "Show table", nullptr));
        correctbutton->setText(QApplication::translate("MainWindow", "Correct record", nullptr));
        countbutton->setText(QApplication::translate("MainWindow", "Count taxes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
