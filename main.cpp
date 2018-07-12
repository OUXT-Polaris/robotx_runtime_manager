#include "robotx_runtime_manager_mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    robotx_runtime_manager_mainwindow w;
    w.show();

    return a.exec();
}
