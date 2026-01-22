// leet code 
#include <iostream>
using namespace std;

int countDigits(int num) {
    int original = num;
    int count = 0;

    while (num > 0) {
        int digit = num % 10; // extract last digit
        if (original % digit == 0) { // check if divides
            count++;
        }
        num /= 10; // remove last digit
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Digits that divide the number: " << countDigits(num) << endl;
    return 0;
}
