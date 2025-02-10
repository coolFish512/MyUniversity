/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *rewardCulcu;
    QAction *LearnRecord;
    QAction *seeWords;
    QAction *check_english_ac;
    QAction *wrong_words_book_ac;
    QAction *check_chinese_ac;
    QAction *english_book_ac;
    QAction *set_ac;
    QAction *about_ac;
    QWidget *centralwidget;
    QLCDNumber *lcdNumber;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_start;
    QSpacerItem *www;
    QPushButton *pb_stop;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_end;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(664, 975);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MainWindow->setFont(font);
        rewardCulcu = new QAction(MainWindow);
        rewardCulcu->setObjectName(QString::fromUtf8("rewardCulcu"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/reward.png"), QSize(), QIcon::Normal, QIcon::Off);
        rewardCulcu->setIcon(icon);
        LearnRecord = new QAction(MainWindow);
        LearnRecord->setObjectName(QString::fromUtf8("LearnRecord"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/learnRecord.png"), QSize(), QIcon::Normal, QIcon::Off);
        LearnRecord->setIcon(icon1);
        seeWords = new QAction(MainWindow);
        seeWords->setObjectName(QString::fromUtf8("seeWords"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/seeWords.png"), QSize(), QIcon::Normal, QIcon::Off);
        seeWords->setIcon(icon2);
        check_english_ac = new QAction(MainWindow);
        check_english_ac->setObjectName(QString::fromUtf8("check_english_ac"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/fanyi2.png"), QSize(), QIcon::Normal, QIcon::Off);
        check_english_ac->setIcon(icon3);
        wrong_words_book_ac = new QAction(MainWindow);
        wrong_words_book_ac->setObjectName(QString::fromUtf8("wrong_words_book_ac"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/windowIcon/icons/wrongBook.png"), QSize(), QIcon::Normal, QIcon::Off);
        wrong_words_book_ac->setIcon(icon4);
        check_chinese_ac = new QAction(MainWindow);
        check_chinese_ac->setObjectName(QString::fromUtf8("check_chinese_ac"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/moxie2.png"), QSize(), QIcon::Normal, QIcon::Off);
        check_chinese_ac->setIcon(icon5);
        english_book_ac = new QAction(MainWindow);
        english_book_ac->setObjectName(QString::fromUtf8("english_book_ac"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/myBooks.png"), QSize(), QIcon::Normal, QIcon::Off);
        english_book_ac->setIcon(icon6);
        set_ac = new QAction(MainWindow);
        set_ac->setObjectName(QString::fromUtf8("set_ac"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_ac->setIcon(icon7);
        about_ac = new QAction(MainWindow);
        about_ac->setObjectName(QString::fromUtf8("about_ac"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/button/icons/showSelf.png"), QSize(), QIcon::Normal, QIcon::Off);
        about_ac->setIcon(icon8);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(100, 10, 471, 131));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 200, 641, 751));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 150, 351, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pb_start = new QPushButton(layoutWidget);
        pb_start->setObjectName(QString::fromUtf8("pb_start"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        pb_start->setFont(font1);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/button/icons/startLearn.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_start->setIcon(icon9);

        horizontalLayout->addWidget(pb_start);

        www = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(www);

        pb_stop = new QPushButton(layoutWidget);
        pb_stop->setObjectName(QString::fromUtf8("pb_stop"));
        pb_stop->setFont(font1);

        horizontalLayout->addWidget(pb_stop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pb_end = new QPushButton(layoutWidget);
        pb_end->setObjectName(QString::fromUtf8("pb_end"));
        pb_end->setFont(font1);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/button/icons/endLearn.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_end->setIcon(icon10);

        horizontalLayout->addWidget(pb_end);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 664, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(rewardCulcu);
        menu->addAction(LearnRecord);
        menu_2->addAction(seeWords);
        menu_2->addAction(check_english_ac);
        menu_2->addAction(check_chinese_ac);
        menu_2->addAction(wrong_words_book_ac);
        menu_3->addAction(english_book_ac);
        menu_4->addAction(set_ac);
        menu_4->addAction(about_ac);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\245\236\345\245\207\345\210\250\345\206\260", nullptr));
        rewardCulcu->setText(QCoreApplication::translate("MainWindow", "\345\245\226\345\212\261\350\256\260\345\275\225", nullptr));
        LearnRecord->setText(QCoreApplication::translate("MainWindow", "\345\255\246\344\271\240\350\256\260\345\275\225", nullptr));
        seeWords->setText(QCoreApplication::translate("MainWindow", "\347\234\213\345\215\225\350\257\215", nullptr));
        check_english_ac->setText(QCoreApplication::translate("MainWindow", "\347\273\203\347\277\273\350\257\221", nullptr));
        wrong_words_book_ac->setText(QCoreApplication::translate("MainWindow", "\351\224\231\350\257\215\346\234\254", nullptr));
        check_chinese_ac->setText(QCoreApplication::translate("MainWindow", "\347\273\203\346\213\274\345\206\231", nullptr));
        english_book_ac->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\213\261\350\257\255\346\234\254", nullptr));
        set_ac->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        about_ac->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        pb_start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\255\246\344\271\240", nullptr));
        pb_stop->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234\345\255\246\344\271\240", nullptr));
        pb_end->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\345\255\246\344\271\240", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\260\345\275\225", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\255\246\350\213\261\350\257\255", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204\350\213\261\350\257\255\346\234\254", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\205\266\344\273\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
