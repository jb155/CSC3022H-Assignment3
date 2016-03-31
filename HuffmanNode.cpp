#include "HuffmanNode.h"
HuffmanNode::HuffmanNode()
{
}

HuffmanNode::HuffmanNode(char a, int b)
{
	this->leftNode = this->rightNode = NULL;
	this->letter = a;
	this->freq = b;
}

HuffmanNode::~HuffmanNode()
{
}






