
#include "Bus.h"

int Bus::getParkingDuration() const {
    return Vehicle::getParkingDuration() * 75 / 100; // Apply 25% reduction
}
