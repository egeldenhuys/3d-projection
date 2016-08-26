#ifndef POINT2D_H
#define POINT2D_H

class Point2D
{
public:
    Point2D();
    Point2D(double x, double y);

    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    
private:
    double x;
    double y;
};

#endif
