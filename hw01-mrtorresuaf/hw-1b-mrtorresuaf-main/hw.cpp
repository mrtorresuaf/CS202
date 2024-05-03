#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::fixed;
using std::setprecision;
using std::vector;

int main(int argc, char** argv) {
  
      string program_name{argv[0]};

      if (argc != 3) {

            cerr << "Usage: " << program_name << " input.txt output.txt" << endl;
             
            return 1;
            
      } else {

            vector<string> arguments{argv[1], argv[2]};
            ifstream in{arguments[0]};
            ofstream out{arguments[1]};
            double n;

            while (in >> n) {

                  out << fixed << setprecision(2) << n << endl;
            }

            in.close();
            out.close();
      }
  
      return 0;
}
