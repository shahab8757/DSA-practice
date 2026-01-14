#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is not an even number." << endl;
    }

    return 0;
}
