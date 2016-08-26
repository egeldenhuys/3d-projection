#include "Point3D.h"

Point3D::Point3D() : Point2D()
{
    z = 0;
}

Point3D::Point3D(double x, double y, double z) : Point2D(x, y)
{
    this->z = z;
}

double Point3D::getZ()
{
    return z;
}

void Point3D::setZ(double z)
{
    this->z = z;
}
