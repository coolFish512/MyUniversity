/********************************************************************************
** Form generated from reading UI file 'addnewbook.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWBOOK_H
#define UI_ADDNEWBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addNewBook
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QWidget *addNewBook)
    {
        if (addNewBook->objectName().isEmpty())
            addNewBook->setObjectName(QString::fromUtf8("addNewBook"));
        addNewBook->resize(368, 580);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addNewBook->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(addNewBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(addNewBook);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(addNewBook);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(addNewBook);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        groupBox->setFont(font1);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidget = new QListWidget(groupBox);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget);
        __qlistwidgetitem8->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/10.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget);
        __qlistwidgetitem9->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/11.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listWidget);
        __qlistwidgetitem10->setIcon(icon11);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/12.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listWidget);
        __qlistwidgetitem11->setIcon(icon12);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(listWidget);
        __qlistwidgetitem12->setIcon(icon13);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/14.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(listWidget);
        __qlistwidgetitem13->setIcon(icon14);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/15.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(listWidget);
        __qlistwidgetitem14->setIcon(icon15);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(listWidget);
        __qlistwidgetitem15->setIcon(icon16);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/17.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(listWidget);
        __qlistwidgetitem16->setIcon(icon17);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/18.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(listWidget);
        __qlistwidgetitem17->setIcon(icon18);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/19.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(listWidget);
        __qlistwidgetitem18->setIcon(icon19);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/20.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem19 = new QListWidgetItem(listWidget);
        __qlistwidgetitem19->setIcon(icon20);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/21.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem20 = new QListWidgetItem(listWidget);
        __qlistwidgetitem20->setIcon(icon21);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/22.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem21 = new QListWidgetItem(listWidget);
        __qlistwidgetitem21->setIcon(icon22);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/23.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem22 = new QListWidgetItem(listWidget);
        __qlistwidgetitem22->setIcon(icon23);
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/24.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem23 = new QListWidgetItem(listWidget);
        __qlistwidgetitem23->setIcon(icon24);
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/25.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem24 = new QListWidgetItem(listWidget);
        __qlistwidgetitem24->setIcon(icon25);
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/26.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem25 = new QListWidgetItem(listWidget);
        __qlistwidgetitem25->setIcon(icon26);
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/27.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem26 = new QListWidgetItem(listWidget);
        __qlistwidgetitem26->setIcon(icon27);
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/28.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem27 = new QListWidgetItem(listWidget);
        __qlistwidgetitem27->setIcon(icon28);
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/29.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem28 = new QListWidgetItem(listWidget);
        __qlistwidgetitem28->setIcon(icon29);
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/30.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem29 = new QListWidgetItem(listWidget);
        __qlistwidgetitem29->setIcon(icon30);
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/31.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem30 = new QListWidgetItem(listWidget);
        __qlistwidgetitem30->setIcon(icon31);
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/32.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem31 = new QListWidgetItem(listWidget);
        __qlistwidgetitem31->setIcon(icon32);
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/33.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem32 = new QListWidgetItem(listWidget);
        __qlistwidgetitem32->setIcon(icon33);
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/34.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem33 = new QListWidgetItem(listWidget);
        __qlistwidgetitem33->setIcon(icon34);
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/35.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem34 = new QListWidgetItem(listWidget);
        __qlistwidgetitem34->setIcon(icon35);
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/36.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem35 = new QListWidgetItem(listWidget);
        __qlistwidgetitem35->setIcon(icon36);
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/37.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem36 = new QListWidgetItem(listWidget);
        __qlistwidgetitem36->setIcon(icon37);
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/38.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem37 = new QListWidgetItem(listWidget);
        __qlistwidgetitem37->setIcon(icon38);
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/39.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem38 = new QListWidgetItem(listWidget);
        __qlistwidgetitem38->setIcon(icon39);
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/40.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem39 = new QListWidgetItem(listWidget);
        __qlistwidgetitem39->setIcon(icon40);
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/41.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem40 = new QListWidgetItem(listWidget);
        __qlistwidgetitem40->setIcon(icon41);
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/45.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem41 = new QListWidgetItem(listWidget);
        __qlistwidgetitem41->setIcon(icon42);
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/43.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem42 = new QListWidgetItem(listWidget);
        __qlistwidgetitem42->setIcon(icon43);
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/44.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem43 = new QListWidgetItem(listWidget);
        __qlistwidgetitem43->setIcon(icon44);
        QListWidgetItem *__qlistwidgetitem44 = new QListWidgetItem(listWidget);
        __qlistwidgetitem44->setIcon(icon42);
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/46.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem45 = new QListWidgetItem(listWidget);
        __qlistwidgetitem45->setIcon(icon45);
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/47.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem46 = new QListWidgetItem(listWidget);
        __qlistwidgetitem46->setIcon(icon46);
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/48.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem47 = new QListWidgetItem(listWidget);
        __qlistwidgetitem47->setIcon(icon47);
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/49.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem48 = new QListWidgetItem(listWidget);
        __qlistwidgetitem48->setIcon(icon48);
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/50.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem49 = new QListWidgetItem(listWidget);
        __qlistwidgetitem49->setIcon(icon49);
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/51.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem50 = new QListWidgetItem(listWidget);
        __qlistwidgetitem50->setIcon(icon50);
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/52.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem51 = new QListWidgetItem(listWidget);
        __qlistwidgetitem51->setIcon(icon51);
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/53.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem52 = new QListWidgetItem(listWidget);
        __qlistwidgetitem52->setIcon(icon52);
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/54.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem53 = new QListWidgetItem(listWidget);
        __qlistwidgetitem53->setIcon(icon53);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        listWidget->setFont(font2);

        horizontalLayout_2->addWidget(listWidget);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(addNewBook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/button/icons/windowIcon/creatNewBook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon54);

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(addNewBook);

        QMetaObject::connectSlotsByName(addNewBook);
    } // setupUi

    void retranslateUi(QWidget *addNewBook)
    {
        addNewBook->setWindowTitle(QCoreApplication::translate("addNewBook", "\346\267\273\345\212\240\346\226\260\346\234\254\346\234\254\345\225\246", nullptr));
        label->setText(QCoreApplication::translate("addNewBook", "\346\226\260\346\234\254\346\234\254\347\232\204\345\220\215\347\247\260\357\274\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addNewBook", "\347\273\231\346\226\260\346\234\254\346\234\254\351\200\211\344\270\200\344\270\252\345\233\276\346\240\207\345\220\247", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("addNewBook", "\346\231\256\351\200\232\345\233\276\346\240\207\347\272\242", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("addNewBook", "\346\231\256\351\200\232\345\233\276\346\240\207\351\273\204", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("addNewBook", "\346\231\256\351\200\232\345\233\276\346\240\207\350\267\257", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("addNewBook", "\346\231\256\351\200\232\345\233\276\346\240\207\350\223\235", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("addNewBook", "\346\231\256\351\200\232\345\233\276\346\240\207\351\252\232\347\262\211", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("addNewBook", "\346\231\256\351\200\232\345\233\276\346\240\207\347\201\260", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("addNewBook", "\345\233\260\351\232\276\347\232\204\345\233\260", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("addNewBook", "\345\233\260\351\232\276\347\232\204\351\232\276", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("addNewBook", "\351\232\276\346\220\236", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("addNewBook", "\345\260\217\350\217\234\344\270\200\347\242\237", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("addNewBook", "\346\227\251\344\270\212", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("addNewBook", "\346\231\232\344\270\212", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(12);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("addNewBook", "\350\203\214\350\257\265", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(13);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("addNewBook", "\350\203\214\350\257\2652.0", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget->item(14);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("addNewBook", "\345\244\215\344\271\240", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = listWidget->item(15);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("addNewBook", "\344\272\214\346\254\241\345\244\215\344\271\240", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = listWidget->item(16);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("addNewBook", "\346\265\213\350\257\225\357\274\210\351\207\215\350\246\201\357\274\211", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = listWidget->item(17);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("addNewBook", "\346\265\213\350\257\225\357\274\210\346\231\256\351\200\232\357\274\211", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = listWidget->item(18);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("addNewBook", "\346\265\213\350\257\225\357\274\210\347\256\200\345\215\225\357\274\211", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = listWidget->item(19);
        ___qlistwidgetitem19->setText(QCoreApplication::translate("addNewBook", "\346\234\211\347\226\221\351\227\256", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = listWidget->item(20);
        ___qlistwidgetitem20->setText(QCoreApplication::translate("addNewBook", "\346\201\266\345\277\203", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = listWidget->item(21);
        ___qlistwidgetitem21->setText(QCoreApplication::translate("addNewBook", "\350\212\261\350\212\261", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = listWidget->item(22);
        ___qlistwidgetitem22->setText(QCoreApplication::translate("addNewBook", "\351\270\237\351\270\237", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = listWidget->item(23);
        ___qlistwidgetitem23->setText(QCoreApplication::translate("addNewBook", "\345\261\261\345\261\261", nullptr));
        QListWidgetItem *___qlistwidgetitem24 = listWidget->item(24);
        ___qlistwidgetitem24->setText(QCoreApplication::translate("addNewBook", "\351\261\274\351\261\274", nullptr));
        QListWidgetItem *___qlistwidgetitem25 = listWidget->item(25);
        ___qlistwidgetitem25->setText(QCoreApplication::translate("addNewBook", "\346\224\266\350\227\217", nullptr));
        QListWidgetItem *___qlistwidgetitem26 = listWidget->item(26);
        ___qlistwidgetitem26->setText(QCoreApplication::translate("addNewBook", "\351\207\215\350\246\201", nullptr));
        QListWidgetItem *___qlistwidgetitem27 = listWidget->item(27);
        ___qlistwidgetitem27->setText(QCoreApplication::translate("addNewBook", "\345\277\253\345\277\253\345\277\253\357\274\214\346\200\245\357\274\201", nullptr));
        QListWidgetItem *___qlistwidgetitem28 = listWidget->item(28);
        ___qlistwidgetitem28->setText(QCoreApplication::translate("addNewBook", "\345\253\214\345\274\203", nullptr));
        QListWidgetItem *___qlistwidgetitem29 = listWidget->item(29);
        ___qlistwidgetitem29->setText(QCoreApplication::translate("addNewBook", "\346\227\240\350\257\255", nullptr));
        QListWidgetItem *___qlistwidgetitem30 = listWidget->item(30);
        ___qlistwidgetitem30->setText(QCoreApplication::translate("addNewBook", "\345\221\206\345\221\206", nullptr));
        QListWidgetItem *___qlistwidgetitem31 = listWidget->item(31);
        ___qlistwidgetitem31->setText(QCoreApplication::translate("addNewBook", "\346\227\240\346\211\200\350\260\223", nullptr));
        QListWidgetItem *___qlistwidgetitem32 = listWidget->item(32);
        ___qlistwidgetitem32->setText(QCoreApplication::translate("addNewBook", "\346\203\212\350\256\266", nullptr));
        QListWidgetItem *___qlistwidgetitem33 = listWidget->item(33);
        ___qlistwidgetitem33->setText(QCoreApplication::translate("addNewBook", "\345\274\200\345\274\200\345\277\203\345\277\203", nullptr));
        QListWidgetItem *___qlistwidgetitem34 = listWidget->item(34);
        ___qlistwidgetitem34->setText(QCoreApplication::translate("addNewBook", "\350\232\214\345\237\240\344\275\217\344\272\206", nullptr));
        QListWidgetItem *___qlistwidgetitem35 = listWidget->item(35);
        ___qlistwidgetitem35->setText(QCoreApplication::translate("addNewBook", "\351\273\230\351\273\230\350\247\202\345\257\237", nullptr));
        QListWidgetItem *___qlistwidgetitem36 = listWidget->item(36);
        ___qlistwidgetitem36->setText(QCoreApplication::translate("addNewBook", "\344\270\215\346\234\215", nullptr));
        QListWidgetItem *___qlistwidgetitem37 = listWidget->item(37);
        ___qlistwidgetitem37->setText(QCoreApplication::translate("addNewBook", "\344\272\224\346\235\241\346\202\237\357\274\237", nullptr));
        QListWidgetItem *___qlistwidgetitem38 = listWidget->item(38);
        ___qlistwidgetitem38->setText(QCoreApplication::translate("addNewBook", "\347\224\237\346\260\224", nullptr));
        QListWidgetItem *___qlistwidgetitem39 = listWidget->item(39);
        ___qlistwidgetitem39->setText(QCoreApplication::translate("addNewBook", "\344\270\215\345\226\234\346\254\242", nullptr));
        QListWidgetItem *___qlistwidgetitem40 = listWidget->item(40);
        ___qlistwidgetitem40->setText(QCoreApplication::translate("addNewBook", "\345\230\262\350\256\275", nullptr));
        QListWidgetItem *___qlistwidgetitem41 = listWidget->item(41);
        ___qlistwidgetitem41->setText(QCoreApplication::translate("addNewBook", "\345\244\247\347\254\221", nullptr));
        QListWidgetItem *___qlistwidgetitem42 = listWidget->item(42);
        ___qlistwidgetitem42->setText(QCoreApplication::translate("addNewBook", "\351\234\207\346\203\212", nullptr));
        QListWidgetItem *___qlistwidgetitem43 = listWidget->item(43);
        ___qlistwidgetitem43->setText(QCoreApplication::translate("addNewBook", "\347\264\257", nullptr));
        QListWidgetItem *___qlistwidgetitem44 = listWidget->item(44);
        ___qlistwidgetitem44->setText(QCoreApplication::translate("addNewBook", "\345\206\215\346\254\241\345\244\247\345\260\217", nullptr));
        QListWidgetItem *___qlistwidgetitem45 = listWidget->item(45);
        ___qlistwidgetitem45->setText(QCoreApplication::translate("addNewBook", "\346\227\240\350\201\212", nullptr));
        QListWidgetItem *___qlistwidgetitem46 = listWidget->item(46);
        ___qlistwidgetitem46->setText(QCoreApplication::translate("addNewBook", "\345\223\255\345\223\255", nullptr));
        QListWidgetItem *___qlistwidgetitem47 = listWidget->item(47);
        ___qlistwidgetitem47->setText(QCoreApplication::translate("addNewBook", "\350\272\253\344\275\223\351\200\220\346\270\220\345\203\265\347\241\254", nullptr));
        QListWidgetItem *___qlistwidgetitem48 = listWidget->item(48);
        ___qlistwidgetitem48->setText(QCoreApplication::translate("addNewBook", "\346\230\217\346\230\217\346\254\262\347\235\241", nullptr));
        QListWidgetItem *___qlistwidgetitem49 = listWidget->item(49);
        ___qlistwidgetitem49->setText(QCoreApplication::translate("addNewBook", "\351\230\277\345\267\264\351\230\277\345\267\264", nullptr));
        QListWidgetItem *___qlistwidgetitem50 = listWidget->item(50);
        ___qlistwidgetitem50->setText(QCoreApplication::translate("addNewBook", "\346\204\237\350\247\211\350\211\257\345\245\275", nullptr));
        QListWidgetItem *___qlistwidgetitem51 = listWidget->item(51);
        ___qlistwidgetitem51->setText(QCoreApplication::translate("addNewBook", "OMG", nullptr));
        QListWidgetItem *___qlistwidgetitem52 = listWidget->item(52);
        ___qlistwidgetitem52->setText(QCoreApplication::translate("addNewBook", "\351\245\277\344\272\206", nullptr));
        QListWidgetItem *___qlistwidgetitem53 = listWidget->item(53);
        ___qlistwidgetitem53->setText(QCoreApplication::translate("addNewBook", "\347\210\261\345\206\222\351\231\251\347\232\204\346\234\265\346\213\211", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("addNewBook", "\345\210\233\345\273\272\346\226\260\346\234\254\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewBook: public Ui_addNewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWBOOK_H
