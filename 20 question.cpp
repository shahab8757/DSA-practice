#include <iostream>
using namespace std;

int main() {
    int a, b;
    long long result = 1;  // To handle large results

    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    for (int i = 1; i <= b; i++) {
        result *= a;  // Multiply a, b times
    }

    cout << a << " to the power " << b << " is: " << result << endl;

    return 0;
}
