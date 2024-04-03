
#include "wizard.h"
#include "warrior.h"
#include <iostream>

int main() {
    Wizard wizard("Merlin", 100, 20, 50); // Example stats
    Warrior warrior("Arthur", 120, 30, "Excalibur"); // Example stats

    // Battle simulation
    while(wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        wizard.castSpell(&warrior);
        if(warrior.getHealth() <= 0) {
            std::cout << wizard.getName() << " wins!" << std::endl;
            break;
        }

        warrior.swingWeapon(&wizard);
        if(wizard.getHealth() <= 0) {
            std::cout << warrior.getName() << " wins!" << std::endl;
            break;
        }
    }

    return 0;
}
