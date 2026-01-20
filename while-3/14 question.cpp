#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int sum = 0;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;  // Extract last digit
        sum += digit;            // Add digit to sum
        temp = temp / 10;        // Remove last digit
    }

    cout << "Sum of all digits: " << sum << endl;

    return 0;
}
