#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    int z = (x > y) ? ((x < 15) ? x : y) : ((x > 5) ? y : x);
    cout << z << endl;
    return 0;
}
