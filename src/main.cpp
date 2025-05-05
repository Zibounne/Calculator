// src/main.cpp
#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("Calculator");
    window.resize(300, 400);
    window.show();

    return app.exec();
}
