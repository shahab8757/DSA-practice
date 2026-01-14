#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    int z = 7;
    int result = (x < y) ? ((y < z) ? z : y) : x;
    cout << result << endl;
    return 0;
}
