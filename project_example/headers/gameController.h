#pragma once

//#include "gameModel.h"
//#include "gameView.h"

class GameController
{
    private:
        GameModel model;
        GameView view;

    public:
        GameController(GameModel& model, GameView& view);

        void launch();
};