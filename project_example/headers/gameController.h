#include "../headers/gameView.h"
#include "../headers/gameModel.h"

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