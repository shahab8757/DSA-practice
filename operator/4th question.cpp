#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "\nBefore swapping: a = " << a << ", b = " << b << ", c = " << c << endl;

    // 1. With using a fourth variable
    int temp = a;
    a = c;
    c = b;
    b = temp;

    cout << "After swapping (with fourth variable): a = " << a << ", b = " << b << ", c = " << c << endl;

    // Reset values for next method
    // For demonstration, let's assume original values again
    cout << "\nEnter three numbers again: ";
    cin >> a >> b >> c;

    // 2. Without using fourth variable
    a = a + b + c;   // sum of all three
    b = a - (b + c); // b gets original a
    c = a - (b + c); // c gets original b
    a = a - (b + c); // a gets original c

    cout << "After swapping (without fourth variable): a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}
