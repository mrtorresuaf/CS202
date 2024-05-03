all: hw hw.o box.o hb.o fb.o
	

hw: hw.o box.o hb.o fb.o
	g++ -std=c++17 -Wall -Wextra hw.o Box.o HollowBox.o FilledBox.o -o hw

hw.o: hw.cpp 
	g++ -std=c++17 -Wall -Wextra -c hw.cpp

box.o: Box.cpp Box.h
	g++ -std=c++17 -Wall -Wextra -c Box.cpp

hb.o: HollowBox.cpp HollowBox.h
	g++ -std=c++17 -Wall -Wextra -c HollowBox.cpp

fb.o: FilledBox.cpp FilledBox.h
	g++ -std=c++17 -Wall -Wextra -c FilledBox.cpp

clean:
	rm -f hw *.o

.PHONY: all clean
