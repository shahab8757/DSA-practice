#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter numbers (negative number or 0 to stop): " << endl;

    while (true) {
        cin >> num;

        if (num <= 0) {
            break; // stop input if negative or zero
        }

        sum += num; // add positive numbers
    }

    cout << "Sum of all positive numbers: " << sum << endl;

    return 0;
}
