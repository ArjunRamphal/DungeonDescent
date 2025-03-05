#pragma once
#ifndef SHOP_H
#define SHOP_H
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
};

#endif // Warrior