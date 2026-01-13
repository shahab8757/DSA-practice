#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = a++;
    b++;
    int c = a++ + --b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
