#include <iostream>
using namespace std;

int main() {
    int a = 20;
    a++;
    int b = a++;
    int c = ++b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
