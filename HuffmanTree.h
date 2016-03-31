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
	std::string readFromFile(std::string &fileName);//1st
	std::unordered_map <char, int> createUnorderedMap(std::string &str);//2nd
	std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> createOrderedNodes(std::unordered_map <char, int> &map);//3rd
	void generateTree(std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> &orderedNodeQueue);
	struct HuffmanNode *left, *right, *top;
public:
	std::shared_ptr<HuffmanNode> root;

	HuffmanTree();
	HuffmanTree(std::string &fileName);
	~HuffmanTree();

	void addNodeToTree(HuffmanNode node);
};

#endif // HUFFMANTREE_H
