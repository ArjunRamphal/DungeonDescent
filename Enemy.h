#pragma once
#include "Character.h"
#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>
class Enemy :
    public Character
{

private:


public:

    Enemy(int floor);
    int StatReq[6];
    int baseHealth;
    int defeat(int Stats[6]);
};

#endif // Enemy