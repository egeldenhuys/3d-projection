#include <iostream>
#include "Point2D.h"
#include "Point3D.h"

using namespace std;

int main()
{

    cout << "2D:" << endl;

    Point2D a(41, 22);

    cout << a.getX() << endl;
    cout << a.getY() << endl;

    cout << "\n3D:" << endl;
    Point3D b(69, 42, 777);

    cout << b.getX() << endl;
    cout << b.getY() << endl;
    cout << b.getZ() << endl;

    return 0;
}
