#pragma once
#ifndef MAGE_H
#define MAGE_H
#include <iostream>
#include <string>
#include "Character.h"
class Mage :
    public Character
{
private:
public:
    Mage();
    int baseHealth;
    //int statValue[6];
    void Ability();
    int Lastfpwrupused;
    //std::string statName[6] = { "Strength", "Wisdom", "Observation", "Agility", "Health", "Accuracy" };
};

#endif // Mage