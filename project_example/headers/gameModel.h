#pragma once
#include <string>

class GameModel
{
    public:
        //GameModel(int points, int level);
        void addPoint();
        void addLevel();

        int getPoints() const;
        int getLevel() const;

        std::string romanNumerals(int level);
        void save(int level, int points);

        void load();

    private:
        int points=0;
        int level=0;
};