#pragma once
#include "Vehicle.h"

class Bicycle : public Vehicle
{
private:
    bool hasGear;

public:
    Bicycle(double price, double speed, int year, bool hasGear);

    string getType() const override;
    void show() const override;
};