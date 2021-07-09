#include <math_gui.h>

Window::Window(QApplication *a) {
    this->resize(1280, 720);
    this->setWindowTitle("Math System");
    //hlayout = new QHBoxLayout(this);
    app = a;
    //buttons();
    menu();
}

void Window::menu(){
    QMenuBar *mainmenu = new QMenuBar(nullptr);
    QMenu *filemenu = new QMenu("File");
    QMenu *setmenu = new QMenu("Settings");
    filemenu -> addAction("New", this, SLOT(newfile(bool)), Qt::CTRL | Qt::Key_N);
    mainmenu -> addMenu(filemenu);
    mainmenu -> addSeparator();
    mainmenu -> addMenu(setmenu);
    this -> setMenuBar(mainmenu);
}

void Window::newfile(bool a) {
    fm.run();
}

void Window::buttons() {
    button = new QPushButton("&hello world", this);
    //hlayout -> addWidget(button);
}

Filemanager::Filemanager() {
    this -> resize(620, 480);
    this -> setWindowTitle("Choose .math");
    QWidget *window = new QWidget();
    QGridLayout *layout = new QGridLayout();
    QLineEdit pwd;
    layout -> addWidget(pwd, 0, 0);
    window -> setLayout(layout);
    this -> setCentralWidget(window);
}
void Filemanager::run() {
    this -> show();
}

