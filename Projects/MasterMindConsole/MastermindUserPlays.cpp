#include "MastermindUserPlays.h"

#include <stdlib.h> 
#include <time.h>

void MastermindUserPlays::initGame()
{
	mSecret = "    ";

	srand(time(NULL)); // initialize random seed:
	
	for (int i = 0; i < 4; i++)
	{
		mSecret[i] = '1' + rand() % 4;
	}

	//std::cout << "La phrase secrete est " << mSecret << std::endl;
}

void MastermindUserPlays::play()
{
	int wNbGood = 0, wNbBad = 0, nNbTries = 0;

	initGame();

	std::cout << "Demarrage dy jeu: Vous devinez la solution\n";

	while (wNbGood != 4)
	{
		std::string wProposition;
		nNbTries++;

		std::cout << "\nVotre proposition #" << nNbTries << ": ";
	    std::cin >> wProposition; 
		if (wProposition.length() == 4)
		{
			this->computeScore(wNbGood, wNbBad, wProposition, mSecret);

			std::cout << "Vous avez " << wNbGood << " bien place(s) et " << wNbBad << " mal place(s)\n";
		}
		else
		{
			std::cout << "Vous devez entrer 4 jetons exactement\n";
			nNbTries--;
		}
	}

	std::cout << "\nVous avez gagne en " << nNbTries << " coups\n";
	std::cout << "----------------------------------------------------------------\n";
}
