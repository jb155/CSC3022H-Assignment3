#include "HuffmanTree.h"
#include <iostream>
#include <fstream>


void readFromFile(std::string fileName){
	vector<string> list;
	ifstream in_stream;
	string line;
	in_stream.open(fileName);

	while(!in_stream.eof())
	{
		in_stream >> line;
		list.push_back(line);
	}
	in_stream.close();
	
	
}

//
HuffmanTree::HuffmanTree()
{
}

HuffmanTree::HuffmanTree(std::string fileName)
{
	
}

HuffmanTree::~HuffmanTree()
{
}

