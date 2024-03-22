#include "../headers/gameModel.h"

void GameModel::addPoint()
{
    points++;
}

void GameModel::addLevel()
{
    level++;
}

int GameModel::getPoints() const
{
    return points;
}
int GameModel::getLevel() const{
    return level;
}
