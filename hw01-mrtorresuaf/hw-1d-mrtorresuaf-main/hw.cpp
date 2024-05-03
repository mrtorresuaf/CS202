#include <iostream>
#include <fstream>

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char** argv) {
  
  string program_name{argv[0]};

  if (argc < 2) {

    cerr << "Usage: " << program_name << " input.txt" << endl;
             
    return 1;

  } else {

    string input_filename{argv[1]};
    ifstream in{input_filename};
    double n;

    while (in >> n) {
      cout << n << endl;
    }
  }
  
  return 0;
}
