all: l.o m.o a.o
	g++ -std=c++17 -Wall -Wextra lab.o Moose.c++ Animal.c++ -o lab
	./lab 69 "#"

l.o: lab.c++ 
	g++ -std=c++17 -Wall -Wextra -c lab.c++

m.o: Moose.c++ Moose.h++
	g++ -std=c++17 -Wall -Wextra -c Moose.c++

a.o: Animal.c++ Animal.h++
	g++ -std=c++17 -Wall -Wextra -c Animal.c++

clean:
	rm -f lab *.o

.PHONY: all clean