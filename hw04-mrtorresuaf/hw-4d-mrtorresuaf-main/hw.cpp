#include "map.h"
#include <fstream>

using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;

int main(int argc, char** argv) {

      if (argc != 2) {

            cerr << "Usage: " << argv[0] << " game/data.txt" << endl;
             
            return 1;

      } else {

            Map map;

            cerr << "Reading game board from " << argv[1] << " into variable" << endl;
            ifstream in{argv[1]};

            in >> map;

            cout << map << endl;
      }

      return 0;
}
