#include <iostream>
#include <cmath> // for pow()
using namespace std;

int main() {
    char choice;

    do {
        double a, b;
        cout << "Enter base (a): ";
        cin >> a;
        cout << "Enter exponent (b): ";
        cin >> b;

        double result = pow(a, b); // calculate a^b
        cout << a << " raised to the power " << b << " is " << result << endl;

        cout << "Do you want to continue? (Y/y to continue, any other key to exit): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program exited." << endl;
    return 0;
}
