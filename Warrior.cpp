#include "Warrior.h"
#include <iostream>

Warrior::Warrior() : Character("Warrior")
{
	baseHealth = 15;
	Stats[0] = 4;
	Stats[1] = 1;
	Stats[2] = 0;
	Stats[3] = 3;
	Stats[4] = 15;
	Stats[5] = 2;

	Lastfpwrupused = 0;
}

void Warrior::Ability() {
	Stats[0] = (2 * Stats[0]) + 3;
	Stats[3] *= Stats[3];
	Stats[4] *= Stats[4];
}