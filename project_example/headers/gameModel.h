#pragma once

class GameModel
{
    public:
        void addPoint();

        int getPoints() const;

    private:
        int points;
};