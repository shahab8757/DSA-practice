#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Check if character is NOT alphabet and NOT digit
    if (!((ch >= 'A' && ch <= 'Z') || 
          (ch >= 'a' && ch <= 'z') || 
          (ch >= '0' && ch <= '9'))) {
        cout << ch << " is a special character." << endl;
    } else {
        cout << ch << " is NOT a special character." << endl;
    }

    return 0;
}
