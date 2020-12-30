/********************************************************************************
** Form generated from reading UI file 'add_contractnum.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CONTRACTNUM_H
#define UI_ADD_CONTRACTNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_contractnum
{
public:
    QGroupBox *groupBox;
    QPushButton *cnumbutton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *contractnumline;

    void setupUi(QDialog *add_contractnum)
    {
        if (add_contractnum->objectName().isEmpty())
            add_contractnum->setObjectName(QStringLiteral("add_contractnum"));
        add_contractnum->resize(400, 300);
        groupBox = new QGroupBox(add_contractnum);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 391, 297));
        cnumbutton = new QPushButton(groupBox);
        cnumbutton->setObjectName(QStringLiteral("cnumbutton"));
        cnumbutton->setGeometry(QRect(160, 200, 88, 27));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(61, 110, 247, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        contractnumline = new QLineEdit(widget);
        contractnumline->setObjectName(QStringLiteral("contractnumline"));

        horizontalLayout->addWidget(contractnumline);


        retranslateUi(add_contractnum);

        QMetaObject::connectSlotsByName(add_contractnum);
    } // setupUi

    void retranslateUi(QDialog *add_contractnum)
    {
        add_contractnum->setWindowTitle(QApplication::translate("add_contractnum", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("add_contractnum", "GroupBox", nullptr));
        cnumbutton->setText(QApplication::translate("add_contractnum", "OK", nullptr));
        label->setText(QApplication::translate("add_contractnum", "Contract number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_contractnum: public Ui_add_contractnum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CONTRACTNUM_H
