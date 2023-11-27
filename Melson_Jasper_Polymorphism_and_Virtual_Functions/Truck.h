#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
public:
    // Constructor
    Truck(const std::string& manufacturer, int yearBuilt, double towingCapacity);

    // Getter
    double getTowingCapacity() const;

    // Setter
    void setTowingCapacity(double towingCapacity);

    // Display information
    void displayInfo() const override;

private:
    // Member variable
    double towingCapacity;
};

#endif // TRUCK_H
