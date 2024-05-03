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
            ifstream input_file(arguments[0]);
            ofstream output_file{arguments[1]};
            
            if (!input_file.is_open()) {
                  cerr << "Error opening file " << arguments[0] << " for reading" << endl;
                  return 2;
            } else if (!output_file.is_open()) {
                  cerr << "Error opening file " << arguments[1] << " for writing" << endl;
                  return 3;
            }

            double n;
            while (input_file >> n) {
            
                  output_file << fixed << setprecision(2) << n << endl;
            }
            
            if (!input_file.eof()) {
                  cerr << "Failed to read entire input file " << arguments[0] << endl;
                  return 4;
            }

            input_file.close();
            output_file.close();
      }
  
      return 0;
}
