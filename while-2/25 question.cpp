#include <bits/stdc++.h>
using namespace std;

int commonFactors(int a, int b) {
    int count = 0;
    int limit = min(a, b);
    for (int i = 1; i <= limit; i++) {
        if (a % i == 0 && b % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << commonFactors(12, 6) << endl;   // Output: 4
    cout << commonFactors(25, 30) << endl;  // Output: 2
    return 0;
}
