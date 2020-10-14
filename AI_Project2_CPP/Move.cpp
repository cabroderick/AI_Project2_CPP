#include "Move.h"
#include "BoardConfiguration.h"

using namespace std;

class Move {
    int player; //the player that made the move
    int col; //the column associated with the move
    int row; //the row associated with the move
    BoardConfiguration moveXBoardConfig; //the board configuration of the board after the move was made

	Move(int player, int col, int row, BoardConfiguration moveXBoardConfig) {
        this->player = player;
        this->col = col;
        this->row = row;
        this->moveXBoardConfig = moveXBoardConfig;
    }
};