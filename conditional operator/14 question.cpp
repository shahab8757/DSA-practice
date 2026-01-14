
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase alphabet." << endl;
    } else {
        cout << ch << " is NOT a lowercase alphabet." << endl;
    }

    return 0;
}
