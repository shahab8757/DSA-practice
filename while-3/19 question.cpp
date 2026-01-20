// leet code 
#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int sum = 0, product = 1;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    return product - sum;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Result: " << subtractProductAndSum(n) << endl;

    return 0;
}
