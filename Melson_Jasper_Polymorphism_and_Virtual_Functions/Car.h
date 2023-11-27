#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    // Constructor
    Car(const std::string& manufacturer, int yearBuilt, int numDoors);

    // Getter
    int getNumDoors() const;

    // Setter
    void setNumDoors(int numDoors);

    // Display information
    void displayInfo() const override;

private:
    // Member variable
    int numDoors;
};

#endif // CAR_H
