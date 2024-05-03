#include "Box.h"
#include "HollowBox.h"
#include "FilledBox.h"
#include "FancyBox.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

int main(int argc, char** argv) {

      if (argc != 5) {
            cerr << "Usage: " << argv[0] << " width height character box" << endl;
            return 1;
      }

      int w{stoi(argv[1])}, h{stoi(argv[2])};
      char fill{argv[3][0]};
      string type{argv[4]};

      HollowBox hbox(w, h, fill);
      FilledBox fbox(w, h, fill);

      if (type == "hollow") {
            for (int i{0}; i < hbox.getHeight(); i += 1) {
                  for (int j{0}; j < hbox.getWidth(); j += 1) {
                        
                        int left{0}, right{hbox.getWidth() - 1};
                        
                        if (i == 0 || i == (hbox.getHeight() - 1)) {
                              cout << hbox.asString();
                        } else {
                              if (j == left || j == right) {
                                    cout << hbox.asString();
                              } else {
                                    cout << " ";
                              }
                        }
                  }
                  cout << endl;
            }
      } else if (type == "filled") {
            for (int i{0}; i < fbox.getHeight(); i += 1) {
                  for (int j{0}; j < fbox.getWidth(); j += 1) {
                        cout << fbox.asString();
                  }
                  cout << endl;
            }
      } else {
            cerr << "Box type must be hollow or filled." << endl;
            return 2;
      }

      return 0;
}
