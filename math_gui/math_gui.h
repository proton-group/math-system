#ifndef MATH_GUI_H
#define MATH_GUI_H

#include <QApplication>
#include <QWidget>
#include <QWindow>
#include <QPushButton>
#include <QMainWindow>
#include <QHBoxLayout>

class Window : public QMainWindow {
public:
  Window();
  void buttons();
private:
  QPushButton *button;
  QHBoxLayout *hlayout;
};
#endif