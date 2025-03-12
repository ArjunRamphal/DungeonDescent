include "Enemy.h"

// Constructor
Enemy::Enemy(int floor bool isBoss) : floor(floor) {
    // Determine if the enemy is a boss (only on floor 3)
    isBoss = (floor == 3);

    // Calculate base health based on floor level
    int baseHealth = 20 + (floor * 2);

    // Adjust health for floor level
    if (floor == 2) {
        baseHealth *= 1.1; // 20% more health on floor 2
    } else if (floor == 3) {
        baseHealth *= 1.2; // 30% more health on floor 3
    }

    // Adjust health for bosses
    if (isBoss) {
        baseHealth *= 1.1; // Bosses have 50% more health
    }

    health = baseHealth;

  

// Check if it's a boss battle


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
