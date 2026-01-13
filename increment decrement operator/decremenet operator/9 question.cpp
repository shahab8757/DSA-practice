#include <iostream>
using namespace std;

int main() {
    int x = 12;
    int y = x++ + ++x;
    y++;
    int z = ++y;
    int p = x++ - ++y + z++;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "p = " << p << endl;

    return 0;
}
