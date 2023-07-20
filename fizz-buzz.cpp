#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  string output = "";
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      // If i is divisible by both 3 and 5, skip it
      continue;
    } else if (i % 3 == 0) {
      // If i is divisible by 3, append "Fizz"
      output += "Fizz ";
    } else if (i % 5 == 0) {
      // If i is divisible by 5, append "Buzz"
      output += "Buzz ";
    } else {
      // Otherwise, append i as a string
      output += to_string(i) + " ";
    }
  }

  // Print the final output string
  cout << output << endl;
  return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i%3==0 && i%5==0){
      cout << i << ' ';
    } else{
      if (i%3==0) {
        cout << "fizz" << ' ';
      } else{
        if (i%5==0){
          cout << "buzz" << ' ';
        } else{
          cout << i << ' ';
        }
      }
    }
  }
  return 0;
}
*/
