#!/bin/bash
echo "Nazwa programu"
read filename
g++ -c main.cpp 
g++ -c source/gameView.cpp source/gameModel.cpp
g++ -o $filename main.o gameView.o gameModel.o
rm *.o
./$filename
