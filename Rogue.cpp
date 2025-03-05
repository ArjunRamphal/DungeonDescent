#include "Rogue.h"
#include <iostream>

Rogue::Rogue() : Character("Rogue")
{
	Hidden = 5;
	baseHealth = 10;
	Stats[0] = 2;
	Stats[1] = 10;
	Stats[2] = 4;
	Stats[3] = 5;
	Stats[4] = 10;
	Stats[5] = 4;

	Lastfpwrupused = 0;
}

void Rogue::Ability() {
	Hidden += 3;

	//toCode LockPick and GoldGain
}