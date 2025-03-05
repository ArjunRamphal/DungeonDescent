#pragma once
#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include "RoomBase.h"
class Boss :
    public RoomBase
{

private:
public:
    Boss();
    void Cleared();
    int StatReq[6];
    int defeat(int Stats[6]);
    int baseHealth;
};

#endif // Warrior