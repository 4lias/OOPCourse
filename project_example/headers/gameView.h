#pragma once

#include <string>

class GameView{
    public:
        void printStartHeader();

        void printData(int points, int level);

        char getUserInput();

        std::string romanNumerals(int level);
};