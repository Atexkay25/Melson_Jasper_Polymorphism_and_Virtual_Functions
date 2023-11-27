#include "Truck.h"
#include <iostream>

// Constructor
Truck::Truck(const std::string& manufacturer, int yearBuilt, double towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

// Getter
double Truck::getTowingCapacity() const {
    return towingCapacity;
}

// Setter
void Truck::setTowingCapacity(double towingCapacity) {
    this->towingCapacity = towingCapacity;
}

// Display information
void Truck::displayInfo() const {
    // Call the base class displayInfo method
    Vehicle::displayInfo();

    // Display Truck-specific information
    std::cout << "Towing Capacity: " << towingCapacity << " tons" << std::endl;
}
