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

    string largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i].length() > largest.length()) {
            largest = arr[i];
        }
    }

    cout << "Largest string: " << largest << endl;

    return 0;
}