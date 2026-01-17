#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "12345"; // set your password here
    string inputPassword;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter password: ";
        cin >> inputPassword;

        if (inputPassword == correctPassword) {
            cout << "Login Successful!" << endl;
            return 0; // exit program
        } else {
            attempts--;
            if (attempts > 0) {
                cout << "Incorrect password. Attempts left: " << attempts << endl;
            } else {
                cout << "Account Locked!" << endl;
            }
        }
    }

    return 0;
}
