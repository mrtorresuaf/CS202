#include "Starship.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

int main(int argc, char** argv) {
	
      if (argc != 4) {

            cerr << "Usage: " << argv[0]
                 << " \"Starship name\" \"Starship ID\" \"Starship mission\"" << endl;
             
            return 1;

      } else {

            Starship ship{argv[1], argv[2], argv[3]};
            
            cout << ship << endl;

      }

      return 0;
}
