#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int temp = N;
    int count1 = 0;
    int count0 = 0;

    if (N == 0) {  // Special case for 0
        count0 = 1;
    } else {
        while (temp > 0) {
            int bit = temp % 2;  // Extract last binary bit
            if (bit == 1)
                count1++;
            else
                count0++;
            temp = temp / 2;     // Shift right in binary
        }
    }

    cout << "Number of 1 bits: " << count1 << endl;
    cout << "Number of 0 bits: " << count0 << endl;

    return 0;
}
