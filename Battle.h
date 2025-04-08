#pragma once
#ifndef BATTLE_H
#define BATTLE_H

#include <iostream>
#include <string>
#include "RoomBase.h"
#include "Character.h"
#include "test.h"  


class Battle : public RoomBase {
private:


public:
    Battle(bool isBoss,Character *player);  // Constructor for Battle

    int Calculate_Extra_Strikes(int agility);
    bool isCrit_Strike(int accuracy);
    int Total_Strikes();
};

#endif // BATTLE_H
