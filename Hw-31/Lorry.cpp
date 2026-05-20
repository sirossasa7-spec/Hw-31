#include "Lorry.h"
#include <iostream>

using namespace std;

Lorry::Lorry(double p, double s, int y, double c)
{
    price = p;
    maxSpeed = s;
    year = y;
    loadCapacity = c;
}

string Lorry::getType() const
{
    return "Lorry";
}

void Lorry::show() const
{
    cout << "Lorry\n";
    cout << "Price: " << price << endl;
    cout << "Speed: " << maxSpeed << endl;
    cout << "Year: " << year << endl;
    cout << "Capacity: " << loadCapacity << endl;
}