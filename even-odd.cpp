#include <iostream>

using namespace std;

int main() {
  int x;         // Declares x as a variable of type int
  cin >> x;      // Reads input value for x
  if (x % 2==0) { 
    cout << x << " Par\n";
  } else {
    cout << x << " Impar\n";
  }
  return 0;
}
