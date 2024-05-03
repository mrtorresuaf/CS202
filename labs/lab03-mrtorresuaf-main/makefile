all: hw hw.o line.o
	./hw 10

hw:
	g++ -std=c++17 -Wall -Wextra hw.o Line.o -o hw

hw.o:
	g++ -std=c++17 -Wall -Wextra -c hw.cpp

line.o:
	g++ -std=c++17 -Wall -Wextra -c Line.cpp

clean:
	rm -f hw *.o

.PHONY: all clean