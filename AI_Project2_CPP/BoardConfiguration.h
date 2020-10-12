#include <vector>

using namespace std;

class BoardConfiguration {
private:
  int boardSize = 15;
  vector<vector<int>> boardList;
  vector<pair<int,int>> occupiedSpaces;


}

class BoardConfiguration{



    occupiedSpaces = [] //list of spaces occupied on the board
    def __init__(self):
        self.boardList = [[0 for x in range(self.boardSize)] for y in range(self.boardSize)]
    def placeStone(self, col: int, row: int, player: int):
        self.boardList[col][row] = player
        self.occupiedSpaces.append(Vector(col, row))
        return self
};
