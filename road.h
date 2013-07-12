#ifndef ROAD_H
#define ROAD_H

#include <QVector>

class Road
{

public:
    Road();
    ~Road();
    void lookAheadOnRoad(int meters);
    void addHill(int upHillAltitude, int upHillDistanceLength, int downHillDistanceLength );

private:
    QVector<int> roadPattern;
};

#endif // ROAD_H
