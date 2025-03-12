#include "Enemy.h"
#include <iostream>


// Constructor
Enemy::Enemy(int floor, bool isBoss) : Character("Enemy"), floor(floor), isBoss(isBoss) {
    // Calculate base health based on floor level and boss status
    baseHealth = 20 + (floor * 2); // Base health increases with floor level

    if (floor == 2) {
        baseHealth *= 1.2; // 20% higher health in level 2
    } else if (floor == 3) {
        baseHealth *= 1.3; // 30% higher health in level 3
    }

    if (isBoss) {
        baseHealth *= 1.1; // Bosses have 10% more health per floor
    }

    // Seed the random number generator
    std::srand(std::time(0));

    // Generate random stat requirements
    for (int i = 0; i < 6; ++i) {
        StatReq[i] = std::rand() % 21; // Random value between 0 and 20
    }

    // Print stat requirements (for debugging)
    std::cout << "Generated stat requirements: ";
    for (int i = 0; i < 6; ++i) {
        std::cout << StatReq[i] << " ";
    }
    std::cout << std::endl;
}

// Check if it's a boss battle
bool Enemy::isBossBattle() const {
    return isBoss;
}

// Check if the enemy is defeated
bool Enemy::isDefeated(int Stats[6]) {
    int count = 0;
    for (int i = 0; i < 6; ++i) {
        if (Stats[i] > StatReq[i]) {
            count += 1;
        }
    }

    // Return true if all stats meet the requirements
    return (count == 6);
}

// Get the current health of the enemy
int Enemy::getHealth() const {
    return baseHealth;
}
