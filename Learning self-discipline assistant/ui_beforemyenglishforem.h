/********************************************************************************
** Form generated from reading UI file 'beforemyenglishforem.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEFOREMYENGLISHFOREM_H
#define UI_BEFOREMYENGLISHFOREM_H

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

class Ui_beforeMyEnglishForem
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_allwords;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;

    void setupUi(QWidget *beforeMyEnglishForem)
    {
        if (beforeMyEnglishForem->objectName().isEmpty())
            beforeMyEnglishForem->setObjectName(QString::fromUtf8("beforeMyEnglishForem"));
        beforeMyEnglishForem->resize(226, 141);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/readyCheck.png"), QSize(), QIcon::Normal, QIcon::Off);
        beforeMyEnglishForem->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(beforeMyEnglishForem);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(beforeMyEnglishForem);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox_allwords = new QComboBox(beforeMyEnglishForem);
        comboBox_allwords->addItem(QString());
        comboBox_allwords->addItem(QString());
        comboBox_allwords->setObjectName(QString::fromUtf8("comboBox_allwords"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        comboBox_allwords->setFont(font1);

        horizontalLayout->addWidget(comboBox_allwords);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(beforeMyEnglishForem);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(beforeMyEnglishForem);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFont(font1);

        horizontalLayout_2->addWidget(comboBox_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(beforeMyEnglishForem);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/go.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(beforeMyEnglishForem);

        QMetaObject::connectSlotsByName(beforeMyEnglishForem);
    } // setupUi

    void retranslateUi(QWidget *beforeMyEnglishForem)
    {
        beforeMyEnglishForem->setWindowTitle(QCoreApplication::translate("beforeMyEnglishForem", "\350\257\267\347\273\231\345\207\272\344\275\240\347\232\204\351\200\211\346\213\251", nullptr));
        label->setText(QCoreApplication::translate("beforeMyEnglishForem", "\351\200\211\350\257\215\350\214\203\345\233\264\357\274\232", nullptr));
        comboBox_allwords->setItemText(0, QCoreApplication::translate("beforeMyEnglishForem", "\350\257\245\347\254\224\350\256\260\346\234\254\344\270\255\347\232\204\346\211\200\346\234\211\345\215\225\350\257\215", nullptr));
        comboBox_allwords->setItemText(1, QCoreApplication::translate("beforeMyEnglishForem", "\346\210\221\351\200\211\344\270\255\347\232\204\351\203\250\345\210\206\345\215\225\350\257\215", nullptr));

        label_2->setText(QCoreApplication::translate("beforeMyEnglishForem", "\346\265\213\350\257\225\344\270\252\346\225\260\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("beforeMyEnglishForem", "5\344\270\252", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("beforeMyEnglishForem", "10\344\270\252", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("beforeMyEnglishForem", "20\344\270\252", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("beforeMyEnglishForem", "30\344\270\252", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("beforeMyEnglishForem", "40\344\270\252", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("beforeMyEnglishForem", "50\344\270\252", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("beforeMyEnglishForem", "\346\210\221\351\200\211\345\244\232\345\260\221\344\270\252\345\260\261\346\235\245\345\244\232\345\260\221\344\270\252\357\274\201", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("beforeMyEnglishForem", "\345\234\250\345\215\225\350\257\215\346\234\254\344\270\255\347\232\204\345\205\250\351\203\250\345\215\225\350\257\215", nullptr));

        pushButton->setText(QCoreApplication::translate("beforeMyEnglishForem", "\345\274\200\345\247\213\345\220\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class beforeMyEnglishForem: public Ui_beforeMyEnglishForem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEFOREMYENGLISHFOREM_H
