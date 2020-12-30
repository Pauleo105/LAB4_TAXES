/********************************************************************************
** Form generated from reading UI file 'cmenucontract.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENUCONTRACT_H
#define UI_CMENUCONTRACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cmenucontract
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *cmenucontract)
    {
        if (cmenucontract->objectName().isEmpty())
            cmenucontract->setObjectName(QStringLiteral("cmenucontract"));
        cmenucontract->resize(400, 300);
        pushButton = new QPushButton(cmenucontract);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 220, 88, 27));
        widget = new QWidget(cmenucontract);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 140, 291, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(cmenucontract);

        QMetaObject::connectSlotsByName(cmenucontract);
    } // setupUi

    void retranslateUi(QDialog *cmenucontract)
    {
        cmenucontract->setWindowTitle(QApplication::translate("cmenucontract", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("cmenucontract", "OK", nullptr));
        label->setText(QApplication::translate("cmenucontract", "New contract number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmenucontract: public Ui_cmenucontract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENUCONTRACT_H
