#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase alphabet." << endl;
    } else {
        cout << ch << " is NOT an uppercase alphabet." << endl;
    }

    return 0;
}
