#include <iostream>
using namespace std;

// Function to check if digits are in increasing order
bool isIncreasing(int N) {
    int prevDigit = 10;  // Initialize to a number greater than any digit

    while (N > 0) {
        int digit = N % 10;  // Extract last digit
        if (digit >= prevDigit) {
            return false;    // Not increasing
        }
        prevDigit = digit;   // Update previous digit
        N = N / 10;          // Remove last digit
    }

    return true;             // All digits are in increasing order
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (isIncreasing(N))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
