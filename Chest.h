#pragma once
#ifndef CHEST_H
#define CHEST_H
#include <iostream>
#include <string>
#include "RoomBase.h"
class Chest :
    public RoomBase
{

private:
public:
    Chest();
    int Reward;
    void Open();
    bool Locked;
    string imageFileName;
    string getImageFileName(int biome);
};

#endif // Warrior