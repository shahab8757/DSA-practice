#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sum = 0.0;
    
    for (int i = 1; i <= 100; i++) {
        sum += 1.0 / (i * i * i);
    }
    
    cout << fixed << setprecision(10);
    cout << "Sum of the series 1/1³ + 1/2³ + 1/3³ + ... + 1/100³ is: " << sum << endl;
    
    return 0;
}