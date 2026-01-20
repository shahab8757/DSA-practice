// leet code
#include <iostream>
using namespace std;

bool hasAlternatingBits(int n) {
    int prev = n & 1; // last bit
    n = n >> 1;

    while (n > 0) {
        int curr = n & 1; // current bit
        if (curr == prev)
            return false; // two adjacent bits are same
        prev = curr;
        n = n >> 1;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (hasAlternatingBits(n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
