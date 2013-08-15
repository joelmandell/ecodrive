#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    road = new Road();
    QGraphicsScene *scene = new QGraphicsScene();

//    QTimer *timer = new QTimer()


    ui->setupUi(this);
    this->showMaximized();


    road->addStraightRoad(50);
    road->addHill(150,75,50);
    //road->addStraightRoad(100);
    //road->addHill(150,75,35);
    road->paintRoad(scene);
    road->paintCar(scene);


    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}
