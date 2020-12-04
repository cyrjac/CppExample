#include "MastermindAlgoPlays.h"

#include <iostream>
#include <string>

void MastermindAlgoPlays::enterValidSecretCode()
{
	bool wSecretValid = false;
	
	while (!wSecretValid)
	{
		std::cout << "Quelle est votre combinaison secrete (4 jetons: 1, 2, 3, ou 4):";

		std::cin >> mSecretCode;

		if (mSecretCode.length() == 4)
		{ 
			wSecretValid = true;
			for (int i = 0; i < 4; i++)
			{
				if ((mSecretCode.at(i) < '1') || (mSecretCode.at(i) > '4'))
				{
					wSecretValid = false;
					break;
				}
			}
		}
		else
		{
			std::cout << "Erreur: la longueur de votre combinaison secrete n'est pas 4\n:";
		}
	}
}

void MastermindAlgoPlays::initializeSolverEngine()
{
	mAllSolutions.clear();

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				for (int l = 0; l < 4; l++)
				{
					std::string wSolution = "    ";
					wSolution[0] = '1' + i;
					wSolution[1] = '1' + j;
					wSolution[2] = '1' + k;
					wSolution[3] = '1' + l;

					mAllSolutions.push_back(wSolution);
				}
			}
		}
	}
}

void MastermindAlgoPlays::startSearch()
{
	std::cout << "La solution est " << mSecretCode << std::endl << std::endl;

	while (mAllSolutions.size() != 1)
	{
		int wNbGood = 0, wNbBad = 0, nNbTries = 1;
		auto wFirst = mAllSolutions.begin();

		std::string wTentative = *wFirst;

		std::cout << "Tentative #" << nNbTries << " :" << wTentative << std::endl;
		this->computeScore(wNbGood, wNbBad, wTentative, mSecretCode);
		std::cout << wNbGood << " bien place(s) et " << wNbBad << " mal place(s)\n";

		// Elimination des solutions potentielles
		int wIndexFin = mAllSolutions.size() - 1;

		for (std::list<std::string>::iterator it = mAllSolutions.begin();
			it != mAllSolutions.end();
			)
		{
			int wNbGoodCmp = 0, wNbBadCmp = 0;
			this->computeScore(wNbGoodCmp, wNbBadCmp, wTentative, *it);

			if ((wNbGoodCmp != wNbGood) || (wNbBadCmp != wNbBad))
			{
				it = mAllSolutions.erase(it);
			}
			else
			{
				++it;
			}
		}
	}
			
	std::cout << "La solution trouvee est " << *mAllSolutions.begin() << std::endl << std::endl;
}

void MastermindAlgoPlays::play()
{
	std::cout << "Démarrage du jeu: l'algorithme devine la combinaison\n";

	enterValidSecretCode();

	initializeSolverEngine();

	startSearch();
}
