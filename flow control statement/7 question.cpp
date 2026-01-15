#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    // Triangle is valid if sum of any two sides > third side
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is NOT valid." << endl;
    }

    return 0;
}
