#pragma once
#include <vector>
#include "Vehicle.h"

class Garage
{
private:
    vector<Vehicle*> vehicles;

public:
    ~Garage();

    void addVehicle(Vehicle* v);
    void removeVehicle(int index);

    void showAll() const;

    Vehicle* findByIndex(int index);
    void findByType(const string& type) const;
    void findByTypeAndSpeed(const string& type, double speed) const;

    void sortBySpeed();
};