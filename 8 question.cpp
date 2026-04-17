#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int temp = N;
    int divisor = 1;

    // Find the highest place value
    while (temp / divisor >= 10) {
        divisor *= 10;
    }

    cout << "Digits of the number from left to right:" << endl;

    while (divisor > 0) {
        int digit = N / divisor;   // Extract the leftmost digit
        cout << digit << endl;
        N = N % divisor;           // Remove the leftmost digit
        divisor = divisor / 10;    // Reduce divisor by factor of 10
    }

    return 0;
}
