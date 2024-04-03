
#include "warrior.h"
#include <iostream>

Warrior::Warrior(std::string name, int health, int damage, std::string init_weapon)
    : Player(name, health, damage), weapon(init_weapon) {}

void Warrior::swingWeapon(Player* opponent) {
    opponent->takeDamage(damage); // Assumes weapon damage is the same as player's damage
}

// Getter
std::string Warrior::getWeapon() const { return weapon; }

// Setter
void Warrior::setWeapon(std::string new_weapon) { weapon = new_weapon; }
