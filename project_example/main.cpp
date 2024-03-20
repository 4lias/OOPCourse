#include <iostream>

#include "view/gameView.h"
//#include "model/gameModel.h"
//#include "controller/gameController.h"

using namespace std;

/*class GameView {
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
*/

class GameModel {
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


class GameController {

    private:
        GameModel model;
        GameView view;

    public:
        GameController(GameModel& model, GameView& view){}

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
    GameView view;
    GameModel model;
    GameController control(model, view);
    
    control.launch();

    return 0;
}