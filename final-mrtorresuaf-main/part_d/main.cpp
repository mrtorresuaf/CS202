#include "Starship.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
	
      const Starship enterprise{"Starship Enterprise", "NCC 1701-D", "explore strange new worlds"};
      const Starship galactica{"Battlestar Galactica", "BS-75", "lead a rag-tag fugitive fleet"};

      cout << enterprise << endl;
      cout << galactica << endl;

      return 0;
}
