
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    ParkingLot lot(10); // Create a ParkingLot object with capacity for 10 vehicles

    // Park 5 Car objects, 3 Bus objects, and 2 Motorbike objects
    for (int i = 1; i <= 5; ++i) {
        lot.parkVehicle(new Car(i));
    }
    for (int i = 6; i <= 8; ++i) {
        lot.parkVehicle(new Bus(i));
    }
    for (int i = 9; i <= 10; ++i) {
        lot.parkVehicle(new Motorbike(i));
    }

    // Wait for 15 seconds before checking for overstaying vehicles
    // This wait is just to simulate the passage of time
    std::this_thread::sleep_for(std::chrono::seconds(15));

    int overstayingCount = lot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles that have overstayed more than 15 seconds: " << overstayingCount << std::endl;

    // The parking lot is full here; if we try to park another vehicle, it should not allow us and display a message
    Car* extraCar = new Car(11);
    lot.parkVehicle(extraCar);

    return 0;
}
