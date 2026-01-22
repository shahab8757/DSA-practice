#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is palindrome
bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;  // Characters don't match
        }
        start++;
        end--;
    }

    return true;  // All characters matched
}

int main() {
    string s1;
    cout << "Enter a string: ";
    cin >> s1;

    if (isPalindrome(s1))
        cout << s1 << " is a Palindrome String." << endl;
    else
        cout << s1 << " is not a Palindrome String." << endl;

    return 0;
}
