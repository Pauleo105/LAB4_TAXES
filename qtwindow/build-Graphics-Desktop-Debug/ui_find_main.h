/********************************************************************************
** Form generated from reading UI file 'find_main.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_MAIN_H
#define UI_FIND_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_find_main
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *find_main)
    {
        if (find_main->objectName().isEmpty())
            find_main->setObjectName(QStringLiteral("find_main"));
        find_main->resize(400, 300);
        pushButton = new QPushButton(find_main);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 200, 88, 27));
        horizontalLayoutWidget = new QWidget(find_main);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 110, 231, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(find_main);

        QMetaObject::connectSlotsByName(find_main);
    } // setupUi

    void retranslateUi(QDialog *find_main)
    {
        find_main->setWindowTitle(QApplication::translate("find_main", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("find_main", "OK", nullptr));
        label->setText(QApplication::translate("find_main", "Private number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class find_main: public Ui_find_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_MAIN_H
