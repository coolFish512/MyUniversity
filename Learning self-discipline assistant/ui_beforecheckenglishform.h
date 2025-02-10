/********************************************************************************
** Form generated from reading UI file 'beforecheckenglishform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEFORECHECKENGLISHFORM_H
#define UI_BEFORECHECKENGLISHFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BeforeCheckEnglishForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_week;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_number;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;

    void setupUi(QWidget *BeforeCheckEnglishForm)
    {
        if (BeforeCheckEnglishForm->objectName().isEmpty())
            BeforeCheckEnglishForm->setObjectName(QString::fromUtf8("BeforeCheckEnglishForm"));
        BeforeCheckEnglishForm->resize(277, 112);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/readyCheck.png"), QSize(), QIcon::Normal, QIcon::Off);
        BeforeCheckEnglishForm->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(BeforeCheckEnglishForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(BeforeCheckEnglishForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox_week = new QComboBox(BeforeCheckEnglishForm);
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->addItem(QString());
        comboBox_week->setObjectName(QString::fromUtf8("comboBox_week"));

        horizontalLayout->addWidget(comboBox_week);

        label_2 = new QLabel(BeforeCheckEnglishForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(BeforeCheckEnglishForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        comboBox_number = new QComboBox(BeforeCheckEnglishForm);
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->setObjectName(QString::fromUtf8("comboBox_number"));

        horizontalLayout_2->addWidget(comboBox_number);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(BeforeCheckEnglishForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pushButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/go.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(BeforeCheckEnglishForm);

        QMetaObject::connectSlotsByName(BeforeCheckEnglishForm);
    } // setupUi

    void retranslateUi(QWidget *BeforeCheckEnglishForm)
    {
        BeforeCheckEnglishForm->setWindowTitle(QCoreApplication::translate("BeforeCheckEnglishForm", "\350\257\267\347\273\231\345\207\272\344\275\240\347\232\204\351\200\211\346\213\251", nullptr));
        label->setText(QCoreApplication::translate("BeforeCheckEnglishForm", "\344\275\240\346\203\263\347\273\203\347\254\254\345\207\240\345\221\250\347\232\204\357\274\237", nullptr));
        comboBox_week->setItemText(0, QCoreApplication::translate("BeforeCheckEnglishForm", "1", nullptr));
        comboBox_week->setItemText(1, QCoreApplication::translate("BeforeCheckEnglishForm", "2", nullptr));
        comboBox_week->setItemText(2, QCoreApplication::translate("BeforeCheckEnglishForm", "3", nullptr));
        comboBox_week->setItemText(3, QCoreApplication::translate("BeforeCheckEnglishForm", "4", nullptr));
        comboBox_week->setItemText(4, QCoreApplication::translate("BeforeCheckEnglishForm", "5", nullptr));
        comboBox_week->setItemText(5, QCoreApplication::translate("BeforeCheckEnglishForm", "6", nullptr));
        comboBox_week->setItemText(6, QCoreApplication::translate("BeforeCheckEnglishForm", "7", nullptr));
        comboBox_week->setItemText(7, QCoreApplication::translate("BeforeCheckEnglishForm", "8", nullptr));
        comboBox_week->setItemText(8, QCoreApplication::translate("BeforeCheckEnglishForm", "9", nullptr));
        comboBox_week->setItemText(9, QCoreApplication::translate("BeforeCheckEnglishForm", "10", nullptr));
        comboBox_week->setItemText(10, QCoreApplication::translate("BeforeCheckEnglishForm", "11", nullptr));
        comboBox_week->setItemText(11, QCoreApplication::translate("BeforeCheckEnglishForm", "12", nullptr));
        comboBox_week->setItemText(12, QCoreApplication::translate("BeforeCheckEnglishForm", "13", nullptr));
        comboBox_week->setItemText(13, QCoreApplication::translate("BeforeCheckEnglishForm", "14", nullptr));
        comboBox_week->setItemText(14, QCoreApplication::translate("BeforeCheckEnglishForm", "15", nullptr));
        comboBox_week->setItemText(15, QCoreApplication::translate("BeforeCheckEnglishForm", "16", nullptr));

        label_2->setText(QCoreApplication::translate("BeforeCheckEnglishForm", "\345\221\250", nullptr));
        label_3->setText(QCoreApplication::translate("BeforeCheckEnglishForm", "\344\275\240\346\203\263\347\273\203\345\244\232\345\260\221\344\270\252\350\257\215\347\232\204\357\274\237", nullptr));
        comboBox_number->setItemText(0, QCoreApplication::translate("BeforeCheckEnglishForm", "10\344\270\252\357\274\214\345\260\217\350\257\225\347\211\233\345\210\200", nullptr));
        comboBox_number->setItemText(1, QCoreApplication::translate("BeforeCheckEnglishForm", "20\344\270\252\357\274\214\347\256\200\345\215\225\346\235\245\347\202\271", nullptr));
        comboBox_number->setItemText(2, QCoreApplication::translate("BeforeCheckEnglishForm", "30\344\270\252\357\274\214\346\264\222\346\264\222\346\260\264\345\225\246", nullptr));
        comboBox_number->setItemText(3, QCoreApplication::translate("BeforeCheckEnglishForm", "40\344\270\252\357\274\214\345\260\217\351\224\244\345\233\233\345\215\201", nullptr));
        comboBox_number->setItemText(4, QCoreApplication::translate("BeforeCheckEnglishForm", "50\344\270\252\357\274\214\345\271\263\345\271\263\345\235\207\345\235\207", nullptr));
        comboBox_number->setItemText(5, QCoreApplication::translate("BeforeCheckEnglishForm", "60\344\270\252\357\274\214\345\244\232\347\273\203\344\270\200\344\272\233", nullptr));
        comboBox_number->setItemText(6, QCoreApplication::translate("BeforeCheckEnglishForm", "70\344\270\252\357\274\214\344\270\212\347\202\271\345\216\213\345\212\233", nullptr));
        comboBox_number->setItemText(7, QCoreApplication::translate("BeforeCheckEnglishForm", "80\344\270\252\357\274\214\345\244\247\351\224\244\345\205\253\345\215\201", nullptr));
        comboBox_number->setItemText(8, QCoreApplication::translate("BeforeCheckEnglishForm", "90\344\270\252\357\274\214\346\227\240\346\211\200\347\225\217\346\203\247", nullptr));
        comboBox_number->setItemText(9, QCoreApplication::translate("BeforeCheckEnglishForm", "100\344\270\252\357\274\214\344\273\212\345\244\251\350\260\201\344\271\237\345\210\253\346\203\263\350\265\260", nullptr));
        comboBox_number->setItemText(10, QCoreApplication::translate("BeforeCheckEnglishForm", "1000\344\270\252\357\274\214\345\225\212\345\225\212\345\225\212\345\225\212\345\225\212\345\225\212", nullptr));

        pushButton->setText(QCoreApplication::translate("BeforeCheckEnglishForm", "\346\210\221\345\207\206\345\244\207\345\245\275\344\272\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BeforeCheckEnglishForm: public Ui_BeforeCheckEnglishForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEFORECHECKENGLISHFORM_H
