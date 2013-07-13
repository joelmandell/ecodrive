#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    road = new Road();
    ui->setupUi(this);
    this->showMaximized();

    road->addStraightRoad(100);
    road->addHill(150,75,50);
    road->addStraightRoad(100);
    road->addHill(150,75,35);


    ui->graphicsView->setScene(road->paintRoad());
}

MainWindow::~MainWindow()
{
    delete ui;
}
