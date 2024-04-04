
#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr); // Initialize to the current time
}

int Vehicle::getID() const {
    return ID;
}

int Vehicle::getParkingDuration() const {
    return static_cast<int>(std::difftime(std::time(nullptr), timeOfEntry));
}
