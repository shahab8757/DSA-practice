#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c = a-- + ++b - b-- + ++a;

    cout << "c = " << c << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
