#include "Garage.h"
#include <iostream>
#include <algorithm>

using namespace std;

Garage::~Garage()
{
    for (int i = 0; i < vehicles.size(); i++)
    {
        delete vehicles[i];
    }
}

void Garage::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
}

void Garage::removeVehicle(int index)
{
    if (index >= 0 && index < vehicles.size())
    {
        delete vehicles[index];
        vehicles.erase(vehicles.begin() + index);
    }
}

void Garage::showAll() const
{
    for (int i = 0; i < vehicles.size(); i++)
    {
        cout << i << endl;
        vehicles[i]->show();
        cout << endl;
    }
}

Vehicle* Garage::findByIndex(int index)
{
    if (index >= 0 && index < vehicles.size())
    {
        return vehicles[index];
    }

    return nullptr;
}

void Garage::findByType(const string& type) const
{
    for (int i = 0; i < vehicles.size(); i++)
    {
        if (vehicles[i]->getType() == type)
        {
            vehicles[i]->show();
            cout << endl;
        }
    }
}

void Garage::findByTypeAndSpeed(const string& type, double speed) const
{
    for (int i = 0; i < vehicles.size(); i++)
    {
        if (vehicles[i]->getType() == type &&
            vehicles[i]->getMaxSpeed() >= speed)
        {
            vehicles[i]->show();
            cout << endl;
        }
    }
}

void Garage::sortBySpeed()
{
    sort(vehicles.begin(), vehicles.end(),
        [](Vehicle* a, Vehicle* b)
        {
            return a->getMaxSpeed() < b->getMaxSpeed();
        });
}