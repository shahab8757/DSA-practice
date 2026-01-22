#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int maxDigit = 0;

    while (N > 0) {
        int digit = N % 10;       // Extract last digit
        if (digit > maxDigit) {   // Update maxDigit if current digit is bigger
            maxDigit = digit;
        }
        N = N / 10;               // Remove last digit
    }

    cout << "The biggest digit is: " << maxDigit << endl;

    return 0;
}
