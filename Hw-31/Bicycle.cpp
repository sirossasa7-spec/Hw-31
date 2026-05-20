#include "Bicycle.h"
#include <iostream>

using namespace std;

Bicycle::Bicycle(double p, double s, int y, bool g)
{
    price = p;
    maxSpeed = s;
    year = y;
    hasGear = g;
}

string Bicycle::getType() const
{
    return "Bicycle";
}

void Bicycle::show() const
{
    cout << "Bicycle\n";
    cout << "Price: " << price << endl;
    cout << "Speed: " << maxSpeed << endl;
    cout << "Year: " << year << endl;
    cout << "Gear: ";

    if (hasGear)
        cout << "Yes\n";
    else
        cout << "No\n";
}