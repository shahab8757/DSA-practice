//leet code 

#include <bits/stdc++.h>
using namespace std;

// Function to find kth factor of n
int kthFactor(int n, int k) {
    for (int i = 1; i <= n; i++) {   // Loop through 1 to n
        if (n % i == 0) {            // Check if i is a factor
            k--;                     // Reduce k (we found one factor)
            if (k == 0) return i;    // If k reaches 0, return the factor
        }
    }
    return -1;   // If less than k factors exist
}

int main() {
    int n, k;
    cin >> n >> k;    // Example input: 12 3
    cout << kthFactor(n, k) << endl;
    return 0;
}
