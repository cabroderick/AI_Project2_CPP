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
string teamName = "Sigmoid"; //the team name to use; by default Sigmoid if no arguments are passed in

//main function for the program
int main()
{
    std::cout << "Hello World!\n";
    if (__argc > 1) {
        teamName = __argv[1]; //sets team name to argument passed in
    }
}

//function that is repeatedly called until game is over
void playGame() {
  ifstream infile("Sigmoid.go");
  while (!infile.good()) {} //will loop until gofile exists
  infile.close();

  playGame(); //re call playGame until game has ended
}
