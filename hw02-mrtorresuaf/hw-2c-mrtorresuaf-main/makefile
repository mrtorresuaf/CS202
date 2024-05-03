all: hw hw.o box.o hb.o
	./hw 3 3 "3"

hw: hw.o Box.o HollowBox.o
	g++ -std=c++17 -Wall -Wextra hw.o Box.o HollowBox.o -o hw

hw.o: hw.cpp 
	g++ -std=c++17 -Wall -Wextra -c hw.cpp

box.o: Box.cpp Box.h
	g++ -std=c++17 -Wall -Wextra -c Box.cpp

hb.o: HollowBox.cpp HollowBox.h
	g++ -std=c++17 -Wall -Wextra -c HollowBox.cpp

clean:
	rm -f hw *.o

.PHONY: all clean
