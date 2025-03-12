#pragma once
#include "Character.h"
#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Enemy : public Character {
private:
    int floor; // Floor level (1, 2, or 3)
    int baseHealth; // Base health of the enemy
    int StatReq[6]; // Stat requirements for defeating the enemy
    bool isBoss; // Whether the enemy is a boss

public:
    Enemy(int floor, bool isBoss = false); // Constructor
    bool isBossBattle() const; // Check if it's a boss battle
    bool isDefeated(int Stats[6]); // Check if the enemy is defeated
    int getHealth() const; // Get the current health of the enemy
};

#endif
