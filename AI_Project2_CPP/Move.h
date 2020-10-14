#include <vector>
#include "BoardConfiguration.h"

using namespace std;

class Move {
public:

private:
    int player; //the player that made the move
    int col; //the column associated with the move
    int row; //the row associated with the move
    BoardConfiguration moveXBoardConfig; //the board configuration of the board after the move was made
    int moveNum; //the turn the move was made on
}
