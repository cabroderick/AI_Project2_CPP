#include <vector>

using namespace std;

class BoardConfiguration {
private:
	void initBoardRange();
public:
	BoardConfiguration();
	BoardConfiguration(int eval);
	BoardConfiguration* placeStone(int col, int row, int player);
	pair<int, int> getLatestMove();
	int getEval();
};