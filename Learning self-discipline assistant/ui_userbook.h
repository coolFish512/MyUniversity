/********************************************************************************
** Form generated from reading UI file 'userbook.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERBOOK_H
#define UI_USERBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userBook
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_disagree2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_disagree1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pb_agree;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *userBook)
    {
        if (userBook->objectName().isEmpty())
            userBook->setObjectName(QString::fromUtf8("userBook"));
        userBook->resize(629, 261);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        userBook->setFont(font);
        verticalLayout_2 = new QVBoxLayout(userBook);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(userBook);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        textBrowser->setFont(font1);

        verticalLayout->addWidget(textBrowser);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pb_disagree2 = new QPushButton(userBook);
        pb_disagree2->setObjectName(QString::fromUtf8("pb_disagree2"));

        horizontalLayout->addWidget(pb_disagree2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pb_disagree1 = new QPushButton(userBook);
        pb_disagree1->setObjectName(QString::fromUtf8("pb_disagree1"));

        horizontalLayout->addWidget(pb_disagree1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pb_agree = new QPushButton(userBook);
        pb_agree->setObjectName(QString::fromUtf8("pb_agree"));

        horizontalLayout->addWidget(pb_agree);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(userBook);

        QMetaObject::connectSlotsByName(userBook);
    } // setupUi

    void retranslateUi(QWidget *userBook)
    {
        userBook->setWindowTitle(QCoreApplication::translate("userBook", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("userBook", "\347\224\250\346\210\267\345\215\217\350\256\256", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("userBook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">\347\224\250\346\210\267\345\234\250\344\275\277\347\224\250\350\257\245\347\250\213\345\272\217\346\227\266\357\274\214\351\234\200\350\246\201\351\201\265\345\276\252\344\270\200\344\270\213\345\215\217\350\256\256\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">  1\343\200\201\350\246\201\345\245\275\345\245\275\345"
                        "\257\271\345\276\205\350\207\252\345\267\261\357\274\214\350\256\251\350\207\252\345\267\261\345\274\200\345\277\203</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">  2\343\200\20120\345\271\264\344\271\213\345\206\205\344\270\215\350\203\275\344\270\215\345\226\234\346\254\242\345\272\204\346\226\260\351\261\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">  3\343\200\201\347\254\2542\346\235\241\344\270\255\347\232\204\345\272\204\346\226\260\351\261\274\345\277\205\351\241\273\346\230\257\345\234\2502024\345\271\264\344\272\216\344\270\234\345\214\227\345\244\247\345\255\246\347\247\246\347\232\207\345\262\233\345\210\206\346\240\241\345\260\261\350\257\273\347\232\204\351\202\243\344\270\252\345\272\204\346\226\260\351\261"
                        "\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">  4\343\200\201\345\245\275\345\245\275\347\234\213\347\254\254\344\270\211\346\235\241</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">\346\230\257\345\220\246\345\220\214\346\204\217\357\274\237\357\274\210\345\217\257\344\273\245\350\257\225\347\235\200\347\202\271\344\270\200\344\270\213\344\270\215\347\224\250\344\270\200\357\274\214\344\275\206\346\230\257\344\270\215\350\246\201\347\234\237\347\232\204\344\270\215\345\220\214\346\204\217\357\274\211</span></p></body></html>", nullptr));
        pb_disagree2->setText(QCoreApplication::translate("userBook", "\344\270\215\345\220\214\346\204\217", nullptr));
        pb_disagree1->setText(QCoreApplication::translate("userBook", "\344\270\215\345\220\214\346\204\217", nullptr));
        pb_agree->setText(QCoreApplication::translate("userBook", "\345\220\214\346\204\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userBook: public Ui_userBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERBOOK_H
