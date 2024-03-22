#include "../headers/gameView.h"
#include <iostream>
#include <string>
#include <cmath>

void GameView::printStartHeader()
{
        std::cout << "Witamy w B clickerze!\nWciśnij 'b' by dodać punkt lub 'e' by wyjść" << std::endl;
}

void GameView::printData(int points, int level)
{
        std::cout << "Level: " <<  level << std::endl;
        std::cout << "Points: " <<  points << std::endl;
}

char GameView::getUserInput()
{
        char input;
        std::cin >> input;
        return input;
}

/*std::string GameView::romanNumerals(int level)
{
        int I=0,V=0,X=0,L=0,C=0,D=0,M=0;
        std::string roman;
        M=floor(level/1000);
        D=floor((level-(M*1000))/500);
        C=floor((level-(D*500))/100);
        L=floor((level-(C*100))/50);
        X=floor((level-(L*50))/10);
        V=floor((level-(X*10))/5);
        I=floor((level-(V*5)));

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
        for(int i=0;i<V;i++);
                roman += "V";
        for(int i=0;i<I;i++)
                roman += "I";

        return roman;
}*/