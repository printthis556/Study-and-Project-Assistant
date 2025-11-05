#include "MainWindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    auto *label = new QLabel("Hello, Qt!", this);
    setCentralWidget(label);
    setWindowTitle("Study and Project Assistant");
}
