/*A Mersenne number is a number of the form Mn=2n−1 for some positive integer n≥0.

Write a C++ function unsigned long next_mersenne(unsigned long n) that returns the lowest Mersenne number greater or equal to n.*/

#include <iostream>
#include <cmath>

using namespace std;

unsigned long next_mersenne(unsigned long n){
  
  unsigned long s = 0;

  for (int i = 0; s < n; i++){
    s = pow(2,i) - 1;
  }

  return s;
}

int main() {
  cout << next_mersenne(4294967296UL) << '\n';
return 0;
}
 









  