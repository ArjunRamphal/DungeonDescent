#pragma 
#include "Battle.h"
#include <random>
#include <iostream>
int extra;

Battle::Battle(bool isBoss, Character* player) {
    // Create the player and enemy object

    enemy = new test(player->floor, isBoss);
    extra = Calculate_Extra_Strikes(player->statValue[3]);
    // Set the number of strikes (including extra strikes)
    strikesRemaining = Total_Strikes();  // Set the number of strikes

    // Start the battle loop
    while (strikesRemaining > 0 && !enemy->isDefeated()) {
        attack(player);  // Call the attack method for each strike
        strikesRemaining--;  // Decrease the remaining strikes after each attack
    }

    // After battle, handle the outcome
    if (enemy->isDefeated()) {
        for (int i = 0; i < 6; i++) {
            player->statValue[i] += 2;  // Gain +2 in all attributes for winning
        }

        if (isBoss) {  // If the enemy is a boss, progress the player to the next floor
            player->floor++;
        }
    }
    else {
        for (int i = 0; i < 6; i++) {
            player->statValue[i] -= 2;  // Lose -2 in all attributes for losing
        }
    }
}
void Battle::attack(Character* player) {
    if (strikesRemaining > 0 && !enemy->isDefeated()) {
        // Perform the attack
        if (isCrit_Strike(player->statValue[5])) {
            enemy->takeDamage(player->statValue[0] * 2);  // Critical strike
        }
        else {
            enemy->takeDamage(player->statValue[0] * 1);  // Normal attack
        }
    }
}

int Battle::Calculate_Extra_Strikes(int agility) {
    return agility / 3;  // Calculate extra strikes based on agility
}

bool Battle::isCrit_Strike(int accuracy) {
    int max = 10;
    int reduction = accuracy / 3;
    if (max - reduction > 0) {
        max -= reduction * 2;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, max);
    int random_number = dist(gen);

    return random_number == 1;
}

int Battle::Total_Strikes() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(3, 5);
    int random_number = dist(gen);

    return random_number + extra;  // Example player agility value
}

bool Battle::isBattleFinished() {
    return (strikesRemaining == 0 || enemy->isDefeated());  // Battle is finished if no strikes are left or enemy is defeated
}

