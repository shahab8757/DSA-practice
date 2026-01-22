#include <iostream>
using namespace std;

// Function to check if digits are in decreasing order
bool isDecreasing(int N) {
    int prevDigit = -1;  // Initialize to a number smaller than any digit

    while (N > 0) {
        int digit = N % 10;  // Extract last digit
        if (digit <= prevDigit) {
            return false;    // Not decreasing
        }
        prevDigit = digit;   // Update previous digit
        N = N / 10;          // Remove last digit
    }

    return true;             // All digits are in decreasing order
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (isDecreasing(N))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
