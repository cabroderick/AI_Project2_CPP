#include "MiniMaxNode.h"
#include "Name.h"
#include <vector>

using namespace std;

class MiniMaxNode {
public:
  MiniMaxNode(parent,children,Move);

private:
  MiniMaxNode parent;
  vector<MiniMaxNode> children; //all the children nodes to the current node
  Move move; //the move associated with the current node
}
