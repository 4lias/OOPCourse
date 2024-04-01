#include "gameModel.h"
#include <cmath>
#include <string>
#include <fstream>
//#include <iostream>

GameModel::GameModel() :  level(0), points(0) {}

void GameModel::addPoint(){
    points++;
}
void GameModel::addLevel(){
    level++;
}

int GameModel::getPoints() const{
    return points;
}
int GameModel::getLevel() const{
    return level;
}

std::string GameModel::romanNumerals(int level)
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
            roman += "CD";
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

        if(level==0)
                roman =  "0";
                
        return roman;

}

void GameModel::save(int level, int points)
{
    std::ofstream save;
    save.open("save.txt");

    save << level << "\n" << points;
    save.close();
}

bool GameModel::load()
{
    std::string readPoints="0", readLevel="0";

    std::ifstream load;
    load.open("save.txt");
    if(load.is_open()==false)
    {
        return false;
    }
    
    load >> readLevel >> readPoints;

    level = stoi(readLevel);
    points = stoi(readPoints);

    
    load.close();
    return true;
}