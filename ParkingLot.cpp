
#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity) {}

ParkingLot::~ParkingLot() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle; // Clean up dynamically allocated vehicles
    }
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount() >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        delete vehicle; // Important: prevent memory leak
    } else {
        vehicles.push_back(vehicle);
    }
}

void ParkingLot::unparkVehicle(int vehicleID) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == vehicleID) {
            delete *it; // Free the memory
            vehicles.erase(it); // Remove the pointer from the vector
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() const {
    return vehicles.size();
}

int ParkingLot::currentCount() const {
    return static_cast<int>(vehicles.size());
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int overstayingCount = 0;
    for (const auto& vehicle : vehicles) {
        if (vehicle->getParkingDuration() > maxParkingDuration) {
            overstayingCount++;
        }
    }
    return overstayingCount;
}
