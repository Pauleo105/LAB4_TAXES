/********************************************************************************
** Form generated from reading UI file 'cmenusurname.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENUSURNAME_H
#define UI_CMENUSURNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cmenusurname
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *cmenusurname)
    {
        if (cmenusurname->objectName().isEmpty())
            cmenusurname->setObjectName(QStringLiteral("cmenusurname"));
        cmenusurname->resize(400, 300);
        pushButton = new QPushButton(cmenusurname);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 230, 88, 27));
        widget = new QWidget(cmenusurname);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 140, 200, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(cmenusurname);

        QMetaObject::connectSlotsByName(cmenusurname);
    } // setupUi

    void retranslateUi(QDialog *cmenusurname)
    {
        cmenusurname->setWindowTitle(QApplication::translate("cmenusurname", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("cmenusurname", "OK", nullptr));
        label->setText(QApplication::translate("cmenusurname", "New surname", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmenusurname: public Ui_cmenusurname {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENUSURNAME_H
