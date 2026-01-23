#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int b = 30;

    cout << boolalpha << (a++ > 15 || b++ > 20) << endl;
    cout << a << endl;
    cout << b << endl;

    return 0;
}
