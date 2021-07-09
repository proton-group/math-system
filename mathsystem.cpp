#include <math_gui.h>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Window win(&app);
    win.show();
    return app.exec();
}
