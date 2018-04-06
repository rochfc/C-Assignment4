
all:hello

hello:Driver.o Huffman.o
	g++ Driver.o Huffman.o -o hello

Huffman.o:Huffman.cpp
	g++ -c Huffman.cpp

Driver.o:Driver.cpp
	g++ -c Driver.cpp

run:
	./hello
clean:
	rm *.o