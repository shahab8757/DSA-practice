#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sum = 0.0;
    
    for (int i = 1; i <= 100; i++) {
        sum += 1.0 / (i * i);
    }
    
    cout << fixed << setprecision(6);
    cout << "Sum of the series 1/1² + 1/2² + 1/3² + ... + 1/100² is: " << sum << endl;
    
    return 0;
}