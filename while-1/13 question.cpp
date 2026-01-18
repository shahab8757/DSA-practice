#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the term number: ";
    cin >> n;

    int t1 = 0, t2 = 1, nextTerm;

    if (n == 1) {
        cout << "The " << n << "th term is: " << t1 << endl;
        return 0;
    }
    if (n == 2) {
        cout << "The " << n << "th term is: " << t2 << endl;
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;  // Calculate next term
        t1 = t2;              // Shift t1 to t2
        t2 = nextTerm;        // Shift t2 to nextTerm
    }

    cout << "The " << n << "th term is: " << t2 << endl;

    return 0;
}
