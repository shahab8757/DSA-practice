#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string arr[n];

    cout << "Enter the strings:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    cout << "\nStrings with even number of characters:\n";

    for(int i = 0; i < n; i++) {
        if(arr[i].length() % 2 == 0) {
            cout << arr[i] << endl;
            count++;
        }
    }

    cout << "\nTotal strings with even length: " << count << endl;

    return 0;
}