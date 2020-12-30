/********************************************************************************
** Form generated from reading UI file 'count.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNT_H
#define UI_COUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_count
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *count)
    {
        if (count->objectName().isEmpty())
            count->setObjectName(QStringLiteral("count"));
        count->resize(400, 300);
        pushButton = new QPushButton(count);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 230, 88, 27));
        widget = new QWidget(count);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 120, 241, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(count);

        QMetaObject::connectSlotsByName(count);
    } // setupUi

    void retranslateUi(QDialog *count)
    {
        count->setWindowTitle(QApplication::translate("count", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("count", "OK", nullptr));
        label->setText(QApplication::translate("count", "Private number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class count: public Ui_count {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNT_H
