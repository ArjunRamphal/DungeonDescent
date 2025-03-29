#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>

using namespace std;

class Character {
private:
    //std::string name;
    
    



public:
    int statValue[6];
    string statName[6] = { "Strength", "Wisdom", "Observation", "Agility", "Health", "Accuracy" };
    int health;
    string name;
    int Progress;
    int Reputation;
    int QuestionTime = 12;
    string inventoryItemName[3];
    int inventoryItemAmount[3];
    int floor = 0;

    // Constructor
    Character(const string& name);
    Character();

    // Getters
    string getName() const;
    int getHealth() const;

    int* getStats();
    int* getInv();

    void takeDamage(int damage);

    bool isAlive();
    void addGold(int amount);
    void subGold(int amount);
    void addKey();
    void subKey();

    void incStats(int index, int amount);
    void decStats(int index, int amount);

    void incFloor();

    void negEvent(int amountrep);
    void posEvent(int amountrep);

    int getFloor();

	string getStatName(int index);
	int getStatValue(int index);

};

#endif // CHARACTER_H