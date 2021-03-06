#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "road.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsScene *scene;

private:
    Ui::MainWindow *ui;
    Road *road;
};

#endif // MAINWINDOW_H
