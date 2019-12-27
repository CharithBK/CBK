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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QFrame *frame;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_browse;
    QGridLayout *gridLayout;
    QComboBox *image_type;
    QPushButton *btn_convert;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(354, 279);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/icons8-camera-50.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:#F0E68C;\n"
"border:1px soild gray;\n"
"padding:5px\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(0, 20));
        lineEdit->setMaximumSize(QSize(16777215, 20));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_browse = new QPushButton(centralwidget);
        btn_browse->setObjectName(QString::fromUtf8("btn_browse"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setBold(true);
        font.setWeight(75);
        btn_browse->setFont(font);
        btn_browse->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px soild gray;\n"
"padding:5px\n"
"}\n"
"QPushButton:Pressed{\n"
"\n"
"background-color:#A9A9A9;\n"
"border:1px soild gray;\n"
"padding:5px\n"
"}"));

        horizontalLayout->addWidget(btn_browse);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        image_type = new QComboBox(centralwidget);
        image_type->addItem(QString());
        image_type->addItem(QString());
        image_type->addItem(QString());
        image_type->addItem(QString());
        image_type->addItem(QString());
        image_type->setObjectName(QString::fromUtf8("image_type"));
        image_type->setFont(font);
        image_type->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"background-color:#C0C0C0;\n"
"border:1px soild gray;\n"
"padding:5px\n"
"}\n"
"QComboBox:Pressed{\n"
"\n"
"background-color:#A9A9A9;\n"
"border:1px soild gray;\n"
"padding:5px\n"
"}"));

        gridLayout->addWidget(image_type, 0, 0, 1, 1);

        btn_convert = new QPushButton(centralwidget);
        btn_convert->setObjectName(QString::fromUtf8("btn_convert"));
        btn_convert->setFont(font);
        btn_convert->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px soild gray;\n"
"padding:5px\n"
"}\n"
"QPushButton:Pressed{\n"
"\n"
"background-color:#A9A9A9;\n"
"border:1px soild gray;\n"
"padding:5px\n"
"}"));

        gridLayout->addWidget(btn_convert, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Image Converter", nullptr));
        btn_browse->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        image_type->setItemText(0, QCoreApplication::translate("MainWindow", "PNG", nullptr));
        image_type->setItemText(1, QCoreApplication::translate("MainWindow", "JPEG", nullptr));
        image_type->setItemText(2, QCoreApplication::translate("MainWindow", "BMP", nullptr));
        image_type->setItemText(3, QCoreApplication::translate("MainWindow", "TIFF", nullptr));
        image_type->setItemText(4, QCoreApplication::translate("MainWindow", "ICON", nullptr));

        btn_convert->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
