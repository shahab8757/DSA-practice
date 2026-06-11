// leet code
#include <iostream>
using namespace std;

int numberOfSteps(int num) {
    int steps = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            num = num / 2;  // divide by 2 if even
        } else {
            num = num - 1;  // subtract 1 if odd
        }
        steps++;
    }
    return steps;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of steps to reduce to 0: " << numberOfSteps(num) << endl;
    return 0;
}
