// leet code question palindrome number 
#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    long long reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    return original == reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
