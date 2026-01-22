#include <iostream>
using namespace std;

// Function to check if all adjacent digits are different
bool hasDifferentAdjacentDigits(int N) {
    int prevDigit = -1;  // Initialize to a value not possible in digits

    while (N > 0) {
        int digit = N % 10;      // Extract last digit
        if (digit == prevDigit) { // Check if same as previous digit
            return false;
        }
        prevDigit = digit;        // Update previous digit
        N = N / 10;               // Remove last digit
    }

    return true;                  // All adjacent digits are different
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (hasDifferentAdjacentDigits(N))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
