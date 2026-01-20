// leet code
#include <iostream>
using namespace std;

int alternatingDigitSum(int n) {
    int sum = 0;
    int num = n;
    int divisor = 1;

    // Find the highest place value
    while (num / divisor >= 10) {
        divisor *= 10;
    }

    int sign = 1; // start with positive

    while (divisor > 0) {
        int digit = num / divisor; // extract leftmost digit
        sum += sign * digit;       // add/subtract digit
        sign = -sign;              // flip sign
        num = num % divisor;       // remove leftmost digit
        divisor = divisor / 10;    // reduce divisor
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Alternating digit sum: " << alternatingDigitSum(n) << endl;
    return 0;
}
