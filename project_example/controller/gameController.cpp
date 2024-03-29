#include "gameController.h"
#include "../view/gameView.h"
#include "../model/gameModel.h"

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
    char inputValues[] = {'b', 'e', 'l'};
    view.printStartHeader();
    view.printData(model.getPoints(), model.romanNumerals( model.getLevel()));

    while (true)
    {
        char input  = view.getUserInput();

        if(input == inputValues[0])
        {
            model.addPoint();
            levelUp();
            view.printData(model.getPoints(), model.romanNumerals(model.getLevel()));
        }
        else if(input == inputValues[1])
        {
            break;
        }
        else if(input == inputValues[2])
        {
            model.load();
        }
        else
        {
            std::cout << "Error" << std::endl;
        }

    }

    std::cout << "Wychodzenie..." << std::endl;
    model.save(model.getLevel(), model.getPoints());
}
