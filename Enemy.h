#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <iostream>

class Enemy {
private:
    int floor; // Floor level (1, 2, or 3)
    int health; // Current health of the enemy
    bool isBoss; // Whether the enemy is a boss

public:
    Enemy(int floor); // Constructor
    bool isBossBattle() const; // Check if it's a boss battle
    int getHealth() const; // Get the current health of the enemy
    void takeDamage(int damage); // Reduce health by damage amount
    bool isDefeated() const; // Check if the enemy is defeated
};
