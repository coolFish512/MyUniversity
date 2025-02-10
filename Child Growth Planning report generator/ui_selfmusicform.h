/********************************************************************************
** Form generated from reading UI file 'selfmusicform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFMUSICFORM_H
#define UI_SELFMUSICFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selfmusicForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *selfmusicForm)
    {
        if (selfmusicForm->objectName().isEmpty())
            selfmusicForm->setObjectName(QString::fromUtf8("selfmusicForm"));
        selfmusicForm->resize(333, 172);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        selfmusicForm->setFont(font);
        verticalLayout = new QVBoxLayout(selfmusicForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(selfmusicForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(selfmusicForm);
        comboBox->addItem(QString());
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/waiting.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(selfmusicForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(selfmusicForm);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

        pushButton = new QPushButton(selfmusicForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_3 = new QPushButton(selfmusicForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_2 = new QPushButton(selfmusicForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(selfmusicForm);

        QMetaObject::connectSlotsByName(selfmusicForm);
    } // setupUi

    void retranslateUi(QWidget *selfmusicForm)
    {
        selfmusicForm->setWindowTitle(QCoreApplication::translate("selfmusicForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("selfmusicForm", "\346\214\211\351\224\256\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("selfmusicForm", "\346\234\252\351\200\211\346\213\251", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("selfmusicForm", "W", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("selfmusicForm", "E", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("selfmusicForm", "R", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("selfmusicForm", "A", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("selfmusicForm", "S", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("selfmusicForm", "D", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("selfmusicForm", "U", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("selfmusicForm", "I", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("selfmusicForm", "O", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("selfmusicForm", "J", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("selfmusicForm", "K", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("selfmusicForm", "L", nullptr));

        label_2->setText(QCoreApplication::translate("selfmusicForm", "\351\237\263\346\225\210\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("selfmusicForm", "\346\234\252\351\200\211\346\213\251", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("selfmusicForm", "\346\227\240\351\237\263\346\225\210", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("selfmusicForm", "\351\200\211\345\217\226\346\234\254\345\234\260(*.WAV)\346\226\207\344\273\266", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("selfmusicForm", "\351\200\211\345\217\226\350\207\252\345\267\261\345\275\225\345\276\227\351\237\263\346\225\210", nullptr));

        pushButton->setText(QCoreApplication::translate("selfmusicForm", "\351\200\211\346\213\251\351\237\263\346\225\210", nullptr));
        pushButton_3->setText(QCoreApplication::translate("selfmusicForm", "\345\275\225\345\210\266\351\237\263\346\225\210", nullptr));
        pushButton_2->setText(QCoreApplication::translate("selfmusicForm", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selfmusicForm: public Ui_selfmusicForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFMUSICFORM_H
