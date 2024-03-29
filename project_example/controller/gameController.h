#include "../view/gameView.h"
#include "../model/gameModel.h"

class GameController
{
    public:
        GameController(GameModel& model, GameView& view);

        void launch();

        void levelUp();

    private:
        GameModel model;
        GameView view;

};