#!/bin/bash
echo "Nazwa programu"
read filename
g++ -c main.cpp view/gameView.cpp
g++ -o $filename main.o gameView.o
rm *.o
./$filename
