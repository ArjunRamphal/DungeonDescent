#pragma once
#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Character.h"
class Warrior :
    public Character
{

private:
public:
    Warrior();
    int baseHealth;
    //int statValue[6];
    void Ability();
    int Lastfpwrupused;
    //std::string statName[6] = { "Strength", "Wisdom", "Observation", "Agility", "Health", "Accuracy" };

};

#endif // Warrior