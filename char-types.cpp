#include <iostream>
#include <cctype>

int main() {
  int n;
  std::cin >> n;

  int letter_count = 0;
  int digit_count = 0;
  int non_alnum_count = 0;

  for (int i = 0; i < n; i++) {
    char c;
    std::cin >> c;

    if (std::isalpha(c)) {
      // If c is a letter, increment letter_count
      letter_count++;
    } else if (std::isdigit(c)) {
      // If c is a digit, increment digit_count
      digit_count++;
    } else {
      // Otherwise, increment non_alnum_count
      non_alnum_count++;
    }
  }

  /*
  #include <iostream>

using namespace std;

int main() {
  int n;
  std::cin >> n;
  int is_num = 0;
  int is_let = 0;
  int is_oth = 0;
  for (int i = 0; i < n; i++) {
    char c;
    std::cin >> c;
    if (c>='0' && c<='9' ){
      is_num++;
    } else if((c >= 'a' && c <= 'z' )|| (c >= 'A' && c <= 'Z')){
      is_let++;
    }else{
      is_oth++;
    }
  }

  cout << is_let << ' ' << is_num << ' ' << is_oth << endl;

  return 0;
}
  */

  // Print the results
  std::cout << letter_count << " " << digit_count << " " << non_alnum_count << std::endl;

  return 0;
}
