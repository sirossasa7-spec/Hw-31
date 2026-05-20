#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
private:
    int doors;

public:
    Car(double price, double speed, int year, int doors);

    string getType() const override;
    void show() const override;
};