#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sum = 0.0;
    
    for (int i = 0; i < 100; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    
    cout << fixed << setprecision(6);
    cout << "Sum of the series 1/1 + 1/3 + 1/5 + ... + 1/199 is: " << sum << endl;
    
    return 0;
}