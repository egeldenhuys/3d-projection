#ifndef POINT3D_H
#define POINT3D_H

#include "Point2D.h"

class Point3D : public Point2D
{
public:
    Point3D();
    Point3D(double x, double y, double z);
    void setZ(double z);
    double getZ();

private:
    double z;
};

#endif
