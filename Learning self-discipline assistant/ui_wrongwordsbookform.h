/********************************************************************************
** Form generated from reading UI file 'wrongwordsbookform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRONGWORDSBOOKFORM_H
#define UI_WRONGWORDSBOOKFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WrongWordsBookForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QWidget *WrongWordsBookForm)
    {
        if (WrongWordsBookForm->objectName().isEmpty())
            WrongWordsBookForm->setObjectName(QString::fromUtf8("WrongWordsBookForm"));
        WrongWordsBookForm->resize(676, 493);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        WrongWordsBookForm->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/wrongBook.png"), QSize(), QIcon::Normal, QIcon::Off);
        WrongWordsBookForm->setWindowIcon(icon);
        WrongWordsBookForm->setStyleSheet(QString::fromUtf8("QWidget#widgetWinPic\n"
"\n"
"{\n"
"\n"
"\343\200\200\343\200\200background-image: url(:/backGround/icons/wrongBookBK.jpg);\n"
"\n"
"\343\200\200\343\200\200background-repeat:repeat;\n"
"\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(WrongWordsBookForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(WrongWordsBookForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(WrongWordsBookForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setAutoFillBackground(true);
        tableWidget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(tableWidget);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(WrongWordsBookForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/button/icons/windowIcon/deleteBook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(WrongWordsBookForm);

        QMetaObject::connectSlotsByName(WrongWordsBookForm);
    } // setupUi

    void retranslateUi(QWidget *WrongWordsBookForm)
    {
        WrongWordsBookForm->setWindowTitle(QCoreApplication::translate("WrongWordsBookForm", "\345\260\217\345\260\217\351\224\231\351\242\230\346\234\254", nullptr));
        label->setText(QCoreApplication::translate("WrongWordsBookForm", "\344\270\200\344\270\213\346\230\257\344\271\213\345\211\215\351\224\231\350\277\207\347\232\204\345\215\225\350\257\215", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WrongWordsBookForm", "\344\273\245\345\276\200\350\256\260\351\224\231\347\232\204\345\215\225\350\257\215", nullptr));
        pushButton->setText(QCoreApplication::translate("WrongWordsBookForm", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WrongWordsBookForm: public Ui_WrongWordsBookForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRONGWORDSBOOKFORM_H
