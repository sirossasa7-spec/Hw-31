#include "Vehicle.h"

Vehicle::Vehicle()
{
    price = 0;
    maxSpeed = 0;
    year = 0;
}

Vehicle::Vehicle(double p, double s, int y)
{
    price = p;
    maxSpeed = s;
    year = y;
}

void Vehicle::setPrice(double p)
{
    price = p;
}

double Vehicle::getPrice() const
{
    return price;
}

void Vehicle::setMaxSpeed(double s)
{
    maxSpeed = s;
}

double Vehicle::getMaxSpeed() const
{
    return maxSpeed;
}

void Vehicle::setYear(int y)
{
    year = y;
}

int Vehicle::getYear() const
{
    return year;
}