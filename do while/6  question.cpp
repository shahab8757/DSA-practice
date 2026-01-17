#include <iostream>
#include <string>
using namespace std;

bool isValidEmail(const string& email) {
    // Check if email contains '@' and '.'
    size_t atPos = email.find('@');
    size_t dotPos = email.find('.');
    
    // '@' should not be first or last, '.' should be after '@'
    if (atPos != string::npos && dotPos != string::npos && atPos < dotPos && atPos != 0 && dotPos != email.length() - 1) {
        return true;
    }
    return false;
}

int main() {
    string email;
    int attempts = 5;

    while (attempts > 0) {
        cout << "Enter a valid email: ";
        cin >> email;

        if (isValidEmail(email)) {
            cout << "Valid Email Entered!" << endl;
            return 0; // exit program
        } else {
            attempts--;
            if (attempts > 0) {
                cout << "Invalid email format. Attempts left: " << attempts << endl;
            } else {
                cout << "Maximum attempts reached. Program exiting." << endl;
            }
        }
    }

    return 0;
}
