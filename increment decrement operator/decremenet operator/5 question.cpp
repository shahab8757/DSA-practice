#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    int z = x-- - --y + x++ + ++y;

    cout << "z = " << z << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
