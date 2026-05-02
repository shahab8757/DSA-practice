#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int product = 1;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;  // Extract last digit
        product *= digit;        // Multiply with product
        temp = temp / 10;        // Remove last digit
    }

    if (product % 2 == 0)
        cout << "It will give Even Product" << endl;
    else
        cout << "It will give Odd Product" << endl;

    return 0;
}
