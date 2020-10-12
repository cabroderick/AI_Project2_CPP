#include <vector>

using namespace std;

class BoardConfiguration {
private:
  int boardSize;
  vector<vector<int>> boardList;
  vector<pair<int,int>> occupiedSpaces;
  void initBoardRange();
  enum pathEvalValues;

public:
  BoardConfiguration();
}
