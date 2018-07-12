#include "robotx_runtime_manager_mainwindow.h"
#include "ui_robotx_runtime_manager_mainwindow.h"

#include <QImage>
#include <QPixmap>

robotx_runtime_manager_mainwindow::robotx_runtime_manager_mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::robotx_runtime_manager_mainwindow)
{
    ui->setupUi(this);
}

robotx_runtime_manager_mainwindow::~robotx_runtime_manager_mainwindow()
{
    delete ui;
}
