#include "Moose.h++"
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cerr;
using std::cout;
using std::endl;
using std::stoi;

int main(int argc, char** argv) {

      vector<string> arguments{argv, argv+argc};

      if (argc != 3) {
            cerr << "Usage: " << arguments[0] << " numLegs char" << std::endl;
      }

      int legs{stoi(argv[1])};

      char fill{arguments[2][0]};

      Moose bulwinkle{true, legs};

      cout << "Bulwinkle has " << bulwinkle.numLegs() << " legs" << endl;

      return 0;
}
