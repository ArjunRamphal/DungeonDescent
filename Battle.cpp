#include "Battle.h"
#include <iostream>
#include <random>



Battle::Battle() : RoomBase("Battle") {
	
	//code and attack button such that when its clicked the second loop executes
	// make second loop a double conditional while (!Enemy.isDefeated && buttom is clicked)

	Character player("Player1");

	for (int i = 0;i < Total_Strikes();i++) {
		while (!Enemy.isDefeated( )) {

			if (isCrit_Strike(player.statValue[5]) ){      
				Enemy.takeDamage(player.statValue[0]*2);
			}
			else {
				Enemy.takeDamage(player.statValue[0] * 2);
			}
		}
	}


	// make messages for beating boss or loosing to enemy
	if (Enemy.isDefeated() ){           // gain +1 in all attributes for beating enemy
		for (int i = 0;i < 6;i++) {
			player.statValue[i] += 2;
		}

		if (Enemy.isBoss) {   // if the player beats the boss at end of floor they progress to next floor

			player.floor++;
		}
	}
	else {
		for (int i = 0;i < 6;i++) {  // loose -1 in all attributes for  loosing
			player.statValue[i] -= 2;
		}
	}
	

}

int Battle::Calculate_Extra_Strikes(int agility) // uses player agility to grant extra turns
{
	return agility / 3;
}

bool Battle::isCrit_Strike(int accuracy){
	                                 //uses players accuracy to determine if he hits a critical strike or not
									// every 5 accuracy points increases the chances by limiting the range of 
	int max = 10;                   // which the random numbers generate to by -2 
int reduction = accuracy / 3;

if (max - reduction > 0) {
	max -= reduction * 2;
}

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, max);
	int random_number = dist(gen);

	if (random_number == 1) {
		return true;
	}
	else
		return false;

}

int Battle::Total_Strikes()   // generates a random amount of strikes and combines it with extra strikes
						     // to give a total amount of strikes 
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(3, 5);
	int random_number = dist(gen);

	return random_number + Calculate_Extra_Strikes(player.statValue[3]);
}

