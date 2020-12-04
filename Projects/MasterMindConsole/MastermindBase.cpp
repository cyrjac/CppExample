#include "MastermindBase.h"

void MastermindBase::computeScore(int& oGood, int& oBad, std::string iProposal, std::string iSolution)
{
	oGood = oBad = 0;

	// Recherche des jetons bien placés
	for (int i = 0; i < 4; i++)
	{
		if (iProposal.at(i) == iSolution.at(i))
		{
			oGood++;
			iProposal[i] = ' ';
			iSolution[i] = ' ';
		}
	}

	// Recherche des jetons mal placés
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ((iProposal.at(i) == iSolution.at(j)) && (iProposal.at(i) != ' '))
			{
				oBad++;
				iProposal[i] = ' ';
				iSolution[j] = ' ';
				break;
			}
		}
	}

}
