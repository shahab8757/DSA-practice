#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;
    
    while (i <= 100) {
        sum += i * (i + 1);
        i++;
    }
    
    cout << "Sum of the series 1*2 + 2*3 + 3*4 + ... + 100*101 is: " << sum << endl;
    
    return 0;
}