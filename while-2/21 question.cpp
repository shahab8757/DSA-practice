#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors of " << num << " (excluding itself): ";
    for (int i = 1; i < num; i++) {  // Loop from 1 to num-1
        if (num % i == 0) {          // Check if i is a factor
            cout << i << " ";
            sum += i;                // Add factor to sum
        }
    }

    cout << "\nSum is: " << sum << endl;

    return 0;
}



 

