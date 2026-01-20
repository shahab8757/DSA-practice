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

// Function to check if a number is a Strong Number
bool isStrongNumber(int N) {
    int sum = 0;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;        // Extract last digit
        sum += factorial(digit);      // Add factorial of digit to sum
        temp = temp / 10;             // Remove last digit
    }

    return sum == N;                  // Strong number condition
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (isStrongNumber(N))
        cout << N << " is a Strong Number." << endl;
    else
        cout << N << " is not a Strong Number." << endl;

    return 0;
}
