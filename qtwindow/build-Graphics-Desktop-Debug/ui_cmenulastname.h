/********************************************************************************
** Form generated from reading UI file 'cmenulastname.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENULASTNAME_H
#define UI_CMENULASTNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cmenulastname
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *cmenulastname)
    {
        if (cmenulastname->objectName().isEmpty())
            cmenulastname->setObjectName(QStringLiteral("cmenulastname"));
        cmenulastname->resize(400, 300);
        pushButton = new QPushButton(cmenulastname);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 210, 88, 27));
        widget = new QWidget(cmenulastname);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 120, 200, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(cmenulastname);

        QMetaObject::connectSlotsByName(cmenulastname);
    } // setupUi

    void retranslateUi(QDialog *cmenulastname)
    {
        cmenulastname->setWindowTitle(QApplication::translate("cmenulastname", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("cmenulastname", "OK", nullptr));
        label->setText(QApplication::translate("cmenulastname", "New lastname", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmenulastname: public Ui_cmenulastname {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENULASTNAME_H
