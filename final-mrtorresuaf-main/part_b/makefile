run: main
	./main

main: main.o Starship.o
	g++ -std=c++17 -Wall -Wextra Starship.o main.o -o main

main.o: main.cpp Starship.h
	g++ -std=c++17 -Wall -Wextra -c main.cpp

Starship.o: Starship.cpp Starship.h
	g++ -std=c++17 -Wall -Wextra -c Starship.cpp

clean:
	rm -f *.o

cleanest:
	rm -f *.o main

.PHONY: run clean cleanest
