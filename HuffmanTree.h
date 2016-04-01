#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H
#include <unordered_map>
#include <memory>
#include <queue>
#include <vector>
#include "HuffmanNode.h"
class HuffmanTree
{
private:
	static std::unordered_map<char, int> createCharacterMap(std::string inFileName, std::vector<std::string> *inputStrings);
	std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> createOrderedNodes(std::unordered_map <char, int> &map);//3rd
	void generateTree(std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> &orderedNodeQueue);
	void saveCodesToFile(std::string outFileName, std::vector<std::string> inputStrings);
	struct HuffmanNode *left, *right, *top;
public:
	std::shared_ptr<HuffmanNode> root;

	HuffmanTree();
	HuffmanTree(std::string &fileName);
	~HuffmanTree();

	void printCodes(std::shared_ptr<HuffmanNode> parent, std::string bitCode);
};

#endif // HUFFMANTREE_H
