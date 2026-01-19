#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i += 2) {  // Loop through odd numbers only
        sum += i;  // Add i to sum
    }

    cout << "Sum of all odd numbers from 1 to 100 is: " << sum << endl;

    return 0;
}
