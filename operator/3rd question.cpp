#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    // 1. Swap using third variable
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping (using third variable): a = " << a << ", b = " << b << endl;

    // Swap back to original for second method
    temp = a;
    a = b;
    b = temp;

    // 2. Swap without using third variable
    a = a + b;  // sum of both numbers
    b = a - b;  // new value of b
    a = a - b;  // new value of a

    cout << "After swapping (without third variable): a = " << a << ", b = " << b << endl;

    return 0;
}
