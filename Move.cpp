#include <vector>
#include "Move.h"

using namespace std;

class Move {
public:
    BoardConfiguration (int player, int col, int row, BoardConfiguration moveXBoardConfig, int moveNum) {
      this->player = player;
      this->col = col;
      this->row = row;
      this->moveXBoardConfig = moveXBoardConfig;
      this->moveNum = moveNum;
    }

private:
    int player;
    int col;
    int row;
    BoardConfiguration moveXBoardConfig;
    int moveNum;
}
