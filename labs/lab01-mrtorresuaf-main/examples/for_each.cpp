#include <vector>
#include <iostream>


int main() {

  std::vector<int> numbers{1974, 10, -70, 543};
  
  
  for (int n : numbers) {

    std::cout << n << std::endl;

  }

  return 0;
}
