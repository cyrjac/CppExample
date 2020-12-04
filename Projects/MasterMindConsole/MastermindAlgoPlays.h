#pragma once
#include "MastermindBase.h"
#include <vector>
#include <list>

class MastermindAlgoPlays :
    public MastermindBase
{
private:
    std::list<std::string> mAllSolutions;

    void enterValidSecretCode();
    void initializeSolverEngine();
    void startSearch();

    std::string mSecretCode;

public:
    void play();
};

