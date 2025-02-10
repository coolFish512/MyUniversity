/********************************************************************************
** Form generated from reading UI file 'myenglishbookform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYENGLISHBOOKFORM_H
#define UI_MYENGLISHBOOKFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyEnglishBookForm
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pb_addBook;
    QPushButton *pb_deleteBook;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pb_append;
    QPushButton *pb_deleted;
    QPushButton *pb_change;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pb_save;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_fanyi;
    QPushButton *pb_pinxie;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pb_out;
    QTableWidget *tableWidget;

    void setupUi(QWidget *MyEnglishBookForm)
    {
        if (MyEnglishBookForm->objectName().isEmpty())
            MyEnglishBookForm->setObjectName(QString::fromUtf8("MyEnglishBookForm"));
        MyEnglishBookForm->resize(1014, 719);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MyEnglishBookForm->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/myBooks.png"), QSize(), QIcon::Normal, QIcon::Off);
        MyEnglishBookForm->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(MyEnglishBookForm);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(MyEnglishBookForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        pb_addBook = new QPushButton(groupBox);
        pb_addBook->setObjectName(QString::fromUtf8("pb_addBook"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/button/icons/windowIcon/creatNewBook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_addBook->setIcon(icon1);

        verticalLayout->addWidget(pb_addBook);

        pb_deleteBook = new QPushButton(groupBox);
        pb_deleteBook->setObjectName(QString::fromUtf8("pb_deleteBook"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/button/icons/windowIcon/deleteBook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_deleteBook->setIcon(icon2);

        verticalLayout->addWidget(pb_deleteBook);


        horizontalLayout_2->addWidget(groupBox);

        frame = new QFrame(MyEnglishBookForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pb_append = new QPushButton(frame);
        pb_append->setObjectName(QString::fromUtf8("pb_append"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_append->setIcon(icon3);

        horizontalLayout->addWidget(pb_append);

        pb_deleted = new QPushButton(frame);
        pb_deleted->setObjectName(QString::fromUtf8("pb_deleted"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/button/icons/windowIcon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_deleted->setIcon(icon4);

        horizontalLayout->addWidget(pb_deleted);

        pb_change = new QPushButton(frame);
        pb_change->setObjectName(QString::fromUtf8("pb_change"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/button/icons/windowIcon/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_change->setIcon(icon5);

        horizontalLayout->addWidget(pb_change);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        pb_save = new QPushButton(frame);
        pb_save->setObjectName(QString::fromUtf8("pb_save"));

        horizontalLayout->addWidget(pb_save);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pb_fanyi = new QPushButton(frame);
        pb_fanyi->setObjectName(QString::fromUtf8("pb_fanyi"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/fanyi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_fanyi->setIcon(icon6);

        horizontalLayout->addWidget(pb_fanyi);

        pb_pinxie = new QPushButton(frame);
        pb_pinxie->setObjectName(QString::fromUtf8("pb_pinxie"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/moxie.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_pinxie->setIcon(icon7);

        horizontalLayout->addWidget(pb_pinxie);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pb_out = new QPushButton(frame);
        pb_out->setObjectName(QString::fromUtf8("pb_out"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/button/icons/goOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_out->setIcon(icon8);

        horizontalLayout->addWidget(pb_out);


        verticalLayout_2->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(frame);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(MyEnglishBookForm);

        QMetaObject::connectSlotsByName(MyEnglishBookForm);
    } // setupUi

    void retranslateUi(QWidget *MyEnglishBookForm)
    {
        MyEnglishBookForm->setWindowTitle(QCoreApplication::translate("MyEnglishBookForm", "\346\210\221\347\232\204\350\213\261\350\257\255\346\234\254\344\273\254", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MyEnglishBookForm", "\351\200\211\346\213\251\346\234\254\346\234\254", nullptr));
        pb_addBook->setText(QCoreApplication::translate("MyEnglishBookForm", "\346\267\273\345\212\240\346\226\260\350\213\261\350\257\255\346\234\254", nullptr));
        pb_deleteBook->setText(QCoreApplication::translate("MyEnglishBookForm", "\345\210\240\351\231\244\350\213\261\350\257\255\346\234\254", nullptr));
        pb_append->setText(QCoreApplication::translate("MyEnglishBookForm", "\346\267\273\345\212\240", nullptr));
        pb_deleted->setText(QCoreApplication::translate("MyEnglishBookForm", "\345\210\240\351\231\244", nullptr));
        pb_change->setText(QCoreApplication::translate("MyEnglishBookForm", "\344\277\256\346\224\271", nullptr));
        pb_save->setText(QCoreApplication::translate("MyEnglishBookForm", "\344\277\235\345\255\230", nullptr));
        pb_fanyi->setText(QCoreApplication::translate("MyEnglishBookForm", "\347\273\203\347\277\273\350\257\221", nullptr));
        pb_pinxie->setText(QCoreApplication::translate("MyEnglishBookForm", "\347\273\203\346\213\274\345\206\231", nullptr));
        pb_out->setText(QCoreApplication::translate("MyEnglishBookForm", "\345\257\274\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyEnglishBookForm: public Ui_MyEnglishBookForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYENGLISHBOOKFORM_H
