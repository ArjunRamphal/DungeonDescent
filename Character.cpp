#include "Character.h"
#include <iostream>

// Constructor
Character::Character(const std::string& name)
    : name(name) {
    this->name = name;
    std::string statName[6] = { "Strength", "Wisdom", "Observation", "Agility", "Health", "Accuracy" };
    int statValue[6] = { 0,0,0,0,0,0 };
    std::string inventoryItemName[3] = { "Gold","Keys","Quest Item" };
    int inventoryItemAmount[3] = { 0,0,0 };
    floor = 0;
    Reputation = 0;
}

Character::Character()
{
}

//Character::Character();

// Getters
std::string Character::getName() const {
    return name;
}

string Character::getpfpImageName() const
{
    return pfpImageName;
}

int Character::getHealth() const {
    return health;
}

int* Character::getStats() {
    int* arr = new int[6]; // Allocate memory
    for (int i = 0; i < 6; i++) {
        arr[i] = Character::statValue[i]; // Fill array
    }
    return arr; // Caller must delete[] it
}

int* Character::getInv() {
    int* arr = new int[3]; // Allocate memory
    for (int i = 0; i < 3; i++) {
        arr[i] = Character::inventoryItemAmount[i]; // Fill array
    }
    return arr; // Caller must delete[] it
}

void Character::takeDamage(int damage) {
    statValue[4] -= damage;
    if (statValue[4] < 0) statValue[4] = 0;  // Prevent negative health
    std::cout << name << " takes " << damage << " damage. Health: " << statValue[4] << std::endl;
}

bool Character::isAlive() {
    return statValue[4] > 0;
}

void Character::addGold(int amount) {
    Character::inventoryItemAmount[0] += amount;
}

void Character::subGold(int amount) {
    Character::inventoryItemAmount[0] -= amount;
}

void Character::addKey() {
    Character::inventoryItemAmount[0] += 1;
}

void Character::subKey() {
    Character::inventoryItemAmount[0] -= 1;
}

void Character::incStats(int index, int amount)
{
    statValue[index] += amount;
}

void Character::decStats(int index, int amount)
{
    statValue[index] -= amount;
}

void Character::incFloor() {
    floor += 1;
    QuestionTime -= 2;

}

void Character::posEvent(int amountrep)
{
    Reputation += amountrep;
}

void Character::negEvent(int amountrep)
{
    Reputation += amountrep;
}

int Character::getFloor()
{
    return floor;
}

string Character::getStatName(int index)
{
	return statName[index];
}

int Character::getStatValue(int index)
{
	return statValue[index];
}

