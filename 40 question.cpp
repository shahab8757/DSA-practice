// leet code
#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    return (n > 0) && ((n & (n - 1)) == 0) && (n & 0x55555555);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfFour(n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
