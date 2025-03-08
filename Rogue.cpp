#include "Rogue.h"
#include <iostream>

Rogue::Rogue() : Character("Rogue")
{
	Hidden = 5;
	baseHealth = 10;
	statValue[0] = 2;
	statValue[1] = 10;
	statValue[2] = 4;
	statValue[3] = 5;
	statValue[4] = 10;
	statValue[5] = 4;

	Lastfpwrupused = 0;
}

void Rogue::Ability() {
	Hidden += 3;

	//toCode LockPick and GoldGain
}