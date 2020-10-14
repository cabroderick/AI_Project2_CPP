#include "MiniMaxNode.h"
#include "Move.h"
#include <vector>

using namespace std;

class MiniMaxNode {
	MiniMaxNode* parent; // pointer to the parent node
	vector<MiniMaxNode> children; //all the children nodes to the current node
	Move move; //the move associated with the current node
	int evalValue;

	MiniMaxNode(MiniMaxNode* parent, vector<MiniMaxNode> children, int evalValue, Move move)
	{
		this->parent = parent;
		this->children = children;
		this->evalValue = evalValue;
		this->move = move;
	}

};

