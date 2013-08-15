#ifndef ROAD_H
#define ROAD_H

#include <QVector>
#include <QGraphicsScene>

class Road
{

public:
    Road();
    ~Road();
    void lookAheadOnRoad(float meters);
    void addHill(float hillElevation, float upHillDistanceLength, float downHillDistanceLength );
    void addStraightRoad(float distanceLength);
    void roadBuilder(float distance, float elevation);
    QGraphicsScene *paintRoad(QGraphicsScene* scene);
    QGraphicsScene *paintCar(QGraphicsScene* scene, int speed);
    QGraphicsScene *paintCar(QGraphicsScene* scene);


private:
    QVector<float> *roadPattern;

};

#endif // ROAD_H
