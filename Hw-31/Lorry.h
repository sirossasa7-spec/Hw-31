#pragma once
#include "Vehicle.h"

class Lorry : public Vehicle
{
private:
    double loadCapacity;

public:
    Lorry(double price, double speed, int year, double capacity);

    string getType() const override;
    void show() const override;
};