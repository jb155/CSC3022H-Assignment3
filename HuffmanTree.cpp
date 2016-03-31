#include <fstream>
#include <queue>
#include <vector>

#include "HuffmanNode.h"
#include "HuffmanTree.h"

std::string HuffmanTree::readFromFile(std::string &fileName){
	//Reads entire file into a single line
	std::ifstream file(fileName);
	std::string str;
	std::string file_contents;
	while (std::getline(file, str))
	{
	  file_contents += str;
	  file_contents.push_back('\n');
	}
	
	return str;
}

std::unordered_map <char, int> HuffmanTree::createUnorderedMap(std::string &str){
	//Dump char's into unordered_map unorderedMap
	std::unordered_map <char, int> unorderedMap;
	for (int i = 0; i < str.length();i++){
		unorderedMap[str[i]] += 1;				//This would mean that if you tipe "Hello" and you look at the key 'l' you will find 2 ... 2 occurences of ll
	}
	return unorderedMap;
}

std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> HuffmanTree::createOrderedNodes(std::unordered_map <char, int> &map){
	std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> orderedChars;
	
	for (const auto &pair : map) {
		orderedChars.push(new HuffmanNode(pair.first,pair.second));
	}
	
	return orderedChars;
}

void HuffmanTree::generateTree(std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> &minHeap){
	// Iterate while size of heap doesn't become 1
	while (minHeap.size() != 1){
	// Extract the two minimum freq items from min heap
		left = minHeap.top();
		minHeap.pop();
 
		right = minHeap.top();
		minHeap.pop();
 
		// Create a new internal node with frequency equal to the
		// sum of the two nodes frequencies. Make the two extracted
		// node as left and right children of this new node. Add
		// this node to the min heap
		// '$' is a special value for internal nodes, not used
		top = new HuffmanNode('$', left->freq + right->freq);
		top->leftNode = std::shared_ptr<HuffmanNode> (left);
		top->rightNode = std::shared_ptr<HuffmanNode> (right);
		minHeap.push(top);
	}
	root = std::shared_ptr<HuffmanNode> (minHeap.top());
}

void addNodeToTree(HuffmanNode node){
	
}
//
HuffmanTree::HuffmanTree()
{
}

HuffmanTree::HuffmanTree(std::string &fileName)
{
	
	std::string fileString = readFromFile(fileName);
	std::unordered_map <char, int> unorderedMap = createUnorderedMap(fileString);
	std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> orderedNodes = createOrderedNodes(unorderedMap);
	generateTree(orderedNodes);
}

HuffmanTree::~HuffmanTree()
{
}

