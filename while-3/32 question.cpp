#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int count = 0;
    int temp = N;

    if (N == 0) {  // Special case for 0
        count = 1;
    } else {
        while (temp > 0) {
            temp = temp / 2;  // Divide by 2 to shift binary
            count++;           // Increment count for each bit
        }
    }

    cout << "Number of binary bits: " << count << endl;

    return 0;
}
