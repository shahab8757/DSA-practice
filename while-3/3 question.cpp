#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Odd digits of the number are:" << endl;

    while (N > 0) {
        int digit = N % 10;      // Extract last digit
        if (digit % 2 != 0) {    // Check if the digit is odd
            cout << digit << endl;
        }
        N = N / 10;              // Remove last digit
    }

    return 0;
}
