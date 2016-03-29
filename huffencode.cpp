#include <HuffmanNode.h>
#include <HuffmanTree.h>



//Main
int main(int argc, char **argv)
{
	if (argc == 3){
		//create tree
		HuffmanTree hufmanTree(argv[1]);	//creating an tree and passing it the infile read name
	}else{
		std::cout << "Please input correct arguments example: huffencode <inputFile><output file>"<<std::endl;
	}
}
