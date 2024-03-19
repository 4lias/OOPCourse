#include <iostream>
/*
#include "headers/gameView.h"
#include "headers/gameController.h"
#include "headers/gameModel.h"
*/
using namespace std;

class View {
    public:
        void printStartHeader(){}

        void printData(int points){}

        char getUserInput(){}
};

class Model {
    public:
        void addPoint(){}

        int getPoints() const {}

    private:
        int points;
};

class Controller {

    private:
        Model model;
        View view;

    public:
        Controller(Model& model, View& view){}

        void launch(){}

};


int main()
{
    return 0;
}