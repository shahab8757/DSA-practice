#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int sum = 0;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;      // Extract last digit
        if (digit % 2 != 0) {       // Check if digit is odd
            sum += digit;           // Add odd digit to sum
        }
        temp = temp / 10;           // Remove last digit
    }

    cout << "Sum of odd digits: " << sum << endl;

    return 0;
}
