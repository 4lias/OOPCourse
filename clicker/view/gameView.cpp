#include "gameView.h"
#include <iostream>
#include <string>

void GameView::printStartHeader()
{
        std::cout << "Witamy w B clickerze!\nWciśnij 'b' by dodać punkt lub 'e' by wyjść" << std::endl;
}

void GameView::printData(int points, std::string level)
{
        std::cout << "Level: " << level << std::endl;
        std::cout << "Points: " << points << std::endl;
}

void GameView::askForLoad() {
        std::cout << "Czy wczytać ostatni zapis? (y/n)" << std::endl;
}
void GameView::askForSave() {
        std::cout << "Czy zapisać stan gry? (y/n)" << std::endl;
}

void GameView::printErrorMessage(char errorType)
{
        switch(errorType)
        {
                case 'l':
                {
                        std::cout << "Błąd wczytania stanu gry" << std::endl;
                        break;
                }
                case 'b':
                {
                        std::cout << "Błędny klawisz" << std::endl;
                }
                default:
                {
                        std::cout << "Błąd" << std::endl;
                }
        }
}

char GameView::getUserInput()
{
        char input;
        std::cin >> input;
        return input;
}