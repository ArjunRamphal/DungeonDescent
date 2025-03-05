#pragma once
#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include "RoomBase.h"
class Library :
    public RoomBase
{
private:
public:

    Library();
    bool QAvail;
    bool QComp;
    int BookEff(int Type, int arr[6]);
};
#endif // Warrior