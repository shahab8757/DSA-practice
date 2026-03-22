// leet code

#include <bits/stdc++.h>
using namespace std;

bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {   // Check all numbers less than n
        if (n % i == 0) {           // If i divides n
            sum += i;               // Add i to sum
        }
    }
    return (n == sum);              // Return true if sum equals n
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isPerfectNumber(n)) {
        cout << n << " is a Perfect Number" << endl;
    } else {
        cout << n << " is NOT a Perfect Number" << endl;
    }
    
    return 0;
}
