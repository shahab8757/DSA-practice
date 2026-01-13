#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = a++;
    b++;
    int c = a++ + --b;
    int d = a++ + ++b + c++;
    d++;
    c--;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}
