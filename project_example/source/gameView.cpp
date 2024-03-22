#include "../headers/gameView.h"
#include <iostream>

void GameView::printStartHeader()
{
        std::cout << "Witamy w B clickerze!\nWciśnij 'b' by dodać punkt lub 'e' by wyjść" << std::endl;
}

void GameView::printData(int points, int level)
{
        std::cout << "Level: " <<  level << std::endl;
        std::cout << "Points: " <<  points << std::endl;
}

char GameView::getUserInput()
{
        char input;
        std::cin >> input;
        return input;
}
