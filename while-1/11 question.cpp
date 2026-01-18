#include <iostream>
#include <cmath>  // For sqrt()
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            cout << num << " is not a prime number." << endl;
            return 0;  // Exit immediately if divisible
        }
    }

    // If loop completes, no divisor found
    cout << num << " is a prime number." << endl;

    return 0;
}
