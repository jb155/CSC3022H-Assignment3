#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H
#include <string>
#include <memory>
#include <iostream>
class HuffmanNode
{
private:
	char letter;
	int freq;
public:
	std::shared_ptr<HuffmanNode> leftNode, rightNode, parentNode;
	
	HuffmanNode();
	HuffmanNode(char a);
	~HuffmanNode();

	int getFreq(void){return freq;};
	void addFreq(void);
};

#endif // HUFFMANNODE_H
