#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    bool result = (++x > 5) && (--y < 10);

    cout << boolalpha; // to print true/false instead of 1/0
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "result = " << result << endl;

    return 0;
}
