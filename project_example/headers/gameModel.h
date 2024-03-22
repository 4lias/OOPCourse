#pragma once

class GameModel
{
    public:
        void addPoint();
        void addLevel();

        int getPoints() const;
        int getLevel() const;

    private:
        int points = 0;
        int level = 0;
};