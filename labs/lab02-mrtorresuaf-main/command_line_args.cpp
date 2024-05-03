#include <iostream>

using std::cout;

int main(int argc, char** argv) {

  cout << "There are " << argc << " arguments, including this one\n";
  cout << "The program's name is " << argv[0] << "\n";

  return 0;
}
