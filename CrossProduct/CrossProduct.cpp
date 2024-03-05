// CrossProduct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "CrossProduct.h"
#include"iostream"
using namespace std;
int main()
{
    cout << "This is program calculates the cross product for all 3 elements of both vectors.\n";

    float xv1,xv2,yv1,yv2,zv1,zv2,calcX,calcY,calcZ;

    cout << "input the X element of the first vector\n";
    cin >> xv1;

    cout << "input the Y element of the first vector\n";
    cin >> yv1;

    cout << "input the Z element of the first vector\n";
    cin >> zv1;

    cout << "input the X element of the second vector\n";
    cin >> xv2;

    cout << "input the Y element of the second vector\n";
    cin >> yv2;

    cout << "input the Z element of the second vector\n";
    cin >> zv2;

    calcX = (yv1 * zv2) - (zv1 * yv2);
    calcY = (zv1 * xv2) - (xv1 * zv2);
    calcZ = (xv1 * yv2) - (yv1 * xv2);

    cout << "the cross product for the x axis is: " << calcX << "\n\n";
    cout << "the cross product for the y axis is: " << calcY << "\n\n";
    cout << "the cross product for the z axis is: " << calcZ << "\n\n";

    return 0;
}
