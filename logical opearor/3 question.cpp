#include <iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;
    bool c = true;

    bool result = (a || b) && (b || c);

    cout << boolalpha << "result = " << result << endl;
    return 0;
}
