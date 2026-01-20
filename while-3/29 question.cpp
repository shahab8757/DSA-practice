#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int temp = N;
    int reversed = 0;

    // Reverse the number
    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    // Check for palindrome
    if (N == reversed)
        cout << N << " is a Palindrome Number." << endl;
    else
        cout << N << " is not a Palindrome Number." << endl;

    return 0;
}
