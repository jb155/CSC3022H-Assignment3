#include "HuffmanNode.h"
#include "HuffmanTree.h"

#define CATCH_CONFIG_MAIN

#include <unordered_map>
#include <vector>
#include <string>

#include "Test/catch.hpp"

std::string inString("test1.txt");
HuffmanTree huffmanTree(inString);	//creating an tree and passing it the infile read name

TEST_CASE("CharMap is made correctly", "[char, map]") {
    REQUIRE(huffmanTree.getInStrings().size() == 2);
    REQUIRE(huffmanTree.getUnorderedMap().size() == 9);
    REQUIRE(huffmanTree.getUnorderedMap()['l'] == 3);
}


TEST_CASE("NodeQueue is made correctly", "[node, queue]") {
	std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, Compare> orderedNodes = huffmanTree.getOrderedNodes();
    REQUIRE(!orderedNodes.empty());
    REQUIRE(orderedNodes.size() == 9);
	HuffmanNode *temp = orderedNodes.top();
    REQUIRE(temp->freq == 1);
}


TEST_CASE("Node structure is made correctly", "[tree]") {
    REQUIRE(huffmanTree.root->freq == 12);
    REQUIRE(huffmanTree.root->letter == '$');
}

TEST_CASE("Code Table is made correctly", "[tree, codeTable]") {
	std::unordered_map<char, std::string> codeTable =  huffmanTree.getCodeTable();
    REQUIRE(!codeTable.empty());
    REQUIRE(codeTable.size() == 9);
    REQUIRE(codeTable['H'] == "001");
    REQUIRE(codeTable['e'] == "1100");
    REQUIRE(codeTable['l'] == "01");
    REQUIRE(codeTable['o'] == "111");
	REQUIRE(codeTable['W'] == "1101");
	REQUIRE(codeTable['r'] == "1010");
	REQUIRE(codeTable['d'] == "100");
	REQUIRE(codeTable[' '] == "1011");
	REQUIRE(codeTable['.'] == "000");
}
