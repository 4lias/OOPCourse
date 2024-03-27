#pragma once

#include <string>

class GameView{
    public:
        void printStartHeader();

        void printData(int points, std::string level);

        char getUserInput();
};