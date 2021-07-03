//пора писать хедер
#include <math_gui.h>

Window::Window() {
  this->resize(1280, 720);
  this->setWindowTitle("Math System");
  hlayout = new QHBoxLayout(this);
  buttons();
}

void Window::buttons()
{
  button = new QPushButton("&hello world", this);
  hlayout -> addWidget(button);
}


