
#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int init_mana)
    : Player(name, health, damage), mana(init_mana) {}

void Wizard::castSpell(Player* opponent) {
    opponent->takeDamage(mana); // Assumes spell damage is based on mana
    mana -= 10; // Assume each spell costs 10 mana, for example
}

// Getter
int Wizard::getMana() const { return mana; }

// Setter
void Wizard::setMana(int new_mana) { mana = new_mana; }
