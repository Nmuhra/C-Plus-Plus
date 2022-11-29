#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string name;
  // Ask the user to input their name.
  std::cout << "Enter your name: ";
  getline(cin, name);

  cout << "Hello " << name;

  return 0;
}