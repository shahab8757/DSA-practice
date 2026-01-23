#include <iostream>
using namespace std;

int main() {
    double CP, SP;
    cout << "Enter Cost Price (CP): ";
    cin >> CP;
    cout << "Enter Selling Price (SP): ";
    cin >> SP;

    if (SP > CP) {
        double profit = SP - CP;
        double profitPercent = (profit / CP) * 100;
        cout << "Profit = " << profitPercent << "%." << endl;
    } 
    else if (CP > SP) {
        double loss = CP - SP;
        double lossPercent = (loss / CP) * 100;
        cout << "Loss = " << lossPercent << "%." << endl;
    } 
    else {
        cout << "No Profit, No Loss." << endl;
    }

    return 0;
}
