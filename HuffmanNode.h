#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H
#include <string>
#include <memory>
#include <iostream>
class HuffmanNode
{
private:
	//char letter;
	//int freq;
public:
	char letter;
	int freq = 0;

	std::shared_ptr<HuffmanNode> leftNode;
	std::shared_ptr<HuffmanNode> rightNode;
	//std::shared_ptr<HuffmanNode> parentNode;
	
	HuffmanNode();
	HuffmanNode(char a, int b);
	~HuffmanNode();

};
struct Compare
{
	bool operator()(const HuffmanNode& a, const HuffmanNode& b) const{
		if (a.freq < b.freq){ 
			return true; // or > if the algorithm requires that ordering
		}else{
			return false;
		}
	}
};
#endif // HUFFMANNODE_H
