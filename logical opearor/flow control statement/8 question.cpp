#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    // First, check if triangle is valid
    if (a + b > c && a + c > b && b + c > a) {
        // Check for equilateral
        if (a == b && b == c) {
            cout << "The triangle is equilateral." << endl;
        }
        // Check for isosceles
        else if (a == b || b == c || a == c) {
            cout << "The triangle is isosceles." << endl;
        }
        // If not equilateral or isosceles, it's scalene
        else {
            cout << "The triangle is scalene." << endl;
        }
    } else {
        cout << "The sides do not form a valid triangle." << endl;
    }

    return 0;
}
