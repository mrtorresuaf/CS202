run: main
	./main

main: main.o Starship.o Federation.o Battlestar.o
	g++ -std=c++17 -Wall -Wextra Starship.o FederationStarship.o Battlestar.o main.o -o main

main.o: main.cpp Starship.h
	g++ -std=c++17 -Wall -Wextra -c main.cpp

Starship.o: Starship.cpp Starship.h
	g++ -std=c++17 -Wall -Wextra -c Starship.cpp

Federation.o: FederationStarship.cpp FederationStarship.h Starship.h
	g++ -std=c++17 -Wall -Wextra -c FederationStarship.cpp

Battlestar.o: Battlestar.cpp Battlestar.h Starship.h
	g++ -std=c++17 -Wall -Wextra -c Battlestar.cpp

clean:
	rm -f *.o

cleanest:
	rm -f *.o main

.PHONY: run clean cleanest
