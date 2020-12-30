/********************************************************************************
** Form generated from reading UI file 'add_window.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_WINDOW_H
#define UI_ADD_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_window
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *okbutton;

    void setupUi(QDialog *add_window)
    {
        if (add_window->objectName().isEmpty())
            add_window->setObjectName(QStringLiteral("add_window"));
        add_window->resize(256, 111);
        formLayout = new QFormLayout(add_window);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(add_window);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(add_window);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(add_window);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(add_window);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        okbutton = new QPushButton(add_window);
        okbutton->setObjectName(QStringLiteral("okbutton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, okbutton);


        retranslateUi(add_window);

        QMetaObject::connectSlotsByName(add_window);
    } // setupUi

    void retranslateUi(QDialog *add_window)
    {
        add_window->setWindowTitle(QApplication::translate("add_window", "Dialog", nullptr));
        label->setText(QApplication::translate("add_window", "Private number:", nullptr));
        label_2->setText(QApplication::translate("add_window", "Type:", nullptr));
        comboBox->setItemText(0, QApplication::translate("add_window", "Budget", nullptr));
        comboBox->setItemText(1, QApplication::translate("add_window", "Contract", nullptr));

        okbutton->setText(QApplication::translate("add_window", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_window: public Ui_add_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WINDOW_H
