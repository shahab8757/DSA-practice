// leet code
 #include <bits/stdc++.h>
using namespace std;

int smallestEvenMultiple(int n) {
    return (n % 2 == 0) ? n : n * 2;
}

int main() {
    cout << smallestEvenMultiple(5) << endl;  // Output: 10
    cout << smallestEvenMultiple(6) << endl;  // Output: 6
    return 0;
}
