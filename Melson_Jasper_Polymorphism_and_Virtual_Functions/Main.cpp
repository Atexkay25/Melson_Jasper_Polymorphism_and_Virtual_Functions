// Jasper Melson
// CIS 1202 101
// January 31, 2021

#include <iostream>
#include <limits>  // for std::numeric_limits
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main() {
    // Test Vehicle class
    std::cout << "Enter Vehicle information:\n";
    std::string vehicleManufacturer;
    int vehicleYearBuilt;

    std::cout << "Manufacturer: ";
    std::getline(std::cin, vehicleManufacturer);

    std::cout << "Year Built: ";
    while (!(std::cin >> vehicleYearBuilt)) {
        std::cin.clear();  // Clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        std::cout << "Invalid input. Please enter a valid year: ";
    }

    // Create Vehicle object
    Vehicle myVehicle(vehicleManufacturer, vehicleYearBuilt);

    // Display Vehicle information
    std::cout << "\nVehicle Information:\n";
    myVehicle.displayInfo();

    // Clear the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Test Car class
    std::cout << "\nEnter Car information:\n";
    std::string carManufacturer;
    int carYearBuilt, numDoors;

    std::cout << "Manufacturer: ";
    std::getline(std::cin, carManufacturer);

    std::cout << "Year Built: ";
    while (!(std::cin >> carYearBuilt)) {
        std::cin.clear();  // Clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        std::cout << "Invalid input. Please enter a valid year: ";
    }

    std::cout << "Number of Doors: ";
    while (!(std::cin >> numDoors)) {
        std::cin.clear();  // Clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        std::cout << "Invalid input. Please enter a valid number of doors: ";
    }

    // Create Car object
    Car myCar(carManufacturer, carYearBuilt, numDoors);

    // Display Car information
    std::cout << "\nCar Information:\n";
    myCar.displayInfo();

    // Clear the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Test Truck class
    std::cout << "\nEnter Truck information:\n";
    std::string truckManufacturer;
    int truckYearBuilt;
    double towingCapacity;

    std::cout << "Manufacturer: ";
    std::getline(std::cin, truckManufacturer);

    std::cout << "Year Built: ";
    while (!(std::cin >> truckYearBuilt)) {
        std::cin.clear();  // Clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        std::cout << "Invalid input. Please enter a valid year: ";
    }

    std::cout << "Towing Capacity (in tons): ";
    while (!(std::cin >> towingCapacity)) {
        std::cin.clear();  // Clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        std::cout << "Invalid input. Please enter a valid towing capacity: ";
    }

    // Create Truck object
    Truck myTruck(truckManufacturer, truckYearBuilt, towingCapacity);

    // Display Truck information
    std::cout << "\nTruck Information:\n";
    myTruck.displayInfo();

    return 0;
}
