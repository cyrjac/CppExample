#pragma once

#include "MastermindBase.h"

#include <iostream>
#include <string>

class MastermindUserPlays :
    public MastermindBase
{
    public:
      void play();

    private:
      void initGame();

      std::string mSecret;
};

