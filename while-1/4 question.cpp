#include <iostream>
using namespace std;

int main() {
    int i = 1;  // Start from 1 (first odd number)
    while (i <= 100) {
        cout << i << " ";
        i += 2;  // Increase by 2 to get next odd number
    }
    return 0;
}
