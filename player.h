
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string name, int health, int damage);

    void attack(Player* opponent);
    void takeDamage(int damage);

    // Getters and setters
    std::string getName() const;
    int getHealth() const;
    int getDamage() const;

    void setName(std::string name);
    void setHealth(int health);
    void setDamage(int damage);
};

#endif // PLAYER_H
