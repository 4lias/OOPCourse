#include "../headers/gameController.h"
#include "../headers/gameView.h"
#include "../headers/gameModel.h"

#include <iostream>

GameController::GameController(GameModel& model, GameView& view){}

void GameController::levelUp()
{
    if(model.getPoints()%5==0 && model.getPoints()!=0)
    {
        model.addLevel();
    }
}

void GameController::launch()
{
    char inputValues[] = {'b', 'e'};
    view.printStartHeader();
    view.printData(model.getPoints(), model.getLevel());

    while (true)
    {
        char input  = view.getUserInput();

        levelUp();
        if(input == inputValues[0])
        {
            model.addPoint();
            view.printData(model.getPoints(), model.getLevel());
            
        }
        else if(input == inputValues[1])
        {
            break;
        }
        else
        {
            std::cout << "Error" << std::endl;
        }

    }

    std::cout << "Wychodzenie..." << std::endl;
}