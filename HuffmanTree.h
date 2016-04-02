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
	void createCharacterMap(std::string inFileName, std::vector<std::string> *inputStrings);
	std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> createOrderedNodes(std::unordered_map <char, int> &map);//3rd
	void generateTree(std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> &orderedNodeQueue);
	struct HuffmanNode *left, *right, *top;
	
	std::string bitCodes = "";
	std::vector<std::string> inStrings;
	std::unordered_map<char, int> unorderedMap;
	std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> orderedNodes;
	std::unordered_map<char, std::string> codeTable;
public:
	std::shared_ptr<HuffmanNode> root;

	HuffmanTree();
	HuffmanTree(std::string &fileName);
	~HuffmanTree();

	void printCodes(std::shared_ptr<HuffmanNode> parent, std::string bitCode);
	void saveCodesToFile(std::string outFileName);
	
	std::unordered_map<char, int> getUnorderedMap(){ return unorderedMap; }
	std::vector <std::string> getInStrings(){return inStrings;}
};

#endif // HUFFMANTREE_H
