/********************************************************************************
** Form generated from reading UI file 'cmenupayment.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENUPAYMENT_H
#define UI_CMENUPAYMENT_H

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

class Ui_cmenupayment
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *payment;
    QLabel *label_3;
    QLineEdit *money;
    QPushButton *pushButton;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLineEdit *day;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QComboBox *comboBox;

    void setupUi(QDialog *cmenupayment)
    {
        if (cmenupayment->objectName().isEmpty())
            cmenupayment->setObjectName(QStringLiteral("cmenupayment"));
        cmenupayment->resize(719, 283);
        widget = new QWidget(cmenupayment);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(130, 60, 511, 161));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));

        formLayout->setLayout(0, QFormLayout::LabelRole, formLayout_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        payment = new QLineEdit(widget);
        payment->setObjectName(QStringLiteral("payment"));

        formLayout->setWidget(2, QFormLayout::FieldRole, payment);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        money = new QLineEdit(widget);
        money->setObjectName(QStringLiteral("money"));

        formLayout->setWidget(3, QFormLayout::FieldRole, money);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        day = new QLineEdit(widget);
        day->setObjectName(QStringLiteral("day"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, day);


        formLayout->setLayout(1, QFormLayout::LabelRole, formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, comboBox);


        formLayout->setLayout(1, QFormLayout::FieldRole, formLayout_4);


        retranslateUi(cmenupayment);

        QMetaObject::connectSlotsByName(cmenupayment);
    } // setupUi

    void retranslateUi(QDialog *cmenupayment)
    {
        cmenupayment->setWindowTitle(QApplication::translate("cmenupayment", "Dialog", nullptr));
        label_2->setText(QApplication::translate("cmenupayment", "Type of this payment", nullptr));
        label_3->setText(QApplication::translate("cmenupayment", "Amount of money", nullptr));
        pushButton->setText(QApplication::translate("cmenupayment", "OK", nullptr));
        label->setText(QApplication::translate("cmenupayment", "Day", nullptr));
        label_4->setText(QApplication::translate("cmenupayment", "Month", nullptr));
        comboBox->setItemText(0, QApplication::translate("cmenupayment", "January", nullptr));
        comboBox->setItemText(1, QApplication::translate("cmenupayment", "February", nullptr));
        comboBox->setItemText(2, QApplication::translate("cmenupayment", "March", nullptr));
        comboBox->setItemText(3, QApplication::translate("cmenupayment", "April", nullptr));
        comboBox->setItemText(4, QApplication::translate("cmenupayment", "May", nullptr));
        comboBox->setItemText(5, QApplication::translate("cmenupayment", "June", nullptr));
        comboBox->setItemText(6, QApplication::translate("cmenupayment", "July", nullptr));
        comboBox->setItemText(7, QApplication::translate("cmenupayment", "August", nullptr));
        comboBox->setItemText(8, QApplication::translate("cmenupayment", "September", nullptr));
        comboBox->setItemText(9, QApplication::translate("cmenupayment", "October", nullptr));
        comboBox->setItemText(10, QApplication::translate("cmenupayment", "November", nullptr));
        comboBox->setItemText(11, QApplication::translate("cmenupayment", "December", nullptr));

    } // retranslateUi

};

namespace Ui {
    class cmenupayment: public Ui_cmenupayment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENUPAYMENT_H
