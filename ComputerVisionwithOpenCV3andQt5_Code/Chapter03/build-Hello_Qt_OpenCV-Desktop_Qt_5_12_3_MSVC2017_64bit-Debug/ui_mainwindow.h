/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTurkish;
    QAction *actionGerman;
    QAction *actionEnglish;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *topHorizontalLayout;
    QLabel *inputLabel;
    QLineEdit *inputLineEdit;
    QPushButton *inputPushButton;
    QGroupBox *filterTypeGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *medianBlurRadioButton;
    QRadioButton *gaussianBlurRadioButton;
    QHBoxLayout *bottomHorizontalLayout;
    QLabel *outputLabel;
    QLineEdit *outputLineEdit;
    QPushButton *outputPushButton;
    QCheckBox *displayImageCheckBox;
    QMenuBar *menuBar;
    QMenu *menuLanguage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(560, 296);
        MainWindow->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"font: 75 11pt;\n"
"background-color: rgb(220, 220, 220);\n"
"}\n"
"QPushButton, QLineEdit, QGroupBox\n"
"{\n"
"border: 2px solid rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"min-width: 80px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton\n"
"{\n"
"background-color: rgb(0, 255, 0);\n"
"}\n"
"QLineEdit\n"
"{\n"
"background-color: rgb(0, 170, 255);\n"
"}\n"
"QPushButton:hover, QRadioButton:hover, QCheckBox:hover\n"
"{\n"
"color: red;\n"
"}\n"
"QPushButton:!hover, QRadioButton:!hover, QCheckBox:!hover\n"
"{\n"
"color: black;\n"
"}"));
        actionTurkish = new QAction(MainWindow);
        actionTurkish->setObjectName(QString::fromUtf8("actionTurkish"));
        actionGerman = new QAction(MainWindow);
        actionGerman->setObjectName(QString::fromUtf8("actionGerman"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topHorizontalLayout = new QHBoxLayout();
        topHorizontalLayout->setSpacing(6);
        topHorizontalLayout->setObjectName(QString::fromUtf8("topHorizontalLayout"));
        inputLabel = new QLabel(centralWidget);
        inputLabel->setObjectName(QString::fromUtf8("inputLabel"));

        topHorizontalLayout->addWidget(inputLabel);

        inputLineEdit = new QLineEdit(centralWidget);
        inputLineEdit->setObjectName(QString::fromUtf8("inputLineEdit"));

        topHorizontalLayout->addWidget(inputLineEdit);

        inputPushButton = new QPushButton(centralWidget);
        inputPushButton->setObjectName(QString::fromUtf8("inputPushButton"));

        topHorizontalLayout->addWidget(inputPushButton);


        verticalLayout->addLayout(topHorizontalLayout);

        filterTypeGroupBox = new QGroupBox(centralWidget);
        filterTypeGroupBox->setObjectName(QString::fromUtf8("filterTypeGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(filterTypeGroupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        medianBlurRadioButton = new QRadioButton(filterTypeGroupBox);
        medianBlurRadioButton->setObjectName(QString::fromUtf8("medianBlurRadioButton"));
        medianBlurRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(medianBlurRadioButton);

        gaussianBlurRadioButton = new QRadioButton(filterTypeGroupBox);
        gaussianBlurRadioButton->setObjectName(QString::fromUtf8("gaussianBlurRadioButton"));

        horizontalLayout_2->addWidget(gaussianBlurRadioButton);


        verticalLayout->addWidget(filterTypeGroupBox);

        bottomHorizontalLayout = new QHBoxLayout();
        bottomHorizontalLayout->setSpacing(6);
        bottomHorizontalLayout->setObjectName(QString::fromUtf8("bottomHorizontalLayout"));
        outputLabel = new QLabel(centralWidget);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));

        bottomHorizontalLayout->addWidget(outputLabel);

        outputLineEdit = new QLineEdit(centralWidget);
        outputLineEdit->setObjectName(QString::fromUtf8("outputLineEdit"));

        bottomHorizontalLayout->addWidget(outputLineEdit);

        outputPushButton = new QPushButton(centralWidget);
        outputPushButton->setObjectName(QString::fromUtf8("outputPushButton"));

        bottomHorizontalLayout->addWidget(outputPushButton);


        verticalLayout->addLayout(bottomHorizontalLayout);

        displayImageCheckBox = new QCheckBox(centralWidget);
        displayImageCheckBox->setObjectName(QString::fromUtf8("displayImageCheckBox"));

        verticalLayout->addWidget(displayImageCheckBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 560, 26));
        menuLanguage = new QMenu(menuBar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionGerman);
        menuLanguage->addAction(actionTurkish);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Hello_Qt_OpenCV", nullptr));
        actionTurkish->setText(QApplication::translate("MainWindow", "Turkish", nullptr));
        actionGerman->setText(QApplication::translate("MainWindow", "German", nullptr));
        actionEnglish->setText(QApplication::translate("MainWindow", "English", nullptr));
        inputLabel->setText(QApplication::translate("MainWindow", "Input Image :", nullptr));
        inputPushButton->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        filterTypeGroupBox->setTitle(QApplication::translate("MainWindow", "Filter type", nullptr));
        medianBlurRadioButton->setText(QApplication::translate("MainWindow", "Median Blur", nullptr));
        gaussianBlurRadioButton->setText(QApplication::translate("MainWindow", "Gaussian Blur", nullptr));
        outputLabel->setText(QApplication::translate("MainWindow", "Output Image :", nullptr));
        outputPushButton->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        displayImageCheckBox->setText(QApplication::translate("MainWindow", "Display Image After Saving", nullptr));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
