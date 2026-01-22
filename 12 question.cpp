#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int count = 0;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;      // Extract last digit
        if (digit % 2 != 0) {       // Check if the digit is odd
            count++;                // Increment count
        }
        temp = temp / 10;           // Remove last digit
    }

    cout << "Number of odd digits: " << count << endl;

    return 0;
}
