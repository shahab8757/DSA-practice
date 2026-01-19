#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sum = 0.0;
    
    for (int i = 1; i <= 100; i++) {
        sum += 1.0 / (2 * i);
    }
    
    cout << fixed << setprecision(6);
    cout << "Sum of the series 1/2 + 1/4 + 1/6 + ... + 1/200 is: " << sum << endl;
    
    return 0;
}