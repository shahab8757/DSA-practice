// leet code

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool isThreeDivisors(int n) {
    int root = sqrt(n);
    if (root * root != n) return false; // Not a perfect square
    return isPrime(root);
}

int main() {
    cout << boolalpha;
    cout << isThreeDivisors(2) << endl;  // false
    cout << isThreeDivisors(4) << endl;  // true
    cout << isThreeDivisors(9) << endl;  // true
    cout << isThreeDivisors(16) << endl; // false
    return 0;
}

