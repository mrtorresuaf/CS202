#include "map.h"
#include <fstream>

using std::cerr;
using std::cout;
using std::endl;
using std::cin;
using std::ifstream;

int main(int argc, char** argv) {

      if (argc != 2) {

            cerr << "Usage: " << argv[0] << " game/data.txt" << endl;
             
            return 1;

      } else {

            Map map;

            ifstream in{argv[1]};

            in >> map;

            char input;
            do {
                  cout << "\x1B[2J" << "\x1B[H"            
                       << map << endl
                       << "Quit (q) or Move (ijkl): ";

                  cin >> input;

                  if (input == 'q' || input == 'Q') {
                        break;
                  }
            } while (true);
      }

      return 0;
}
