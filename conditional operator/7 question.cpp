#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 7, z = 3;
    int result = (x < y) ? ((y < z) ? x : y) : ((x > z) ? x : z);
    cout << result << endl;
    return 0;
}
