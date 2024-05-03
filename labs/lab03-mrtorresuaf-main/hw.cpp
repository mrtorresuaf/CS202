#include "Line.h"
#include <iostream>
#include <sstream>

using std::cerr;
using std::cout;
using std::endl;
using std::stringstream;

int main(int argc, char** argv) {
            
      if (argc != 2) {
            cerr << "Usage: " << argv[0] << " width" << endl;
            return 1;
      }

      int w;

      stringstream(argv[1]) >> w;

      Line line(w);

      for (int i{0}; i < line.getWidth(); i += 1) {
            cout << line.asString();
      }
      cout << endl;

      return 0;
}
