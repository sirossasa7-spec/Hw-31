#include "Vehicle.h"

Vehicle::Vehicle() : price(0), maxSpeed(0), year(0) {}

Vehicle::Vehicle(double price, double maxSpeed, int year)
    : price(price), maxSpeed(maxSpeed), year(year) {
}

void Vehicle::setPrice(double price) { this->price = price; }
double Vehicle::getPrice() const { return price; }

void Vehicle::setMaxSpeed(double speed) { this->maxSpeed = speed; }
double Vehicle::getMaxSpeed() const { return maxSpeed; }

void Vehicle::setYear(int year) { this->year = year; }
int Vehicle::getYear() const { return year; }