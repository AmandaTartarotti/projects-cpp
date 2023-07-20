#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  int k, d;
  std::cin >> k;
  std::cin >> d;

  double pi = 0.0;
  for (int n = 0; n <= k; n++) {
    pi += pow(-1, n) / (2.0 * n + 1.0);
  }
  pi *= 4.0;

  std::cout << std::fixed << std::setprecision(d) << pi << std::endl;

  return 0;
}
