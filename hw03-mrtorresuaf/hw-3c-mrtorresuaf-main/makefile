all: hw
	./hw

hw: hw.o link.o list.o
	g++ -std=c++17 -Wall -Wextra hw.o Link.o LinkedList.o -o hw

hw.o: Link.h hw.cpp
	g++ -std=c++17 -Wall -Wextra -c hw.cpp

link.o: Link.cpp Link.h
	g++ -std=c++17 -Wall -Wextra -c Link.cpp

list.o: LinkedList.cpp LinkedList.h
	g++ -std=c++17 -Wall -Wextra -c LinkedList.cpp

clean:
	rm -f *.o hw

.PHONY: all clean
