#include "HuffmanNode.h"
HuffmanNode::HuffmanNode()
{
	freq = 0;
}

HuffmanNode::HuffmanNode(char a, int b)
{
	leftNode = rightNode = NULL;
	letter = a;
	freq = b;
}

HuffmanNode::~HuffmanNode()
{
}






