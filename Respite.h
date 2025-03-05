#pragma once
#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include "RoomBase.h"
class Respite :
    public RoomBase
{

private:
public:
    Respite();
    int Regen;
    int Accept(bool acc, int arr[6]);
};

#endif // Warrior