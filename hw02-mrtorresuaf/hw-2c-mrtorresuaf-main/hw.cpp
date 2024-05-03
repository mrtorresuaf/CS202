#include "Box.h"
#include "HollowBox.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

int main(int argc, char** argv) {

      if (argc != 4) {
            cerr << "Usage: " << argv[0] << " width height character" << endl;
            return 1;
      }

      int w{stoi(argv[1])}, h{stoi(argv[2])};
      char fill{argv[3][0]};

      HollowBox box(w, h, fill);

      for (int i{0}; i < box.getHeight(); i += 1) {
            for (int j{0}; j < box.getWidth(); j += 1) {
                  
                  int left{0}, right{box.getWidth() - 1};
                  
                  if (i == 0 || i == (box.getHeight() - 1)) {
                        cout << box.asString();
                  } else {
                        if (j == left || j == right) {
                              cout << box.asString();
                        } else {
                              cout << " ";
                        }
                  }
            }
            cout << endl;
      }

      return 0;
}
