#pragma once
#ifndef ROGUE_H
#define ROGUE_H
#include <iostream>
#include <string>
#include "Character.h"
class Rogue :
    public Character
{

private:
public:
    int Hidden;
    Rogue();
    int baseHealth;
    int Stats[6];
    void Ability();
    int Lastfpwrupused;
    std::string statName[6] = { "Strength", "Wisdom", "Observation", "Agility", "Health", "Accuracy" };

};

#endif // Rogue