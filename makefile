huffmancode: huffmancode.o HuffmanNode.o HuffmanTree.o
	g++ -o huffmancode huffmancode.o HuffmanNode.o HuffmanTree.o -std=c++11
huffmancode.o: huffmancode.cpp HuffmanTree.h
	g++ -c -o huffmancode.cpp -std=c++11
HuffmanNode.o: HuffmanNode.cpp HuffmanNode.h
	g++ -c -o HuffmanNode.cpp -std=c++11
HuffmanTree.o: HuffmanTree.cpp HuffmanTree.h HuffmanNode.h
	g++ -c -o HuffmanTree.cpp -std=c++11

run:
	./huffmancode

clean:
	rm -Rf *.o ./huffmancode
