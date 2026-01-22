/* #include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int maxDigit = 0;
    int minDigit = 9;

    int temp = N; // Store original number for processing

    while (temp > 0) {
        int digit = temp % 10;      // Extract last digit

        if (digit > maxDigit) {     // Update maxDigit
            maxDigit = digit;
        }

        if (digit < minDigit) {     // Update minDigit
            minDigit = digit;
        }

        temp = temp / 10;           // Remove last digit
    }

    int difference = maxDigit - minDigit;
    cout << "Difference between biggest and smallest digit: " << difference << endl;

    return 0;
}
 */

#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the number:";
cin>>n;


int maxdigit= 0;
int mindigit= 9;
  
int temp =n;

 while(temp>0){
     int digit= temp%10;
   if(digit>maxdigit){
    maxdigit=digit;
   }

    if(digit <mindigit){
        mindigit= digit;
    }
    temp=temp/10;


 }

  int difference= maxdigit-mindigit;
cout<<"the difference is:" <<difference;







}