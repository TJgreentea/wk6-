
#include "Car.h"

int Car::getParkingDuration() const {
    return Vehicle::getParkingDuration() * 90 / 100; // Apply 10% reduction
}
