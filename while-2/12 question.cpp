#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    
    for (int i = 1; i <= 100; i++) {
        sum += (i * i) * (i + 1);
    }
    
    cout << "Sum of the series 1²*2 + 2²*3 + 3²*4 + ... + 100²*101 is: " << sum << endl;
    
    return 0;
}