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

    int sum = 0;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;          // Extract last digit
        sum += factorial(digit);        // Add factorial of digit to sum
        temp = temp / 10;               // Remove last digit
    }

    cout << "Sum of factorials of digits: " << sum << endl;

    return 0;
}


// this program is difficult for me: yes this is the difficult question for me ,i will do after soem time ,when my doubt will solve .