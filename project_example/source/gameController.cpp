#include "../headers/gameController.h"
#include "../headers/gameView.h"
#include "../headers/gameModel.h"

#include <iostream>

void GameController::launch()
{
    int points = 0;
    char inputValues[] = {'b', 'e'};
    view.printStartHeader();
    view.printData(points);

    while (true)
    {
        char input  = view.getUserInput();

        if(input == inputValues[0])
        {
            std::cout << input;
            model.addPoint();
            points = model.getPoints();
            view.printData(points);
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
