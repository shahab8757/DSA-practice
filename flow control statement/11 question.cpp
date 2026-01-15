#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    if(a == 0) {
        cout << "Not a quadratic equation." << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real and distinct roots: " << root1 << " and " << root2 << endl;
    } 
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Two real and equal roots: " << root << endl;
    } 
    else {
        cout << "No real roots exist." << endl;
    }

    return 0;
}
