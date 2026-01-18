#include <iostream>
using namespace std;

int main() {
    int i = 1, count = 0;  // Initialize i and counter

    while (i <= 100) {
        if (i % 7 == 0 || i % 10 == 7) {  // Divisible by 7 OR last digit 7
            cout << i << " ";  // Print the number
            count++;  // Increment the counter
        }
        i++;  // Move to next number
    }

    cout << "\nTotal numbers: " << count << endl;

    return 0;
}
