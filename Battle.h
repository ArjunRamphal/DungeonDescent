#pragma once
#ifndef BATTLE_H
#define BATTLE_H
#include <iostream>
#include <string>
#include "RoomBase.h"
class Battle :
    public RoomBase
{

private:
public:

    Battle();
    bool eDefeated;
    int StatChange;
    void Effect(int arr[6]);
    string imageFileName;
    string getimageFileName(int biome);
};

#endif // Warrior