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
        if (digit <= 5) {           // Check if digit is less than or equal to 5
            count++;                // Increment count
        }
        temp = temp / 10;           // Remove last digit
    }

    cout << "Number of digits less than or equal to 5: " << count << endl;

    return 0;
}
