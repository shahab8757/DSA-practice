#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Factorial of each digit:" << endl;

    while (N > 0) {
        int digit = N % 10;         // Extract last digit
        cout << digit << "! = " << factorial(digit) << endl;
        N = N / 10;                 // Remove last digit
    }

    return 0;
}


 