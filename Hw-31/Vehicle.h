#pragma once
#include <string>
using namespace std;

class Vehicle
{
protected:
    double price;
    double maxSpeed;
    int year;

public:
    Vehicle();
    Vehicle(double price, double maxSpeed, int year);

    virtual ~Vehicle() {}

    void setPrice(double price);
    double getPrice() const;

    void setMaxSpeed(double speed);
    double getMaxSpeed() const;

    void setYear(int year);
    int getYear() const;

    virtual string getType() const = 0;
    virtual void show() const = 0;
};