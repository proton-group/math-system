#ifndef MATH_GUI_H
#define MATH_GUI_H

#include <QApplication>
#include <QWidget>
#include <QWindow>
#include <QPushButton>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QMenuBar>
#include <fstream>
#include <iostream>
#include <QAction>
#include <QGridLayout>
#include <QLineEdit>
class Filemanager : public QMainWindow {
Q_OBJECT
public: 
    Filemanager();
    void run();
};

#endif

class Window : public QMainWindow {
Q_OBJECT
public:
    Window(QApplication *a);
    void buttons();
    void menu();
public slots:
    void newfile(bool a);
private:
    Filemanager fm;
    QApplication *app;
    QPushButton *button;
    QHBoxLayout *hlayout;
};
