/********************************************************************************
** Form generated from reading UI file 'wordsseeform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDSSEEFORM_H
#define UI_WORDSSEEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WordsSeeForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QFontComboBox *fontComboBox;
    QTableWidget *tableWidget;

    void setupUi(QWidget *WordsSeeForm)
    {
        if (WordsSeeForm->objectName().isEmpty())
            WordsSeeForm->setObjectName(QString::fromUtf8("WordsSeeForm"));
        WordsSeeForm->resize(680, 485);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        WordsSeeForm->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/seeWords.png"), QSize(), QIcon::Normal, QIcon::Off);
        WordsSeeForm->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(WordsSeeForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(WordsSeeForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(WordsSeeForm);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        comboBox->setFont(font2);

        horizontalLayout->addWidget(comboBox);

        label_2 = new QLabel(WordsSeeForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fontComboBox = new QFontComboBox(WordsSeeForm);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(WordsSeeForm);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font2);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(WordsSeeForm);

        QMetaObject::connectSlotsByName(WordsSeeForm);
    } // setupUi

    void retranslateUi(QWidget *WordsSeeForm)
    {
        WordsSeeForm->setWindowTitle(QCoreApplication::translate("WordsSeeForm", "\347\234\213\347\234\213\345\215\225\350\257\215", nullptr));
        label->setText(QCoreApplication::translate("WordsSeeForm", "\347\254\254", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("WordsSeeForm", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("WordsSeeForm", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("WordsSeeForm", "3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("WordsSeeForm", "4", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("WordsSeeForm", "5", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("WordsSeeForm", "6", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("WordsSeeForm", "7", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("WordsSeeForm", "8", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("WordsSeeForm", "9", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("WordsSeeForm", "10", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("WordsSeeForm", "11", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("WordsSeeForm", "12", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("WordsSeeForm", "13", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("WordsSeeForm", "14", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("WordsSeeForm", "15", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("WordsSeeForm", "16", nullptr));

        label_2->setText(QCoreApplication::translate("WordsSeeForm", "\345\221\250\345\215\225\350\257\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WordsSeeForm: public Ui_WordsSeeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDSSEEFORM_H
