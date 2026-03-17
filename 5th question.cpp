#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double CP = 120, SP = 160;

    // Calculate profit percentage
    double profitPercent = ((SP - CP) / CP) * 100.0;

    cout << fixed << setprecision(2);
    cout << "Profit % = " << profitPercent << "%" << endl;

    return 0;
}
