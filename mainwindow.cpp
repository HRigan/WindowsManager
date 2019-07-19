#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subwindow.h"
#include "manager.h"
#include <iostream>
#include <stack>
#include<QString>
#include<QPushButton>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

static std::shared_ptr<Manager> unqManager(new Manager());
void MainWindow::on_pushButton_clicked()
{
    std::shared_ptr<SubWindow> unqSubWindow(new SubWindow());
    //std::shared_ptr<Manager> unqManager(new Manager());
    unqSubWindow->createWindow();
    unqManager->pushWindow(unqSubWindow);
}

void MainWindow::on_pushButton_2_clicked()
{
    if(!unqManager->isEmpty()){
     std::shared_ptr<SubWindow> unqSubWindow(unqManager->popWindow());
     unqSubWindow->deleteWindow();
    }
}
