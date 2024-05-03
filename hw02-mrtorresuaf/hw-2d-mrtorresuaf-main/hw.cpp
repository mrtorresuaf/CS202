#include "FilledBox.h"
#include <iostream>
#include <string>
#include <sstream>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

int main(int argc, char** argv) {
            
      if (argc != 4) {
            cerr << "Usage: " << argv[0] << " width height fill" << endl;
            return 1;
      }

      int w, h;
      char fill;

      stringstream(argv[1]) >> w;
      stringstream(argv[2]) >> h;
      stringstream(argv[3]) >> fill;

      FilledBox box(w, h, fill);

      for (int i{0}; i < box.getHeight(); i += 1) {
            for (int j{0}; j < box.getWidth(); j += 1) {
                  cout << box.asString();
            }
            cout << endl;
      }

      return 0;
}
