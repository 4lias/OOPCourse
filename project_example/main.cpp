#include <iostream>
#include <cmath>

#include "headers/gameView.h"
#include "headers/gameModel.h"
#include "headers/gameController.h"

using namespace std;

int main()
{
    GameView view;
    GameModel model;
    GameController controller(model, view);
    
    controller.launch();

    return 0;
}