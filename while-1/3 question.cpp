#include <iostream>
using namespace std;

int main() {
    int i = 2;  // Start from 2 (first even number)
    while (i <= 100) {  // Loop until 100
        cout << i << " ";  // Print the even number
        i += 2;  // Increment by 2 to get next even number
    }
    return 0;
}
