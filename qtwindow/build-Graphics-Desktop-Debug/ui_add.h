/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *privateline;
    QLineEdit *typeline;
    QPushButton *okbutton;

    void setupUi(QDialog *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName(QStringLiteral("add"));
        add->resize(400, 300);
        label = new QLabel(add);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 111, 19));
        label_2 = new QLabel(add);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 141, 19));
        privateline = new QLineEdit(add);
        privateline->setObjectName(QStringLiteral("privateline"));
        privateline->setGeometry(QRect(150, 70, 113, 27));
        typeline = new QLineEdit(add);
        typeline->setObjectName(QStringLiteral("typeline"));
        typeline->setGeometry(QRect(150, 110, 113, 27));
        okbutton = new QPushButton(add);
        okbutton->setObjectName(QStringLiteral("okbutton"));
        okbutton->setGeometry(QRect(160, 150, 88, 27));

        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QDialog *add)
    {
        add->setWindowTitle(QApplication::translate("add", "Dialog", nullptr));
        label->setText(QApplication::translate("add", "Private number:", nullptr));
        label_2->setText(QApplication::translate("add", "Type of the worker:", nullptr));
        okbutton->setText(QApplication::translate("add", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
