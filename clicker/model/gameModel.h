#pragma once
#include <string>

class GameModel
{
    public:
        GameModel();
        
        void addPoint();
        void addLevel();

        int getPoints() const;
        int getLevel() const;

        std::string romanNumerals(int level);
        
        void save(int level, int points);
        bool load();

    private:
        int points;
        int level;
};