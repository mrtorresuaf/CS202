#include <iostream>

using std::string;
using std::cin;
using std::cout;

int main() {

  string name;

  cout << "What is your name?: ";
  cin >> name;
  cout << "Your name is " + name + "\n";

  return 0;
}
