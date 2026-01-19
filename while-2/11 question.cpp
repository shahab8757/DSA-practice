#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    
    for (int i = 1; i <= 100; i++) {
        sum += i * (i + 1) * (i + 1);
    }
    
    cout << "Sum of the series 1*2² + 2*3² + 3*4² + ... + 100*101² is: " << sum << endl;
    
    return 0;
}