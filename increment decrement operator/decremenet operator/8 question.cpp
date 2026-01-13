#include <iostream>
using namespace std;

int main() {
    int x = 12;
    x = x++;
    x = x++;
    x = x++;
    x = ++x;
    x = x++;

    cout << "x = " << x << endl;
    return 0;
}
