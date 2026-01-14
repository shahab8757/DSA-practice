#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers (x and y): ";
    cin >> x >> y;

    if (y != 0 && x % y == 0) {
        cout << y << " is a factor of " << x << "." << endl;
    } else {
        cout << y << " is NOT a factor of " << x << "." << endl;
    }

    return 0;
}
