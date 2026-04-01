#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    int i = 1;
    
    while (i <= 100) {
        sum += i * i * i;
        i += 2;
    }
    
    cout << "Sum of cubes of odd numbers from 1 to 100 is: " << sum << endl;
    
    return 0;
}