#include <iostream>

using std::cout;

int main(int argc, char** argv) {

  cout << "There are " << argc << " arguments\n";
  cout << "The program's name is " << argv[0] << "\n";

  return 0;
}
