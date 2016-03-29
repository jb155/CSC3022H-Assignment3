#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H
#include <unordered_map>
class HuffmanTree
{
private:
	std::unordered_map <char , int> unorderedMap;	//Similar to java hash map <Letter, Freq>
	
	void readFromFile(std::string &fileName);
public:
	std::shared_ptr<HuffmanNode> root;

	HuffmanTree();
	HuffmanTree(std::string fileName);
	~HuffmanTree();

	/*default constructor, a move constructor, a copyconstructor, a destructor, 
	 * an assignment operator and a move assignment operator more details are 
	 * provided below*/
};

#endif // HUFFMANTREE_H
