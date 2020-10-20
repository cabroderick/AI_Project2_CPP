// AI_Project2_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "BoardConfiguration.h"

using namespace std;

BoardConfiguration board; //the actual game board
vector<BoardConfiguration*> moves; //moves made in the game
int moveNum = 0; //the turn# for the game
string teamName = "Sigmoid"; //the team name to use; by default Sigmoid if no arguments are passed in

//main function for the program
int main()
{
    if (__argc > 1) {
        teamName = __argv[1]; //sets team name to argument passed in
    }
    board = BoardConfiguration();
    playGame();
}

//function that is repeatedly called until game is over
void playGame() {
    ifstream goFile("Sigmoid.go");
    while (!goFile.good()) {} //will loop until gofile exists
    goFile.close();

    bool endGame = ifstream("end_game").good(); //check if endgame file exists
    if (endGame) {
        cout << "Game over";
        return;
    }

    ifstream moveFile("move_file");
    if (moveFile.good()) { // check for opponent's move
        //TODO implement move reading
        moveNum++;
    }
    makeMove();
    playGame(); //re call playGame until game has ended
}

//function that will make the AI move
void makeMove() {
    cout << "Making move. . .";
    if (moveNum <= 1) { //first move of the game

    }
    else {
        BoardConfiguration* lastMove = moves.back();
        BoardConfiguration* newMove = miniMax(lastMove, 5);
        board = *newMove;
        int col = newMove->getLatestMove().first;
        int row = newMove->getLatestMove().second;
        outputToFile(col, row);
        moves.push_back(newMove);
    }
    cout << "Completed move " << moveNum;
    moveNum++;
}

//outputs the given row and column to a file
void outputToFile(int c, int r) {
    //TODO implement
}

BoardConfiguration* miniMax(BoardConfiguration* startingBoard, int depthLimit) {
    vector<BoardConfiguration*> possibleMoves = genPossibleMoves(startingBoard);
    BoardConfiguration* max = &BoardConfiguration(-numeric_limits<int>::infinity()); //initializes a dummy board with 
    for (BoardConfiguration* move : possibleMoves) {
        BoardConfiguration* currentMove = alphaBetaPruning(move, depthLimit, -numeric_limits<int>::infinity(), numeric_limits<int>::infinity(), true);
        if (currentMove->getEval() > max->getEval()) {
            max = currentMove;
        }
    }
    return max;
}
