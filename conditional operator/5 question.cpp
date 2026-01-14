#include <iostream>
using namespace std;

int main() {
    int val = 10;
    int result = (val > 5) ? ((val < 8) ? 1 : 2) : 3;
    cout << result << endl;
    return 0;
}
