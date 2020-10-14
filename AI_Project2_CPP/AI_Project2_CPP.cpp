// AI_Project2_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "Move.h"

using namespace std;

vector<Move> moves; //moves made by the AI
vector<Move> opponentMoves; //moves made by the opponent
int moveNum = 0; //the turn# for the game

int main()
{
    std::cout << "Hello World!\n";
}

//function that is repeatedly called until game is over
void PlayGame() {
  ifstream infile("Sigmoid.go");
  while !(infile.good()) {} //will loop until gofile exists
  infile.close()

  PlayGame(); //re call PlayGame until game has ended
}
