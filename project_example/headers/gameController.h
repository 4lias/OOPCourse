#include "../headers/gameView.h"
#include "../headers/gameModel.h"

class GameController
{
    private:
        GameModel model;
        GameView view;

    public:
        GameController(GameModel& model, GameView& view);

        void launch();

        void levelUp();
};