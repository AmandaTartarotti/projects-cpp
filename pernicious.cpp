#include <iostream>
#include <cmath>

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= std::sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int count_ones_in_binary(int n) {
  int count = 0;
  while (n > 0) {
    if (n % 2 == 1) {
      count++;
    }
    n /= 2;
  }
  return count;
}

bool is_pernicious(int n) {
  int count = count_ones_in_binary(n);
  return is_prime(count);
}

int main() {
  int a, b;
  std::cin >> a >> b;

  for (int n = a; n <= b; n++) {
    if (is_prime(n) && is_pernicious(n)) {
      std::cout << n << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}
