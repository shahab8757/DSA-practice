#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < num; i++) {  // Loop from 1 to num-1
        if (num % i == 0) {          // Check if i is a factor
            count++;                 // Increment the count
        }
    }

    cout << "Total Factors are: " << count << endl;

    return 0;
}
