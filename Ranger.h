#pragma once
#ifndef RANGER_H
#define RANGER_H
#include <iostream>
#include <string>
#include "Character.h"
class Ranger :
    public Character
{
private:
public:
    int Accuracy;
    Ranger();
    int baseHealth;
    int Stats[6];
    bool Ability();
    int Lastfpwrupused;
};

#endif // Ranger