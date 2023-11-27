#include "Car.h"
#include <iostream>

// Constructor
Car::Car(const std::string& manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

// Getter
int Car::getNumDoors() const {
    return numDoors;
}

// Setter
void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

// Display information
void Car::displayInfo() const {
    // Call the base class displayInfo method
    Vehicle::displayInfo();

    // Display Car-specific information
    std::cout << "Number of doors: " << numDoors << std::endl;
}
