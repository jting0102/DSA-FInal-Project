/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QListView *listView;
    QWidget *page_2;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1920, 1080);
        QPalette palette;
        QBrush brush(QColor(170, 196, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        QFont font;
        font.setPointSize(45);
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 196, 255);"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label->setPalette(palette1);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: white;\n"
"border-radius: 10px;"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label);

        horizontalWidget = new QWidget(centralwidget);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        sizePolicy.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy);
        QPalette palette2;
        QBrush brush2(QColor(64, 76, 149, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        horizontalWidget->setPalette(palette2);
        horizontalWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 76, 149);\n"
"border-style: solid;\n"
"border-color: rgb(64, 76, 149);\n"
"border-width: 5px;\n"
"border-radius: 10px;"));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(horizontalWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_2->setPalette(palette3);
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label_2);

        comboBox_2 = new QComboBox(horizontalWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        comboBox_2->setPalette(palette4);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setUnderline(false);
        font2.setKerning(true);
        comboBox_2->setFont(font2);
        comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-color: rgb(255, 255, 255);\n"
"border-width: 5px;\n"
"border-radius: 0px;"));

        horizontalLayout->addWidget(comboBox_2);

        label_3 = new QLabel(horizontalWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_3->setPalette(palette5);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        comboBox_3 = new QComboBox(horizontalWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        comboBox_3->setPalette(palette6);
        comboBox_3->setFont(font2);
        comboBox_3->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-color: rgb(255, 255, 255);\n"
"border-width: 5px;\n"
"border-radius: 0px;"));

        horizontalLayout->addWidget(comboBox_3);

        label_4 = new QLabel(horizontalWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_4->setPalette(palette7);
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        comboBox = new QComboBox(horizontalWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        comboBox->setPalette(palette8);
        comboBox->setFont(font2);
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-color: rgb(255, 255, 255);\n"
"border-width: 5px;\n"
"border-radius: 0px;"));

        horizontalLayout->addWidget(comboBox);

        label_5 = new QLabel(horizontalWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font1);

        horizontalLayout->addWidget(label_5);

        comboBox_4 = new QComboBox(horizontalWidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        QFont font3;
        font3.setPointSize(12);
        comboBox_4->setFont(font3);
        comboBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-color: rgb(255, 255, 255);\n"
"border-width: 5px;\n"
"border-radius: 0px;"));

        horizontalLayout->addWidget(comboBox_4);


        verticalLayout->addWidget(horizontalWidget);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listView = new QListView(page);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);"));

        horizontalLayout_2->addWidget(listView);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        label->setText(QCoreApplication::translate("MainWindow", "US Census Data Visualization", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select State:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Alabama", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Alaska", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Arizona", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Arkansas", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "California", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("MainWindow", "Colorado", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("MainWindow", "Connecticut", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("MainWindow", "Delaware", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("MainWindow", "Florida", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("MainWindow", "Georgia", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("MainWindow", "Hawaii", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("MainWindow", "Idaho", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("MainWindow", "Illinois", nullptr));
        comboBox_2->setItemText(13, QCoreApplication::translate("MainWindow", "Indiana", nullptr));
        comboBox_2->setItemText(14, QCoreApplication::translate("MainWindow", "Iowa", nullptr));
        comboBox_2->setItemText(15, QCoreApplication::translate("MainWindow", "Kansas", nullptr));
        comboBox_2->setItemText(16, QCoreApplication::translate("MainWindow", "Kentucky", nullptr));
        comboBox_2->setItemText(17, QCoreApplication::translate("MainWindow", "Louisiana", nullptr));
        comboBox_2->setItemText(18, QCoreApplication::translate("MainWindow", "Maine", nullptr));
        comboBox_2->setItemText(19, QCoreApplication::translate("MainWindow", "Maryland", nullptr));
        comboBox_2->setItemText(20, QCoreApplication::translate("MainWindow", "Massachusetts", nullptr));
        comboBox_2->setItemText(21, QCoreApplication::translate("MainWindow", "Michigan", nullptr));
        comboBox_2->setItemText(22, QCoreApplication::translate("MainWindow", "Minnesota", nullptr));
        comboBox_2->setItemText(23, QCoreApplication::translate("MainWindow", "Mississippi", nullptr));
        comboBox_2->setItemText(24, QCoreApplication::translate("MainWindow", "Missouri", nullptr));
        comboBox_2->setItemText(25, QCoreApplication::translate("MainWindow", "Montana", nullptr));
        comboBox_2->setItemText(26, QCoreApplication::translate("MainWindow", "Nebraska", nullptr));
        comboBox_2->setItemText(27, QCoreApplication::translate("MainWindow", "Nevada", nullptr));
        comboBox_2->setItemText(28, QCoreApplication::translate("MainWindow", "New Hampshire", nullptr));
        comboBox_2->setItemText(29, QCoreApplication::translate("MainWindow", "New Jersey", nullptr));
        comboBox_2->setItemText(30, QCoreApplication::translate("MainWindow", "New Mexico", nullptr));
        comboBox_2->setItemText(31, QCoreApplication::translate("MainWindow", "New York", nullptr));
        comboBox_2->setItemText(32, QCoreApplication::translate("MainWindow", "North Carolina", nullptr));
        comboBox_2->setItemText(33, QCoreApplication::translate("MainWindow", "North Dakota", nullptr));
        comboBox_2->setItemText(34, QCoreApplication::translate("MainWindow", "Ohio", nullptr));
        comboBox_2->setItemText(35, QCoreApplication::translate("MainWindow", "Oklahoma", nullptr));
        comboBox_2->setItemText(36, QCoreApplication::translate("MainWindow", "Oregon", nullptr));
        comboBox_2->setItemText(37, QCoreApplication::translate("MainWindow", "Pennsylvania", nullptr));
        comboBox_2->setItemText(38, QCoreApplication::translate("MainWindow", "Rhode Island", nullptr));
        comboBox_2->setItemText(39, QCoreApplication::translate("MainWindow", "South Carolina", nullptr));
        comboBox_2->setItemText(40, QCoreApplication::translate("MainWindow", "South Dakota", nullptr));
        comboBox_2->setItemText(41, QCoreApplication::translate("MainWindow", "Tennessee", nullptr));
        comboBox_2->setItemText(42, QCoreApplication::translate("MainWindow", "Texas", nullptr));
        comboBox_2->setItemText(43, QCoreApplication::translate("MainWindow", "Utah", nullptr));
        comboBox_2->setItemText(44, QCoreApplication::translate("MainWindow", "Vermont", nullptr));
        comboBox_2->setItemText(45, QCoreApplication::translate("MainWindow", "Virginia", nullptr));
        comboBox_2->setItemText(46, QCoreApplication::translate("MainWindow", "Washington", nullptr));
        comboBox_2->setItemText(47, QCoreApplication::translate("MainWindow", "West Virginia", nullptr));
        comboBox_2->setItemText(48, QCoreApplication::translate("MainWindow", "Wisconsin", nullptr));
        comboBox_2->setItemText(49, QCoreApplication::translate("MainWindow", "Wyoming", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Sort By:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "ID", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "Age", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "Income", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "Hispanic", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "View As:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Ascending", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Descending", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Data Structure:", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "Hash Table", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "Red/Black Tree", nullptr));

        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
