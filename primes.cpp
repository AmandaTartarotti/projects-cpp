#include <iostream>

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  std::cin >> n;

  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      std::cout << i << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}
