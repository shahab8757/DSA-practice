#include <iostream>
using namespace std;

int main() {
    int a = 8;
    int b = 12;
    int c = ++a + b++;
    c--;
    --b;
    int d = c-- + ++b + ++a;
    int e = a + ++b + c + d++;
    cout << ++e << endl;
    return 0;
}
