#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors of " << num << " are: ";
    for (int i = 1; i < num; i++) {  // Loop from 1 to num-1
        if (num % i == 0) {          // Check if i is a factor
            cout << i << "\t";       // Print the factor
        }
    }

    cout << endl;
    return 0;
}
