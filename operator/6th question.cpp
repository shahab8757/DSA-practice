#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double CP = 120, SP = 90;
    double lossPercent = ((CP - SP) / CP) * 100.0;

    cout << fixed << setprecision(2);
    cout << "Loss % = " << lossPercent << "%" << endl; // 25.00%
    return 0;
}
