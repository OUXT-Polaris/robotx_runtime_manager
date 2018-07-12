#ifndef ROBOTX_RUNTIME_MANAGER_MAINWINDOW_H
#define ROBOTX_RUNTIME_MANAGER_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class robotx_runtime_manager_mainwindow;
}

class robotx_runtime_manager_mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit robotx_runtime_manager_mainwindow(QWidget *parent = 0);
    ~robotx_runtime_manager_mainwindow();

private:
    Ui::robotx_runtime_manager_mainwindow *ui;
};

#endif // ROBOTX_RUNTIME_MANAGER_MAINWINDOW_H
