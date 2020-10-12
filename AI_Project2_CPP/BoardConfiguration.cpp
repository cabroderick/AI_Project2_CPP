#include <vector>
#include <BoardConfiguration.h>

using namespace std;

class BoardConfiguration {
public:
  BoardConfiguration (int x, int y) {
    boardSize = 15;
    //do stuff here
  }
  BoardConfiguration placeStone(int col, int inputRow, int player) {
    boardList[col][row] = player;
      occupiedSpaces.push_back(make_pair(col,row));


private:
  //initializes the board
  void initBoardRange() {
    for (size_t col = 0; cow < boardSize; col++) {
        for (size_t row = 0; row < boardSize; row++) {
          boardList[col][row] = 0;
        }
    }
  }
}
