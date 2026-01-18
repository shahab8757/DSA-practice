#include <iostream>
using namespace std;

int main() {
    int i = 1, count = 0;  // Initialize i and counter
    while (i <= 100) {
        if (i % 7 == 0) {  // Check if divisible by 7
            cout << i << " ";  // Print the number
            count++;  // Increment counter
        }
        i++;  // Move to next number
    }
    cout << "\nTotal numbers divisible by 7: " << count << endl;
    return 0;
}
