#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int num;
        bool isPrime = true;

        cout << "Enter a number: ";
        cin >> num;

        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is NOT a prime number." << endl;

        cout << "Do you want to continue? (Y/y to continue, any other key to exit): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program exited." << endl;
    return 0;
}
