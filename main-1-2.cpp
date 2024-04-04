
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

int main() {
    ParkingLot lot(10); // Create a ParkingLot object with capacity for 10 vehicles

    // Simulating user input for demonstration purposes
    // Normally you would use std::cin to get actual user input
    lot.parkVehicle(new Car(1));
    lot.parkVehicle(new Bus(2));
    // ... park more vehicles as needed ...

    // Display count of vehicles
    std::cout << "Currently, there are " << lot.getCount() << " vehicles in the lot." << std::endl;

    // Prompt user for ID of vehicle to unpark
    int vehicleID;
    std::cout << "Enter vehicle ID to unpark: ";
    std::cin >> vehicleID;
    lot.unparkVehicle(vehicleID);

    // Display updated count of vehicles
    std::cout << "Now, there are " << lot.getCount() << " vehicles in the lot." << std::endl;

    return 0;
}
