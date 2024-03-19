#include <iostream>
/*
#include "headers/gameView.h"
#include "headers/gameController.h"
#include "headers/gameModel.h"
*/
using namespace std;

class View {
    public:
        void printStartHeader()
        {
            cout << "Witamy w B clickerze!\n Wciśnij 'b' by dodać punkt lub 'e' by wyjść" << endl;
        }

        void printData(int points)
        {
            cout << points << "points" << endl;
        }

        char getUserInput()
        {
            char input;
            cin >> input;
            return input;
        }
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