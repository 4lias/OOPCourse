#pragma once

#include <string>

class GameView{
    public:
        void printStartHeader();

        void printData(int points, std::string level);

        void askForSave();
        void askForLoad();

        void printErrorMessage(char errorType);

        char getUserInput();
};