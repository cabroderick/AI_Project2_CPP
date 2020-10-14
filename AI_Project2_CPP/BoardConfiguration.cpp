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
 
    BoardConfiguration() {
        boardSize = 15;
        initBoardRange();
    }

    BoardConfiguration* placeStone(int col, int row, int player) {
        boardList[col][row] = player;
        occupiedSpaces.push_back(make_pair(col, row));
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
};