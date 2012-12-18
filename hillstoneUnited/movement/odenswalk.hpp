#ifndef ODENSWALK_H
#define ODENSWALK_H

#include "movementbase.hpp"
#include "../MakeWalk/makewalk.hpp"

class OdensWalk : public MovementBase
{
public:
    OdensWalk(double _dest[]);
    ~OdensWalk();

    void setAngle(World& w, double joint[]);

    std::string getNextAngle(World& w);
private:
    MakeWalk mw;
    double dest[2];
    double joint[12];
};

#endif