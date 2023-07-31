#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(const std::string& manufacturer, int yearBuilt, int numberOfDoors);

    // Getter
    int getNumberOfDoors() const;

    // Setter
    void setNumberOfDoors(int numberOfDoors);

    // Display car information
    void displayInfo() const ;
};
