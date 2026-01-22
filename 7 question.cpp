#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int count = 0;
   // Store the original number

    if (N == 0) {  // Special case for 0
        count = 1;
    } else {
        while (N > 0) {
            N = N/ 10;  // Remove last digit
            count++;            // Increment count
        }
    }

    cout << "Total digits of the number: " << count << endl;

    return 0;
}
