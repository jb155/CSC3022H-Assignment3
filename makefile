CC=g++
CCFLAGS=-std=c++11
LIBS=-lm -lX

HuffmanNode.o: HuffmanNode.cpp HuffmanNode.h
	$(CC) $(CCFLAGS) HuffenNode.cpp -c
HuffmanTree.o: HuffmanTree.cpp HuffmanTree.h HuffmanNode.h
	$(CC) $(CCFLAGS) HuffmanTree.cpp -c
huffencode.o: huffencode.cpp HuffmanTree.h
	$(CC) $(CCFLAGS) huffencode.cpp

huffencode: HuffmanTree.o HuffmanNode.o huffencode.o HuffmanTree.h
	$(CC) $(CCFLAGS) HuffmanTree.o HuffmanNode.o huffencode.o -o huffencode $(LIBS)

clean:
	rm -Rf *.o ./huffencode
