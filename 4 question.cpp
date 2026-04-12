#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Digits greater than or equal to 5 are:" << endl;

    while (N > 0) {
        int digit = N % 10;      // Extract last digit
        if (digit >= 5) {        // Check if digit is greater than or equal to 5
            cout << digit << endl;
        }
        N = N / 10;              // Remove last digit
    }

    return 0;
}
