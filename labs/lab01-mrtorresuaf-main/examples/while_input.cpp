#include <iostream>
#include <vector>


int main() {

  std::vector<int> numbers;
 
  std::cout << "Please enter an integer: ";

  int n;
  
  while (std::cin >> n) {

    numbers.push_back(n);

    std::cout << "Please enter another integer (or press Ctrl-D to exit): ";
  }

  

  std::cout << "Your numbers are: ";

  for (int i : numbers) {

    std::cout << " " << i;

  }

  std::cout << std::endl;
  
  return 0;
}
