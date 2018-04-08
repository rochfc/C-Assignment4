
all:hello

hello:Driver.o Huffman.o
	g++ Driver.o Huffman.o -o huffencode

Huffman.o:Huffman.cpp
	g++ -c Huffman.cpp

Driver.o:Driver.cpp
	g++ -c Driver.cpp

run:
	./huffencode
clean:
	rm *.o