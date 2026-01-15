#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    cout << "Enter three angles of a triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    // A triangle is valid if sum of angles is 180 and all angles > 0
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is NOT valid." << endl;
    }

    return 0;
}
