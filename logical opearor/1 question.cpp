#include <iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;
    bool c = true;

    bool result = (a && b) || (b && c);

    cout << boolalpha << result << endl; // boolalpha prints true/false instead of 1/0
    return 0;
}
