#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int result = x++ - --x + x-- - --x;

    cout << "result = " << result << endl;
    cout << "x = " << x << endl;

    return 0;
}
