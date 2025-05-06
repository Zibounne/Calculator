// src/MainWindow.cpp
#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Calculator");
    setFixedSize(400, 500);
}

MainWindow::~MainWindow() {
    // Rien à nettoyer pour l'instant
}
