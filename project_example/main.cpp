#include <iostream>
#include <cmath>

#include "headers/gameView.h"
#include "headers/gameModel.h"
#include "headers/gameController.h"

using namespace std;

/*string romanNumerals(int level)
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
        if(D==1 && C==4)
        {
            roman += "CM";
        }else{
            for(int i=0;i<D;i++) roman += "D";
        }
        if(C==4 && D==0){
            roman += "XD";
        }else if(C!=4){
            for(int i=0;i<C;i++) roman += "C";
        }
        if(L==1 && X==4){
            roman += "XC";
        }else{
            for(int i=0;i<L;i++) roman += "L";
        }
        if(X==4 && L==0){
            roman += "XL";
        }else if(X!=4){
            for(int i=0;i<X;i++) roman += "X";
        }
        if(V==1 && I==4){
            roman += "IX";
        }else{
            for(int i=0;i<V;i++) roman += "V";
        }
        if(I==4 && V==0){
            roman += "IV";
        }else if(I!=4){
            for(int i=0;i<I;i++) roman += "I";
        }
        return roman;
}
*/

int main()
{
    GameView view;
    GameModel model;
    GameController controller(model, view);
    controller.launch();
    
    /*int a=0;
    do
    {   cin >> a;
        cout << romanNumerals(a) << endl;
    } while (true);
    */

    return 0;
}