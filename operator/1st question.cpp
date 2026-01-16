#include<iostream>
using namespace std;
int main(){
     int n = 5783;
     
    // Last digit
int lastDigit = n % 10;
  
  // Last two digits
    int lastTwoDigits = n % 100;

    // Remove last digit
    int removeLastDigit = n / 10;

    // Remove last two digits
    int removeLastTwoDigits = n / 100;

    // Output the results
    cout << "Original number: " << n << endl;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Last two digits: " << lastTwoDigits << endl;
    cout << "After removing last digit: " << removeLastDigit << endl;
    cout << "After removing last two digits: " << removeLastTwoDigits << endl;

    return 0;


















}


