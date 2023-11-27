#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    // Constructor
    Vehicle(const std::string& manufacturer, int yearBuilt);

    // Getters
    std::string getManufacturer() const;
    int getYearBuilt() const;

    // Setters
    void setManufacturer(const std::string& manufacturer);
    void setYearBuilt(int yearBuilt);

    // Display information
    virtual void displayInfo() const;

private:
    // Member variables
    std::string manufacturer;
    int yearBuilt;
};

#endif // VEHICLE_H
