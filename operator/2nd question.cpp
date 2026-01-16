#include <iostream>
using namespace std;

int main() {
    int n = 5783;

    cout << "Digits of the number one by one:\n";

    while (n > 0) {
        int digit = n % 10;  // Get the last digit
        cout << digit << endl;
        n = n / 10;          // Remove the last digit
    }

    return 0;
}
