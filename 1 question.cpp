/* #include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Digits of the number are:" << endl;

    while (N > 0) {
        int digit = N % 10;  // Get last digit
        cout << digit << endl;
        N = N / 10;           // Remove last digit
    }

    return 0;
}
 */

#include<iostream>
using namespace std;
int main(){
      int n; 
       int digit;
      cout<<"enter the number :";
      cin>>n;

      while(n>0){
           digit = n% 10;
            cout<<digit;
           n= n/10;
          

      }

      return 0;
}

