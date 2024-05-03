#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {

  vector<int> numbers{5,10,3,2,7};

  for(int n: numbers) {
    cout << n << "\n";
  }

  return 0;
}
