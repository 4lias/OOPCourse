#include <iostream>
#include <cmath>

#include "headers/gameView.h"
#include "headers/gameModel.h"
#include "headers/gameController.h"

using namespace std;

string romanNumerals(int level)
{
        int I=0,V=0,X=0,L=0,C=0,D=0,M=0;
        std::string roman;
        M = floor(level/1000);
        D = floor((level - (M*1000))/500);
        C = floor((level - (M*1000 + D*500))/100);
        L = floor((level - (M*1000 + D*500 + C*100))/50);
        X = floor((level - (M*1000 + D*500 + C*100 + L*50))/10);
        V = floor((level - (M*1000 + D*500 + C*100 + L*50 + X*10))/5);
        I = floor((level - (M*1000 + D*500 + C*100 + L*50 + X*10 + V*5)));

        for(int i=0;i<M;i++)
                roman += "M";
        for(int i=0;i<D;i++)
                roman += "D";
        for(int i=0;i<C;i++)
                roman += "C";
        for(int i=0;i<L;i++)
                roman += "L";
        for(int i=0;i<X;i++)
                roman += "X";
        for(int i=0;i<V;i++)
                roman += "V";
        for(int i=0;i<I;i++)
                roman += "I";

        return roman;
}

int main()
{
    /*
    GameView view;
    GameModel model;
    GameController controller(model, view);
    controller.launch();
    */
    
    int a=0;
    do
    {   cin >> a;
        cout << romanNumerals(a) << endl;
    } while (true);
    

    return 0;
}