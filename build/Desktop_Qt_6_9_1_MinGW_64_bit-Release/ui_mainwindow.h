/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *mainWidget;
    QGridLayout *gridLayout_2;
    QPushButton *toggleThemeBtn;
    QLineEdit *display;
    QWidget *padWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *numWidget;
    QGridLayout *gridLayout_3;
    QPushButton *button9;
    QPushButton *button5;
    QPushButton *button3;
    QPushButton *button8;
    QPushButton *button4;
    QPushButton *button0;
    QPushButton *button7;
    QPushButton *button6;
    QPushButton *backspaceButton;
    QPushButton *button1;
    QPushButton *buttonDot;
    QPushButton *button2;
    QPushButton *buttonCloseBracket;
    QPushButton *buttonOpenBracket;
    QPushButton *buttonClear;
    QWidget *opWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *buttonDiv;
    QPushButton *buttonMul;
    QPushButton *buttonAdd;
    QPushButton *buttonSub;
    QPushButton *buttonEqual;
    QLabel *calcHistory;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(372, 532);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainWidget = new QWidget(centralwidget);
        mainWidget->setObjectName("mainWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWidget->sizePolicy().hasHeightForWidth());
        mainWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        mainWidget->setFont(font);
        gridLayout_2 = new QGridLayout(mainWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(5);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        toggleThemeBtn = new QPushButton(mainWidget);
        toggleThemeBtn->setObjectName("toggleThemeBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toggleThemeBtn->sizePolicy().hasHeightForWidth());
        toggleThemeBtn->setSizePolicy(sizePolicy1);
        toggleThemeBtn->setMinimumSize(QSize(90, 30));
        toggleThemeBtn->setMaximumSize(QSize(90, 30));
        QFont font1;
        font1.setPointSize(8);
        toggleThemeBtn->setFont(font1);

        gridLayout_2->addWidget(toggleThemeBtn, 0, 0, 1, 1, Qt::AlignmentFlag::AlignLeft);

        display = new QLineEdit(mainWidget);
        display->setObjectName("display");
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(22);
        display->setFont(font2);
        display->setAutoFillBackground(false);
        display->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        display->setFrame(true);
        display->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);
        display->setReadOnly(true);

        gridLayout_2->addWidget(display, 5, 0, 1, 1, Qt::AlignmentFlag::AlignBottom);

        padWidget = new QWidget(mainWidget);
        padWidget->setObjectName("padWidget");
        sizePolicy.setHeightForWidth(padWidget->sizePolicy().hasHeightForWidth());
        padWidget->setSizePolicy(sizePolicy);
        padWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(padWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        numWidget = new QWidget(padWidget);
        numWidget->setObjectName("numWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(80);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(numWidget->sizePolicy().hasHeightForWidth());
        numWidget->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(numWidget);
        gridLayout_3->setSpacing(1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        button9 = new QPushButton(numWidget);
        button9->setObjectName("button9");
        sizePolicy.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy);
        button9->setFont(font);

        gridLayout_3->addWidget(button9, 1, 4, 1, 1);

        button5 = new QPushButton(numWidget);
        button5->setObjectName("button5");
        sizePolicy.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy);
        button5->setFont(font);

        gridLayout_3->addWidget(button5, 2, 3, 1, 1);

        button3 = new QPushButton(numWidget);
        button3->setObjectName("button3");
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button3->setFont(font);

        gridLayout_3->addWidget(button3, 3, 4, 1, 1);

        button8 = new QPushButton(numWidget);
        button8->setObjectName("button8");
        sizePolicy.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy);
        button8->setFont(font);

        gridLayout_3->addWidget(button8, 1, 3, 1, 1);

        button4 = new QPushButton(numWidget);
        button4->setObjectName("button4");
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);
        button4->setFont(font);

        gridLayout_3->addWidget(button4, 2, 1, 1, 1);

        button0 = new QPushButton(numWidget);
        button0->setObjectName("button0");
        sizePolicy.setHeightForWidth(button0->sizePolicy().hasHeightForWidth());
        button0->setSizePolicy(sizePolicy);
        button0->setFont(font);

        gridLayout_3->addWidget(button0, 4, 3, 1, 1);

        button7 = new QPushButton(numWidget);
        button7->setObjectName("button7");
        sizePolicy.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy);
        button7->setFont(font);

        gridLayout_3->addWidget(button7, 1, 1, 1, 1);

        button6 = new QPushButton(numWidget);
        button6->setObjectName("button6");
        sizePolicy.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy);
        button6->setFont(font);

        gridLayout_3->addWidget(button6, 2, 4, 1, 1);

        backspaceButton = new QPushButton(numWidget);
        backspaceButton->setObjectName("backspaceButton");
        sizePolicy.setHeightForWidth(backspaceButton->sizePolicy().hasHeightForWidth());
        backspaceButton->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Wingdings 3")});
        font3.setPointSize(16);
        backspaceButton->setFont(font3);
        backspaceButton->setMouseTracking(true);
        backspaceButton->setTabletTracking(false);
        backspaceButton->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        backspaceButton->setAcceptDrops(false);
        backspaceButton->setCheckable(false);
        backspaceButton->setChecked(false);
        backspaceButton->setAutoRepeat(false);
        backspaceButton->setAutoExclusive(false);

        gridLayout_3->addWidget(backspaceButton, 4, 4, 1, 1);

        button1 = new QPushButton(numWidget);
        button1->setObjectName("button1");
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);
        button1->setFont(font);

        gridLayout_3->addWidget(button1, 3, 1, 1, 1);

        buttonDot = new QPushButton(numWidget);
        buttonDot->setObjectName("buttonDot");
        sizePolicy.setHeightForWidth(buttonDot->sizePolicy().hasHeightForWidth());
        buttonDot->setSizePolicy(sizePolicy);
        buttonDot->setFont(font);

        gridLayout_3->addWidget(buttonDot, 4, 1, 1, 1);

        button2 = new QPushButton(numWidget);
        button2->setObjectName("button2");
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);
        button2->setFont(font);

        gridLayout_3->addWidget(button2, 3, 3, 1, 1);

        buttonCloseBracket = new QPushButton(numWidget);
        buttonCloseBracket->setObjectName("buttonCloseBracket");
        sizePolicy.setHeightForWidth(buttonCloseBracket->sizePolicy().hasHeightForWidth());
        buttonCloseBracket->setSizePolicy(sizePolicy);
        buttonCloseBracket->setFont(font);

        gridLayout_3->addWidget(buttonCloseBracket, 0, 4, 1, 1);

        buttonOpenBracket = new QPushButton(numWidget);
        buttonOpenBracket->setObjectName("buttonOpenBracket");
        sizePolicy.setHeightForWidth(buttonOpenBracket->sizePolicy().hasHeightForWidth());
        buttonOpenBracket->setSizePolicy(sizePolicy);
        buttonOpenBracket->setFont(font);

        gridLayout_3->addWidget(buttonOpenBracket, 0, 3, 1, 1);

        buttonClear = new QPushButton(numWidget);
        buttonClear->setObjectName("buttonClear");
        sizePolicy.setHeightForWidth(buttonClear->sizePolicy().hasHeightForWidth());
        buttonClear->setSizePolicy(sizePolicy);
        buttonClear->setFont(font);

        gridLayout_3->addWidget(buttonClear, 0, 1, 1, 1);


        horizontalLayout->addWidget(numWidget);

        opWidget = new QWidget(padWidget);
        opWidget->setObjectName("opWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(40);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(opWidget->sizePolicy().hasHeightForWidth());
        opWidget->setSizePolicy(sizePolicy3);
        opWidget->setFont(font);
        verticalLayout_2 = new QVBoxLayout(opWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonDiv = new QPushButton(opWidget);
        buttonDiv->setObjectName("buttonDiv");
        sizePolicy.setHeightForWidth(buttonDiv->sizePolicy().hasHeightForWidth());
        buttonDiv->setSizePolicy(sizePolicy);
        buttonDiv->setFont(font2);
        buttonDiv->setMouseTracking(true);
        buttonDiv->setTabletTracking(false);
        buttonDiv->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        buttonDiv->setAcceptDrops(false);
        buttonDiv->setCheckable(false);
        buttonDiv->setChecked(false);
        buttonDiv->setAutoRepeat(false);
        buttonDiv->setAutoExclusive(false);

        verticalLayout_2->addWidget(buttonDiv);

        buttonMul = new QPushButton(opWidget);
        buttonMul->setObjectName("buttonMul");
        sizePolicy.setHeightForWidth(buttonMul->sizePolicy().hasHeightForWidth());
        buttonMul->setSizePolicy(sizePolicy);
        buttonMul->setFont(font2);
        buttonMul->setMouseTracking(true);
        buttonMul->setTabletTracking(false);
        buttonMul->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        buttonMul->setAcceptDrops(false);
        buttonMul->setCheckable(false);
        buttonMul->setChecked(false);
        buttonMul->setAutoRepeat(false);
        buttonMul->setAutoExclusive(false);

        verticalLayout_2->addWidget(buttonMul);

        buttonAdd = new QPushButton(opWidget);
        buttonAdd->setObjectName("buttonAdd");
        buttonAdd->setEnabled(true);
        sizePolicy.setHeightForWidth(buttonAdd->sizePolicy().hasHeightForWidth());
        buttonAdd->setSizePolicy(sizePolicy);
        buttonAdd->setFont(font2);
        buttonAdd->setMouseTracking(true);
        buttonAdd->setTabletTracking(false);
        buttonAdd->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        buttonAdd->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        buttonAdd->setAcceptDrops(false);
        buttonAdd->setAutoFillBackground(false);
        buttonAdd->setCheckable(false);
        buttonAdd->setChecked(false);
        buttonAdd->setAutoRepeat(false);
        buttonAdd->setAutoExclusive(false);
        buttonAdd->setAutoDefault(false);
        buttonAdd->setFlat(false);

        verticalLayout_2->addWidget(buttonAdd);

        buttonSub = new QPushButton(opWidget);
        buttonSub->setObjectName("buttonSub");
        sizePolicy.setHeightForWidth(buttonSub->sizePolicy().hasHeightForWidth());
        buttonSub->setSizePolicy(sizePolicy);
        buttonSub->setFont(font2);
        buttonSub->setMouseTracking(true);
        buttonSub->setTabletTracking(false);
        buttonSub->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        buttonSub->setAcceptDrops(false);
        buttonSub->setCheckable(false);
        buttonSub->setChecked(false);
        buttonSub->setAutoRepeat(false);
        buttonSub->setAutoExclusive(false);

        verticalLayout_2->addWidget(buttonSub);

        buttonEqual = new QPushButton(opWidget);
        buttonEqual->setObjectName("buttonEqual");
        sizePolicy.setHeightForWidth(buttonEqual->sizePolicy().hasHeightForWidth());
        buttonEqual->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(22);
        buttonEqual->setFont(font4);

        verticalLayout_2->addWidget(buttonEqual);


        horizontalLayout->addWidget(opWidget);


        gridLayout_2->addWidget(padWidget, 6, 0, 1, 1, Qt::AlignmentFlag::AlignBottom);

        calcHistory = new QLabel(mainWidget);
        calcHistory->setObjectName("calcHistory");
        sizePolicy1.setHeightForWidth(calcHistory->sizePolicy().hasHeightForWidth());
        calcHistory->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setPointSize(18);
        calcHistory->setFont(font5);
        calcHistory->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);

        gridLayout_2->addWidget(calcHistory, 1, 0, 3, 1);


        gridLayout->addWidget(mainWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        buttonAdd->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toggleThemeBtn->setText(QCoreApplication::translate("MainWindow", "Dark Mode", nullptr));
        display->setText(QString());
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        backspaceButton->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        buttonDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        buttonCloseBracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        buttonOpenBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        buttonDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        buttonMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        buttonSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        calcHistory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
