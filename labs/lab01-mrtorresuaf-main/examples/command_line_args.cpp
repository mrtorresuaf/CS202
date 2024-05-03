#include <iostream>


int main(int argc, char** argv) {

  std::cout << "There are " << argc << " arguments (including the name of the program itself)" << std::endl;

  std::cout << "The name of the program as called is " << argv[0] << std::endl;

  return 0;
}
