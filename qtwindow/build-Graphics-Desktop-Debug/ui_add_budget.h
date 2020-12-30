/********************************************************************************
** Form generated from reading UI file 'add_budget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_BUDGET_H
#define UI_ADD_BUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_budget
{
public:
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *budsurnameline;
    QLabel *label_5;
    QLineEdit *budlastnameline;
    QLabel *label_3;
    QLineEdit *budworkline;
    QLabel *label_4;
    QLineEdit *budpostline;
    QPushButton *budok;
    QLineEdit *budnameline_2;

    void setupUi(QDialog *add_budget)
    {
        if (add_budget->objectName().isEmpty())
            add_budget->setObjectName(QStringLiteral("add_budget"));
        add_budget->resize(396, 344);
        formLayoutWidget_2 = new QWidget(add_budget);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(100, 60, 199, 225));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        budsurnameline = new QLineEdit(formLayoutWidget_2);
        budsurnameline->setObjectName(QStringLiteral("budsurnameline"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, budsurnameline);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        budlastnameline = new QLineEdit(formLayoutWidget_2);
        budlastnameline->setObjectName(QStringLiteral("budlastnameline"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, budlastnameline);

        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_3);

        budworkline = new QLineEdit(formLayoutWidget_2);
        budworkline->setObjectName(QStringLiteral("budworkline"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, budworkline);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        budpostline = new QLineEdit(formLayoutWidget_2);
        budpostline->setObjectName(QStringLiteral("budpostline"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, budpostline);

        budok = new QPushButton(formLayoutWidget_2);
        budok->setObjectName(QStringLiteral("budok"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, budok);

        budnameline_2 = new QLineEdit(formLayoutWidget_2);
        budnameline_2->setObjectName(QStringLiteral("budnameline_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, budnameline_2);

        QWidget::setTabOrder(budnameline_2, budsurnameline);
        QWidget::setTabOrder(budsurnameline, budlastnameline);
        QWidget::setTabOrder(budlastnameline, budworkline);
        QWidget::setTabOrder(budworkline, budpostline);
        QWidget::setTabOrder(budpostline, budok);

        retranslateUi(add_budget);

        QMetaObject::connectSlotsByName(add_budget);
    } // setupUi

    void retranslateUi(QDialog *add_budget)
    {
        add_budget->setWindowTitle(QApplication::translate("add_budget", "Dialog", nullptr));
        label->setText(QApplication::translate("add_budget", "Name", nullptr));
        label_2->setText(QApplication::translate("add_budget", "Surname", nullptr));
        label_5->setText(QApplication::translate("add_budget", "Lastname", nullptr));
        label_3->setText(QApplication::translate("add_budget", "Work", nullptr));
        label_4->setText(QApplication::translate("add_budget", "Post", nullptr));
        budok->setText(QApplication::translate("add_budget", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_budget: public Ui_add_budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_BUDGET_H
