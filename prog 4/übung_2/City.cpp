/**
*@author Mohamad Ata Suleiman
 *@version  02.07.2024
 **/
#include "City.h"


    City::City(const std::string& name, double distance, Storehouse* warehouse)
        : name(name), distanceToHome(distance), warehouse(warehouse) {
    }
    string City::getName() const { return name; }
    double City::getDistanceToHome() const { return distanceToHome; }
    Storehouse* City::getWarehouse() const { return warehouse; }

    string City::toString() const {
        return "City: " + name + ", distance: " + to_string(distanceToHome) + " km";
    }


    City::~City() {
        delete warehouse;
    }
