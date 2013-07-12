#include "road.h"

Road::Road() {
    roadPattern();
}

Road::~Road() {

}

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
void Road::addHill(int hillAltitude=0, int upHillDistanceLength=0, int downHillDistanceLength=0 )
{


}

void Road::lookAheadOnRoad(int meters) {

}
