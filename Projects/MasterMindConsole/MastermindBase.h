#pragma once
#include <string>

class MastermindBase
{
protected:
	void computeScore(int& oGood, int& oBad, std::string iProposal, std::string iSolution);

public:
	virtual void play() = 0;
};

