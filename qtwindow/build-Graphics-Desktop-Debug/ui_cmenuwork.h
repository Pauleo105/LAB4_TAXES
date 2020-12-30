/********************************************************************************
** Form generated from reading UI file 'cmenuwork.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENUWORK_H
#define UI_CMENUWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cmenuwork
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *cmenuwork)
    {
        if (cmenuwork->objectName().isEmpty())
            cmenuwork->setObjectName(QStringLiteral("cmenuwork"));
        cmenuwork->resize(400, 300);
        pushButton = new QPushButton(cmenuwork);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 230, 88, 27));
        widget = new QWidget(cmenuwork);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 130, 200, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(cmenuwork);

        QMetaObject::connectSlotsByName(cmenuwork);
    } // setupUi

    void retranslateUi(QDialog *cmenuwork)
    {
        cmenuwork->setWindowTitle(QApplication::translate("cmenuwork", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("cmenuwork", "OK", nullptr));
        label->setText(QApplication::translate("cmenuwork", "New workplace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmenuwork: public Ui_cmenuwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENUWORK_H
