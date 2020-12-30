/********************************************************************************
** Form generated from reading UI file 'delete1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE1_H
#define UI_DELETE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete1
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QDialog *delete1)
    {
        if (delete1->objectName().isEmpty())
            delete1->setObjectName(QStringLiteral("delete1"));
        delete1->resize(400, 300);
        pushButton = new QPushButton(delete1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 220, 88, 27));
        widget = new QWidget(delete1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 90, 331, 105));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);


        retranslateUi(delete1);

        QMetaObject::connectSlotsByName(delete1);
    } // setupUi

    void retranslateUi(QDialog *delete1)
    {
        delete1->setWindowTitle(QApplication::translate("delete1", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("delete1", "OK", nullptr));
        label->setText(QApplication::translate("delete1", "Private number", nullptr));
        label_2->setText(QApplication::translate("delete1", "Type", nullptr));
        comboBox->setItemText(0, QApplication::translate("delete1", "Budget", nullptr));
        comboBox->setItemText(1, QApplication::translate("delete1", "Contract", nullptr));

    } // retranslateUi

};

namespace Ui {
    class delete1: public Ui_delete1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE1_H
