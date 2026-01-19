#include <iostream>
using namespace std;

int main() {
    int i = 1;          // start from 1
    int sum = 0;        // to store sum of squares

    while (i <= 100) {
        sum += i * i;   // add square of i to sum
        i++;            // move to next number
    }

    cout << "Sum of squares from 1 to 100 is: " << sum << endl;
    return 0;
}