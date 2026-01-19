#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout<<"enter the number:";
    cin>>num;
  

    
    for(int i=1;i<num ;i++){
        if(num % i == 0){
          cout<<i  <<" ";
            sum+= i;    
        }
  
    }

    if(sum== num){
        cout<<"this is perfect number :";
    }
    else{
        cout<<"this is not perfect number :";
    }
    return 0;
}
