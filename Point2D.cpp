#include "Point2D.h"

Point2D::Point2D()
{
    x = 0;
    y = 0;
}

Point2D::Point2D(double x, double y)
{
    this->x = x;
    this->y = y;
}

double Point2D::getX() const
{
    return x;
}

double Point2D::getY() const
{
    return y;
}

void Point2D::setX(double x)
{
    this->x = x;
}

void Point2D::setY(double y)
{
    this->y = y;
}
