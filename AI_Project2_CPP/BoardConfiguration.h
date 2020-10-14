#include <vector>

using namespace std;

class BoardConfiguration {
private:
	void initBoardRange();
public:
	BoardConfiguration();
	BoardConfiguration* placeStone(int col, int row, int player);
};