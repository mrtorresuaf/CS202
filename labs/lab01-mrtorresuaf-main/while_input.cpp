#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main() {

  vector<int> numbers{};
  int input;

  cout << "Enter numbers to be added to a vector:\n";
  while(cin >> input) {
    numbers.push_back(input);
  }
  
  for(int n: numbers) {
    cout << n << "\n";
  }

  return 0;
}
