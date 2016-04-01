#include <HuffmanTree.h>


//Main
int main(int argc, char **argv)
{
	/*if (argc >= 2){
		//create tree
		std::string inString(argv[1]);
		HuffmanTree hufmanTree(inString);	//creating an tree and passing it the infile read name
	}else{
		std::cout << "Please input correct arguments example: huffencode <inputFile><output file>"<<std::endl;
	}*/
	std::string inString = "test.txt";
	HuffmanTree hufmanTree(inString);
}
