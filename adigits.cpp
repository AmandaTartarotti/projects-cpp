#include <iostream>

int adigits(int a, int b, int c) {
    int largest_num = 0;

    // Determine the largest digit among a, b, and c
    if (a >= b && a >= c) {
        largest_num = a * 100;
        if (b >= c) {
            largest_num += b * 10 + c;
        } else {
            largest_num += c * 10 + b;
        }
    } else if (b >= a && b >= c) {
        largest_num = b * 100;
        if (a >= c) {
            largest_num += a * 10 + c;
        } else {
            largest_num += c * 10 + a;
        }
    } else {
        largest_num = c * 100;
        if (a >= b) {
            largest_num += a * 10 + b;
        } else {
            largest_num += b * 10 + a;
        }
    }

    return largest_num;
}


int main(){

    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << adigits(a, b, c) << std::endl;
    return 0;
}

