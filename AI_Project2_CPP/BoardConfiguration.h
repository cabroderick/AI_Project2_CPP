#include <vector>

using namespace std;

enum pathEvalValues {
    FIVE = 10, //five in a row
    LIVEFOUR = 9,
    DEADFOUR = 8,
    LIVETHREE = 7, 
    DEADTHREE = 6,
    LIVETWO = 5,
    DEADTWO = 4
};

class BoardConfiguration {
private:
  int boardSize;
  vector<vector<int>> boardList;
  vector<pair<int,int>> occupiedSpaces;
  void initBoardRange();

public:
  BoardConfiguration();
}
