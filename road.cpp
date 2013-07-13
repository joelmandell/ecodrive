#include "road.h"
#include <QGraphicsScene>
#include <QDebug>

Road::Road() {

    //What does the data in QVector<float> roadPattern represent?
    //First, the index represent the distance and set value is the elevation.
    roadPattern = new QVector<float>();
}

Road::~Road() {

}

QGraphicsScene *Road::paintRoad()
{
    QGraphicsScene *scene = new QGraphicsScene();

    int y=0;

    for(int i=0;i<roadPattern->count();i++)
    {
        scene->addEllipse(i*5, roadPattern->at(i), 2, 2, QPen(Qt::darkGray), QBrush(Qt::SolidPattern));
    }

    return scene;
}

void Road::roadBuilder(float distance, float elevation)
{

}

// void Road::addHill - method description
/*
 This method is used to add hills to the roat that the car is going to drive on during simulation
 Some description and later on ascii-art to show what the arguments do...

 hillAltitude = What the peak altitude of the hill should be, let's say 10m.
 upHillDistanceLength=50m
 and downHillDistanceLength=100m

 We assume that the road before has no alltitude
 Let's make some ascii art to describe the added hill to the road.

                  Peak altitude:
                       10m

                       .
                    .     .
                 .           .
. . . . .  .  .                 .
                                   .
                                      .
                                         .
                                            .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .

*/
void Road::addHill(float hillElevation=20, float upHillDistanceLength=75, float downHillDistanceLength=0 )
{
    //Comments on example values that is the standard arguments.
    //User selects a hill with elevation 20m at its peak, and the distance length of the up hill until it
    //reaches its peak should be 75m and no downhill, it is just going to be a straight road :=)

    float averageElevationPerMeter=hillElevation/upHillDistanceLength;
    float elevation=roadPattern->last()-roadPattern->last()*2; //Get last elevation and change sign (from negative to positive and vice versa)

    qDebug() << "Last elevation was:" << elevation;

    for(int i=0;i<upHillDistanceLength;i++)
    {
        roadPattern->append(0-elevation); //The 0-raise calculation is because it need to be negative value when there is an up-hill.

        elevation+=averageElevationPerMeter;
    }

    elevation=roadPattern->last();

    for(int i=0;i<downHillDistanceLength;i++)
    {
        if(downHillDistanceLength==0) break;
        roadPattern->append(elevation);
        elevation+=averageElevationPerMeter;
    }

}

void Road::addStraightRoad(float distanceLength)
{
    //Use this, because we will add straight road on same elevation as previous road-"block".
    float lastElevation=roadPattern->last();

    for(float i=0;i<distanceLength;i++)
    {
        roadPattern->append(lastElevation);
        lastElevation=roadPattern->last();
    }
}

//This will be used later in futer when automatic simulation mode
//so AI can "see" what awaits him in at a selected distance.
void Road::lookAheadOnRoad(float meters) {

}
