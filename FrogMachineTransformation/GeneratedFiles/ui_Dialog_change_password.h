/********************************************************************************
** Form generated from reading UI file 'Dialog_change_password.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHANGE_PASSWORD_H
#define UI_DIALOG_CHANGE_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dialog_change_password
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_new_pw1;
    QLabel *label_new_pw2;
    QLineEdit *lineEdit_new_pw2;
    QLineEdit *lineEdit_old_pw;
    QLineEdit *lineEdit_new_pw1;
    QLabel *label_pw;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Dialog_change_password)
    {
        if (Dialog_change_password->objectName().isEmpty())
            Dialog_change_password->setObjectName(QString::fromUtf8("Dialog_change_password"));
        Dialog_change_password->resize(330, 200);
        gridLayout_2 = new QGridLayout(Dialog_change_password);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        label_new_pw1 = new QLabel(Dialog_change_password);
        label_new_pw1->setObjectName(QString::fromUtf8("label_new_pw1"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        label_new_pw1->setFont(font);

        gridLayout->addWidget(label_new_pw1, 3, 0, 1, 1);

        label_new_pw2 = new QLabel(Dialog_change_password);
        label_new_pw2->setObjectName(QString::fromUtf8("label_new_pw2"));
        label_new_pw2->setFont(font);

        gridLayout->addWidget(label_new_pw2, 5, 0, 1, 1);

        lineEdit_new_pw2 = new QLineEdit(Dialog_change_password);
        lineEdit_new_pw2->setObjectName(QString::fromUtf8("lineEdit_new_pw2"));
        lineEdit_new_pw2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_new_pw2, 5, 1, 1, 1);

        lineEdit_old_pw = new QLineEdit(Dialog_change_password);
        lineEdit_old_pw->setObjectName(QString::fromUtf8("lineEdit_old_pw"));
        lineEdit_old_pw->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_old_pw, 1, 1, 1, 1);

        lineEdit_new_pw1 = new QLineEdit(Dialog_change_password);
        lineEdit_new_pw1->setObjectName(QString::fromUtf8("lineEdit_new_pw1"));
        lineEdit_new_pw1->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_new_pw1, 3, 1, 1, 1);

        label_pw = new QLabel(Dialog_change_password);
        label_pw->setObjectName(QString::fromUtf8("label_pw"));
        label_pw->setFont(font);

        gridLayout->addWidget(label_pw, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(Dialog_change_password);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setFont(font);

        horizontalLayout->addWidget(btn_ok);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_new_pw1->setBuddy(lineEdit_new_pw1);
        label_new_pw2->setBuddy(lineEdit_new_pw2);
        label_pw->setBuddy(lineEdit_old_pw);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_old_pw, lineEdit_new_pw1);
        QWidget::setTabOrder(lineEdit_new_pw1, lineEdit_new_pw2);
        QWidget::setTabOrder(lineEdit_new_pw2, btn_ok);

        retranslateUi(Dialog_change_password);

        QMetaObject::connectSlotsByName(Dialog_change_password);
    } // setupUi

    void retranslateUi(QDialog *Dialog_change_password)
    {
        Dialog_change_password->setWindowTitle(QApplication::translate("Dialog_change_password", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_new_pw1->setText(QApplication::translate("Dialog_change_password", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_new_pw2->setText(QApplication::translate("Dialog_change_password", "\351\207\215\346\226\260\350\276\223\345\205\245", nullptr));
        label_pw->setText(QApplication::translate("Dialog_change_password", "\345\216\237\345\257\206\347\240\201", nullptr));
        btn_ok->setText(QApplication::translate("Dialog_change_password", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_change_password: public Ui_Dialog_change_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHANGE_PASSWORD_H
