#pragma once
#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck(const std::string& manufacturer, int yearBuilt, int towingCapacity);

    // Getter
    int getTowingCapacity() const;

    // Setter
    void setTowingCapacity(int towingCapacity);

    // Display truck information
    void displayInfo() const ;
};
