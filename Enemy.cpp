#include "Enemy.h"

// Constructor
Enemy::Enemy(int floor, bool isBoss) : floor(floor), isBoss(isBoss) {
    // Calculate base health based on floor level
    int baseHealth = 20 + (floor * 2);

    // Adjust health for floor level
    if (floor == 2) {
        baseHealth *= 1.1; 
    } else if (floor == 3) {
        baseHealth *= 1.1; 
    }

    // Adjust health for bosses
    if (isBoss) {
        baseHealth *= 1.1; // Bosses have 50% more health
    }

    health = baseHealth;


}
// Get the current health of the enemy
int Enemy::getHealth() const {
    return health;
}

// Reduce health by damage amount
void Enemy::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0; // Ensure health doesn't go below 0
    }
}

// Check if the enemy is defeated
bool Enemy::isDefeated() const {
    return (health <= 0);
}
