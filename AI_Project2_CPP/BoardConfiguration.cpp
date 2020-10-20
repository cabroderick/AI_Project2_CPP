#include <vector>
#include "BoardConfiguration.h"

using namespace std;

class BoardConfiguration {
    enum pathEvalValues {
        DEADTWO = 4,
        LIVETWO = 5,
        DEADTHREE = 6,
        LIVETHREE = 7,
        DEADFOUR = 8,
        LIVEFOUR = 9,
        FIVE = 10
    } weight;

    int boardSize;
    vector<vector<int>> boardList;
    vector<pair<int, int>> occupiedSpaces;
    pair<int, int> mostRecentMove; //the most recent move that was made on the board
    int eval; //the utility value associated with the board
 
    BoardConfiguration() {
        boardSize = 15;
        initBoardRange();
        mostRecentMove.first = -1; //dummy values until real value is set
        mostRecentMove.second = -1;
        eval = -1;
    }

    BoardConfiguration(int eval) {
        boardSize = 15;
        initBoardRange();
        mostRecentMove.first = -1; //dummy values until real value is set
        mostRecentMove.second = -1;
        this->eval = eval;
    }

    BoardConfiguration* placeStone(int col, int row, int player) {
        boardList[col][row] = player;
        occupiedSpaces.push_back(make_pair(col, row));
        mostRecentMove.first = col;
        mostRecentMove.second = row;
        return this;
    }

    //initializes the board
    void initBoardRange() {
        for (size_t col = 0; col < boardSize; col++) {
            for (size_t row = 0; row < boardSize; row++) {
                boardList[col][row] = 0;
            }
        }
        
    }
    
    //getter for mostRecentMove
    pair<int, int> getLatestMove() {
        return mostRecentMove;
    }

    int getEval() {
        if (eval == -1) {
            //TODO calc eval here
            return -1;
        }
        else return eval; //if eval is already calculated
    }
};