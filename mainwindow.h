#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    void onDigitClicked();
    void onOperatorClicked();
    void onEqualClicked();
    void onClearClicked();
    void onBackspaceClicked();
    void keyPressEvent(QKeyEvent *event) override;

    QString displayText;
    double result = 0.0;
    int dotCheck = 0;
    QString history[6];

    void toggleTheme();
    bool isDarkMode = true;

};
#endif // MAINWINDOW_H
