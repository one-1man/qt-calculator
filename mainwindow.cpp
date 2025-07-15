#include "mainwindow.h"
#include "qevent.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QJSEngine>
#include "themecss.cpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowTitle("Calculator");

    // Backspace button
    connect(ui->backspaceButton, &QPushButton::clicked, this, &MainWindow::onBackspaceClicked);

    // Connect number buttons
    connect(ui->button0, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button1, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button2, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button3, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button4, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button5, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button6, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button7, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button8, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button9, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->buttonDot, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->buttonOpenBracket, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->buttonCloseBracket, &QPushButton::clicked, this, &MainWindow::onDigitClicked);

    // Operator buttons
    connect(ui->buttonAdd, &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->buttonSub, &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->buttonMul, &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->buttonDiv, &QPushButton::clicked, this, &MainWindow::onOperatorClicked);

    // Equal and Clear
    connect(ui->buttonEqual, &QPushButton::clicked, this, &MainWindow::onEqualClicked);
    connect(ui->buttonClear, &QPushButton::clicked, this, &MainWindow::onClearClicked);

    // Theme toggle button
    connect(ui->toggleThemeBtn, &QPushButton::clicked, this, &MainWindow::toggleTheme);

    darkMode();
}

void MainWindow::toggleTheme(){
    if (!isDarkMode) {
        // Dark Mode
        isDarkMode = true;
        darkMode();
        ui->toggleThemeBtn->setText("Dark Mode");
    } else {
        // Light Mode
        lightMode();
        isDarkMode = false;
        ui->toggleThemeBtn->setText("Light Mode");
    }
}

const int historyCount = 6;

void MainWindow::onBackspaceClicked(){
    displayText = ui->display->text();
    if(!displayText.isEmpty()){
        if(ui->display->text().right(1) == " "){
            displayText.chop(3);
        }
        else if(displayText == "Error"){
            displayText.chop(5);
        }
        else{
            displayText.chop(1);
        }
        ui->display->setText(displayText);
    }
}

void MainWindow::onDigitClicked(){
    displayText = ui->display->text();
    if((displayText == "Error") || displayText.startsWith("N") || displayText.startsWith("I")){
        displayText.clear();
    }
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QString digit = button->text();
    if(digit == "."){
        if(dotCheck){
            return;
        }
        else{
            dotCheck = 1;
        }
    }
    ui->display->setText(displayText + digit);
}

void MainWindow::onOperatorClicked(){
    displayText = ui->display->text();
    if((displayText == "Error") || displayText.startsWith("N") || displayText.startsWith("I")){
        displayText.clear();
    }
    if(ui->display->text().right(1) == " "){
        displayText.chop(3);
    }
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QString op = button->text();
    ui->display->setText(displayText + " " + op + " ");
    dotCheck = 0;
}

void MainWindow::onClearClicked() {
    if(ui->display->text() == "0"){
        ui->calcHistory->clear();
        for(int i{}; i < historyCount; i++){
            history[i] = " ";
        }
    }
    ui->display->setText("0");
}

void MainWindow::onEqualClicked(){
    displayText = ui->display->text();
    
    if (displayText.startsWith("E") || displayText.startsWith("N") || displayText.startsWith("I")) {
        return;
    }


    //calcualtion history
    for(int i = historyCount - 1; i > 0; i--){
        history[i] = history[i-1];
    }

    history[0] = ui->display->text();
    ui->calcHistory->setText(history[historyCount - 1]);

    for(int i{historyCount - 2}; i >= 0; i--){
        ui->calcHistory->setText(ui->calcHistory->text() + "\n" + history[i]);
    }

    //Calculation using JS
    QJSEngine engine;
    QJSValue result = engine.evaluate(displayText);

    if (result.isError()) {
        ui->display->setText("Error");
    } else {
        ui->display->setText(result.toString());
    }
}

//keyboard support
void MainWindow::keyPressEvent(QKeyEvent *event) {
    QString keyText = event->text();

    // If it's a digit (0–9)
    if (keyText.length() == 1 && keyText[0].isDigit()) {
        displayText = ui->display->text();
        if((displayText == "Error") || displayText.startsWith("N") || displayText.startsWith("I")){
            displayText.clear();
        }
        ui->display->setText(displayText + keyText);
    }

    //backspace
    else if (event->key() == Qt::Key_Backspace) {
        onBackspaceClicked();
    }

    //Enter as Equals
    else if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) {
        onEqualClicked();
    }

    //operators
    else if (keyText == "+" || keyText == "-" || keyText == "*" || keyText == "/") {
        displayText = ui->display->text();
        if(ui->display->text().right(1) == " "){
            displayText.chop(3);
        }
        else if((displayText == "Error") || displayText.startsWith("N") || displayText.startsWith("I")){
            displayText.clear();
        }
        ui->display->setText(displayText + " " + keyText + " ");
        dotCheck = 0;
    }

    //dot
    else if (keyText == ".") {
        if (!dotCheck) {
            ui->display->setText(ui->display->text() + ".");
            dotCheck = 1;
        }
    }

    //Brackets
    else if ((keyText == "(") || (keyText == ")")) {
            ui->display->setText(ui->display->text() + keyText);
    }

    //clear
    else if (event->key() == Qt::Key_C) {
        onClearClicked();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
