
#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>

class ParkingLot {
private:
    std::vector<Vehicle*> vehicles; // Dynamic array of vehicle pointers
    int maxCapacity; // Maximum number of vehicles the lot can hold
    int currentCount() const; // Helper function to get current number of vehicles

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int vehicleID);
    int getCount() const;
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif // PARKINGLOT_H
