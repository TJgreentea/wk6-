
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Vehicle*> vehicles;

    // Create and park vehicles
    vehicles.push_back(new Car(1));
    vehicles.push_back(new Bus(2));
    vehicles.push_back(new Motorbike(3));

    // Output the parking duration for each vehicle
    for (const auto& vehicle : vehicles) {
        std::cout << "Vehicle ID " << vehicle->getID() << " has been parked for "
                  << vehicle->getParkingDuration() << " seconds." << std::endl;
        delete vehicle; // Clean up to prevent memory leak
    }

    return 0;
}
