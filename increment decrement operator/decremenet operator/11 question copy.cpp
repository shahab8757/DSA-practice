#include <iostream>
using namespace std;

int main() {
    int a = 12;
    a++;
    ++a;
    int b = a++;
    b++;
    int c = a++ + --b;
    c--;
    --b;
    int d = ++a + b++ + --c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}
