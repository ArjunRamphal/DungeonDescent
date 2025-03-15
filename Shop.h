#pragma once
#pragma once
#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include "RoomBase.h"

using namespace std;
class Shop :
    public RoomBase
{

private:
public:
    Shop();
    bool QAvail;
    bool QComp;
	string imageFileName;
    string getImageFileName(int biome);
};

#endif // Warrior