#include <iostream>

using namespace std;

bool is_leap_year(int y) {
    return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

void advance(int delta, int& d, int& m, int& y) {
    while (delta > 0) {
        int days_in_month = 31;
        switch (m) {
            case 4:
            case 6:
            case 9:
            case 11:
                days_in_month = 30;
                break;
            case 2:
                days_in_month = is_leap_year(y) ? 29 : 28;
                break;
        }
        if (delta >= days_in_month - d + 1) {
            delta -= days_in_month - d + 1;
            d = 1;
            if (m == 12) {
                m = 1;
                y++;
            } else {
                m++;
            }
        } else {
            d += delta;
            delta = 0;
        }
    }
}

int main() {
    int d, m, y, delta;

    scanf("%d/%d/%d", &d, &m, &y);

    cin >> delta;
    advance(delta, d, m, y);
    cout  << d << m << y << endl;
    return 0;
}

/*

#include <iostream>

using namespace std;

bool is_leap_year(int y){
  bool r;
  if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)){
    r = true;
  } else {
    r = false;
  }
  return r;
}

void advance(int delta, int& d, int& m, int& y){
  while (delta>0){
    int days_in_month = 31;
    switch (m){
    case 4:
    case 6:
    case 9:
    case 11:
      days_in_month = 30;
      break;
    case 2:
      days_in_month = is_leap_year(y) ? 29 : 28;
      break;
    }
  if (delta > days_in_month - d + 1){
    delta -= (days_in_month - d + 1);
    m++; 
    d = 1; 
    if (m == 12){
      y++;
      m = 1;
    }
  } else {
    d += delta;
    delta = 0;
  }
  }
}
 

int main() {

  int d = 25, m = 2, y = 2001; 
advance(4, d, m, y); 
cout << d << ' ' << m << ' ' << y << '\n';
  
return 0;
}

*/
