#include <iostream>
using namespace std;

int main() {
    int num;
    unsigned long long factorial = 1;  // Use long long for large factorials

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;  // Multiply each number up to num
        }
        cout << num << "! = " << factorial << endl;
    }

    return 0;
}
