#pragma once
#include <string>

class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle(const std::string& manufacturer, int yearBuilt);

    // Getters
    std::string getManufacturer() const;
    int getYearBuilt() const;

    // Setters
    void setManufacturer(const std::string& manufacturer);
    void setYearBuilt(int yearBuilt);

    // Display vehicle information
    void displayInfo() const;
};

