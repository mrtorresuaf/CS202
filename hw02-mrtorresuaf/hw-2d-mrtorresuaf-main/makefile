all: comp hw fb
	./hw 3 3 "3"

comp: hw.o FilledBox.o
	g++ -std=c++17 -Wall -Wextra hw.o FilledBox.o -o hw

hw: hw.cpp 
	g++ -std=c++17 -Wall -Wextra -c hw.cpp

fb: FilledBox.cpp FilledBox.h
	g++ -std=c++17 -Wall -Wextra -c FilledBox.cpp

clean:
	rm -f hw *.o

.PHONY: all clean
