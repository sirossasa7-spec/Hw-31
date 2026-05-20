#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(double p, double s, int y, int d)
{
    price = p;
    maxSpeed = s;
    year = y;
    doors = d;
}

string Car::getType() const
{
    return "Car";
}

void Car::show() const
{
    cout << "Car\n";
    cout << "Price: " << price << endl;
    cout << "Speed: " << maxSpeed << endl;
    cout << "Year: " << year << endl;
    cout << "Doors: " << doors << endl;
}