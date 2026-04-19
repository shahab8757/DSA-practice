#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int count = 0;
    int temp = N;

    if (N == 0) {  // Special case when the number itself is 0
        count = 1;
    } else {
        while (temp > 0) {
            int digit = temp % 10;  // Extract last digit
            if (digit == 0) {
                count++;            // Increment count if digit is 0
            }
            temp = temp / 10;       // Remove last digit
        }
    }

    cout << "Number of 0 digits: " << count << endl;

    return 0;
}
