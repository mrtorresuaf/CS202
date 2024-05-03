all: hw
	./hw

hw: hw.o map.o
	g++ -std=c++17 -Wall -Wextra hw.o map.o -o hw

hw.o: map.h hw.cpp
	g++ -std=c++17 -Wall -Wextra -c hw.cpp

map.o: map.cpp map.h
	g++ -std=c++17 -Wall -Wextra -c map.cpp

clean:
	rm -f *.o hw

.PHONY: all clean
