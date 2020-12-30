/********************************************************************************
** Form generated from reading UI file 'cmenupost.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENUPOST_H
#define UI_CMENUPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cmenupost
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *cmenupost)
    {
        if (cmenupost->objectName().isEmpty())
            cmenupost->setObjectName(QStringLiteral("cmenupost"));
        cmenupost->resize(400, 300);
        pushButton = new QPushButton(cmenupost);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 230, 88, 27));
        widget = new QWidget(cmenupost);
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


        retranslateUi(cmenupost);

        QMetaObject::connectSlotsByName(cmenupost);
    } // setupUi

    void retranslateUi(QDialog *cmenupost)
    {
        cmenupost->setWindowTitle(QApplication::translate("cmenupost", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("cmenupost", "OK", nullptr));
        label->setText(QApplication::translate("cmenupost", "New post", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmenupost: public Ui_cmenupost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENUPOST_H
