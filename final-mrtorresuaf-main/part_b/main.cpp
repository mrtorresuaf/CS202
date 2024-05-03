#include "Starship.h"
#include <iostream>
#include <vector>
#include <fstream>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

int main(int argc, char** argv) {
	
      if (argc != 2) {

            cerr << "Usage: " << argv[0] << " starships.txt" << endl;
             
            return 1;

      } else {

            vector<Starship> ships;
            string n, i, m;

            ifstream in{argv[1]};
            if (!in.is_open()) {
                  cerr << "Error opening file " << argv[1] << endl;
                  return 2;
            }

            while (in >> n >> i >> m) {

                  Starship ship{n, i, m};
                  ships.push_back(ship);
            }

            for (Starship s : ships) {
                  cout << s << endl;
            }
      }

      return 0;
}
