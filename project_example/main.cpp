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
            cout << "Witamy w B clickerze!\nWciśnij 'b' by dodać punkt lub 'e' by wyjść" << endl;
        }

        void printData(int points)
        {
            cout <<"Points: " <<  points << endl;
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
        void addPoint()
        {
            points++;
        }

        int getPoints() const 
        {
            return points;
        }

    private:
        int points=0;
};

class Controller {

    private:
        Model model;
        View view;

    public:
        Controller(Model& model, View& view){}

        void launch()
        {
            int points = 0;

            char inputValues[] = {'b', 'e'};
            view.printStartHeader();
            view.printData(points);
            
            while (true)
            {
                char input  = view.getUserInput();
                
                if(input == inputValues[0])
                {
                    cout << input;
                    model.addPoint();
                    points = model.getPoints();
                    view.printData(points);
                }
                else if(input == inputValues[1])
                {
                    break;
                }
                else
                {
                    cout << "Error" << endl;
                }
            }

            cout << "Wychodzenie..." << endl;
        }

};


int main()
{
    View view;
    Model model;
    Controller control(model, view);
    
    control.launch();

    return 0;
}