#include <fstream>
#include <iostream>
#include <queue>
#include <vector>
#include <numeric>

#include "HuffmanNode.h"
#include "HuffmanTree.h"

void  HuffmanTree::createCharacterMap(std::string inFileName, std::vector<std::string> *inputStrings) {
	std::ifstream inFile(inFileName);
	std::string line;

	// Read in and count the frequency of each character
	if (inFile.is_open()) {
		while (getline(inFile, line)) {
			inputStrings->push_back(line);
			for (char letter: line) {
				if (unorderedMap.find(letter) != unorderedMap.end()) {
					unorderedMap.at(letter) += 1;
				} else {
					unorderedMap.insert({letter, 1});
				}
			}
		}
		inFile.close();
	} else {
		std::cout << "Can't open file." << std::endl;
	}
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

// Prints huffman codes from the root of Huffman Tree.
void HuffmanTree::printCodes(std::shared_ptr<HuffmanNode> parent, std::string bitCode) {
	if (!parent)
		return;
 
	if (parent->letter != '$'){
		bitCodes += parent->letter + ": " + bitCode + "\n";
		codeTable.insert({parent->letter, bitCode});
	}
	printCodes((parent->leftNode), bitCode + "0");
	printCodes((parent->rightNode), bitCode + "1");
}

void HuffmanTree::saveCodesToFile(std::string outFileName){
	// Write out the "binary" string of the input
	std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
	if (outFile.good()) {
		std::string s;
		s = std::accumulate(begin(inStrings), end(inStrings), s);
		outFile.write(s.c_str(), s.size());
		outFile.close();
	}
	else {
		std::cout << "file error write" << std::endl;
	}
	
	// Construct the file name for the header file
	size_t index = outFileName.find('.');
	if (index != std::string::npos) {
		outFileName = outFileName.substr(0, index) + ".hdr";
	}
	// Write out the bit code table
	outFile.open(outFileName);
	if (outFile.is_open()) {
		outFile << codeTable.size() << std::endl;
		for (auto pair : codeTable) {
			outFile << pair.first << '\t' << pair.second << std::endl;
			std::cout << pair.first << '\t' << pair.second << std::endl;
		}
		outFile.close();
	}
}

HuffmanTree::HuffmanTree()
{
}

HuffmanTree::HuffmanTree(std::string &fileName)
{
	HuffmanTree::createCharacterMap(fileName, &inStrings);
	
	orderedNodes = createOrderedNodes(unorderedMap);
	
	generateTree(orderedNodes);
	
	printCodes(root,"");
	
	saveCodesToFile(fileName);
}

HuffmanTree::~HuffmanTree()
{
}

