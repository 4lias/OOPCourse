#include "view/gameView.h"
#include "model/gameModel.h"
#include "controller/gameController.h"

using namespace std;

int main()
{
    GameView view;
    GameModel model;
    GameController controller(model, view);

    controller.launch();

    return 0;
}