#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int reversed = 0;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;          // Extract last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        temp = temp / 10;               // Remove last digit
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
