
#include "Motorbike.h"

int Motorbike::getParkingDuration() const {
    return Vehicle::getParkingDuration() * 85 / 100; // Apply 15% reduction
}
