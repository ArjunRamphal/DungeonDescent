#pragma once
#include "GameScreen.cpp"
#include "GameScreen.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;
using namespace System::IO;

class Room
{
	private:

		bool completed;
		bool keyExists;
		bool NPCSpawn;
		bool bookExists;
		bool enemyPresent;
		int level;
		int biome;
		std::string riddles;

	public:
		Room(void)
		{
			completed = false;
			keyExists = false;
			NPCSpawn = false;
			bookExists = false;
			enemyPresent = false;
			level = 0;
			biome = 0;
		}

};

