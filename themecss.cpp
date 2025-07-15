#include "ui_mainwindow.h"

void darkMode(){
    QString darkStyle = R"(
    QMainWindow,
    QWidget{
        margin: 0;
        padding: 0;
    }
    #mainWidget{
        background: background: #252525;;
    }
    #calcHistory,
    #display{
        background: transparent;
        padding-left: 3px;
        border: none;
    }

    #padWidget{
        background: qlineargradient(
            spread:pad,
            x1:1, y1:0,
            x2:0, y2:1,
            stop:0 #252525,
            stop:1 #404040);
    }

    #button1,
    #button2,
    #button3,
    #button4,
    #button5,
    #button6,
    #button7,
    #button8,
    #button9,
    #button0,
    #buttonDot,
    #backspaceButton{
        padding: 6px;
        background: transparent;
        color: white;
        border: none;
    }

    #buttonAdd,
    #buttonSub,
    #buttonMul,
    #buttonDiv,
    #buttonCloseBracket,
    #buttonOpenBracket{
        padding: 6px;
        color: #43B0AD;
        background: transparent;
        border: none;
    }

    #buttonClear{
        color: #C87B82;
        background: transparent;
        border: none;
    }

    #buttonEqual{
        margin: 4px;
        padding: 6px;
        background: qlineargradient(
            spread:pad,
            x1:0, y1:0,
            x2:1, y2:1,
            stop:0 #36B9AB,
            stop:1 #278893);
        border-radius: 14px;
    }

    #buttonEqual::hover{
        background: qlineargradient(
            spread:pad,
            x1:0, y1:0,
            x2:1, y2:1,
            stop:0 #26A99B,
            stop:1 #177883);
    }

    #button1::hover,
    #button2::hover,
    #button3::hover,
    #button4::hover,
    #button5::hover,
    #button6::hover,
    #button7::hover,
    #button8::hover,
    #button9::hover,
    #button0::hover,
    #buttonDot::hover,
    #buttonClear::hover,
    #backspaceButton::hover,
    #buttonAdd::hover,
    #buttonSub::hover,
    #buttonMul::hover,
    #buttonDiv::hover,
    #buttonCloseBracket::hover,
    #buttonOpenBracket::hover{
        background: rgba(0,0,0,0.1);
    }

    #toggleThemeBtn{
        font-weight: bold;
        margin: 3px;
        padding: 0;
        color: white;
        background: rgba(255,255,255,0.2);
        border-radius: 5px;
    }
    #toggleThemeBtn::hover{
        background: rgba(255,255,255,0.1);
    }
    )";
    qApp->setStyleSheet(darkStyle);
}
void lightMode(){
    QString lightStyle = R"(
    QMainWindow,
    QWidget{
        margin: 0;
        padding: 0;
    }
    #mainWidget{
        background: qlineargradient(
            spread:pad,
            x1:0, y1:0,
            x2:1, y2:1,
            stop:0 #E3E9ED,
            stop:1 #D1DAE5);
    }
    #calcHistory,
    #display{
        color: black;
        background: transparent;
        padding-left: 3px;
        border: none;
    }

    #padWidget{
        background: #F6F8FA;
    }

    #button1,
    #button2,
    #button3,
    #button4,
    #button5,
    #button6,
    #button7,
    #button8,
    #button9,
    #button0,
    #buttonDot,
    #backspaceButton{
        padding: 6px;
        background: transparent;
        color: black;
        border: none;
    }

    #buttonAdd,
    #buttonSub,
    #buttonMul,
    #buttonDiv,
    #buttonCloseBracket,
    #buttonOpenBracket{
        padding: 6px;
        color: #43B0AD;
        background: transparent;
        border: none;
    }

    #buttonClear{
        color: #C87B82;
        background: transparent;
        border: none;
    }

    #buttonEqual{
        margin: 4px;
        padding: 6px;
        background: qlineargradient(
            spread:pad,
            x1:0, y1:0,
            x2:1, y2:1,
            stop:0 #36B9AB,
            stop:1 #278893);
        border-radius: 14px;
    }

    #buttonEqual::hover{
        background: qlineargradient(
            spread:pad,
            x1:0, y1:0,
            x2:1, y2:1,
            stop:0 #26A99B,
            stop:1 #177883);
    }

    #button1::hover,
    #button2::hover,
    #button3::hover,
    #button4::hover,
    #button5::hover,
    #button6::hover,
    #button7::hover,
    #button8::hover,
    #button9::hover,
    #button0::hover,
    #buttonDot::hover,
    #buttonClear::hover,
    #backspaceButton::hover,
    #buttonAdd::hover,
    #buttonSub::hover,
    #buttonMul::hover,
    #buttonDiv::hover,
    #buttonCloseBracket::hover,
    #buttonOpenBracket::hover{
        background: rgba(0,0,0,0.1);
    }

    #toggleThemeBtn{
        font-weight: bold;
        margin: 3px;
        padding: 0;
        color: black;
        background: #FfFfFf;
    }
    #toggleThemeBtn::hover{
        background: rgba(0,0,0,0.1);
    }

    )";
    qApp->setStyleSheet(lightStyle);
}
