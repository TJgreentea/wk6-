
#include "player.h"
#include <iostream>

Player::Player(std::string init_name, int init_health, int init_damage)
    : name(init_name), health(init_health), damage(init_damage) {}

void Player::attack(Player* opponent) {
    opponent->takeDamage(damage);
}

void Player::takeDamage(int dmg) {
    health -= dmg;
    std::cout << name << " took " << dmg << " damage and is now at "
              << health << " health." << std::endl;
}

// Getters
std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getDamage() const { return damage; }

// Setters
void Player::setName(std::string new_name) { name = new_name; }
void Player::setHealth(int new_health) { health = new_health; }
void Player::setDamage(int new_damage) { damage = new_damage; }
