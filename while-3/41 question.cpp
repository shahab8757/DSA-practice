// leet code
#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {
    return (n > 0) && (1162261467 % n == 0);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfThree(n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
