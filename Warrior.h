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
    int Stats[6];
    void Ability();
    int Lastfpwrupused;

};

#endif // Warrior