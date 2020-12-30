/********************************************************************************
** Form generated from reading UI file 'correctmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECTMENU_H
#define UI_CORRECTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_correctmenu
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *surname;
    QPushButton *name;
    QPushButton *lastname;
    QPushButton *work;
    QPushButton *post;
    QPushButton *payment;
    QPushButton *contract;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *correctmenu)
    {
        if (correctmenu->objectName().isEmpty())
            correctmenu->setObjectName(QStringLiteral("correctmenu"));
        correctmenu->resize(1039, 385);
        centralwidget = new QWidget(correctmenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton);

        surname = new QPushButton(centralwidget);
        surname->setObjectName(QStringLiteral("surname"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(surname->sizePolicy().hasHeightForWidth());
        surname->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(surname);

        name = new QPushButton(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(name);

        lastname = new QPushButton(centralwidget);
        lastname->setObjectName(QStringLiteral("lastname"));
        sizePolicy1.setHeightForWidth(lastname->sizePolicy().hasHeightForWidth());
        lastname->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(lastname);

        work = new QPushButton(centralwidget);
        work->setObjectName(QStringLiteral("work"));
        sizePolicy1.setHeightForWidth(work->sizePolicy().hasHeightForWidth());
        work->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(work);

        post = new QPushButton(centralwidget);
        post->setObjectName(QStringLiteral("post"));
        sizePolicy1.setHeightForWidth(post->sizePolicy().hasHeightForWidth());
        post->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(post);

        payment = new QPushButton(centralwidget);
        payment->setObjectName(QStringLiteral("payment"));
        sizePolicy1.setHeightForWidth(payment->sizePolicy().hasHeightForWidth());
        payment->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(payment);

        contract = new QPushButton(centralwidget);
        contract->setObjectName(QStringLiteral("contract"));
        sizePolicy1.setHeightForWidth(contract->sizePolicy().hasHeightForWidth());
        contract->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(contract);


        verticalLayout_2->addLayout(verticalLayout);

        correctmenu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(correctmenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        correctmenu->setStatusBar(statusbar);

        retranslateUi(correctmenu);

        QMetaObject::connectSlotsByName(correctmenu);
    } // setupUi

    void retranslateUi(QMainWindow *correctmenu)
    {
        correctmenu->setWindowTitle(QApplication::translate("correctmenu", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("correctmenu", "Back", nullptr));
        surname->setText(QApplication::translate("correctmenu", "Change surname", nullptr));
        name->setText(QApplication::translate("correctmenu", "Change name", nullptr));
        lastname->setText(QApplication::translate("correctmenu", "Change lastname", nullptr));
        work->setText(QApplication::translate("correctmenu", "Change work", nullptr));
        post->setText(QApplication::translate("correctmenu", "Change post", nullptr));
        payment->setText(QApplication::translate("correctmenu", "Add payment", nullptr));
        contract->setText(QApplication::translate("correctmenu", "Change contract number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class correctmenu: public Ui_correctmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECTMENU_H
