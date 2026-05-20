#include <iostream>
#include "Garage.h"
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"
using namespace std;

int main()
{
    Garage g;

    g.addVehicle(new Car(20000, 180, 2020, 4));
    g.addVehicle(new Bicycle(500, 40, 2022, true));
    g.addVehicle(new Lorry(50000, 120, 2018, 10));

    g.showAll();

    cout << "\n--- Only Cars ---\n";
    g.findByType("Car");

    cout << "\n--- Fast Vehicles ---\n";
    g.findByTypeAndSpeed("Car", 150);

    g.sortBySpeed();

    cout << "\n--- Sorted ---\n";
    g.showAll();

    return 0;
}