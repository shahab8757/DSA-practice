#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 20;
    int c = a++ + b++ - ++a - --a;

    cout << "c = " << c << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
