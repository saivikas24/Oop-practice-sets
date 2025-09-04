//Check a number is prime or not using for loop
#include<iostream>
using namespace std;
int i,n,k=0;
int main(){
    cout<<"enter any number";
    cin>>n;
    if(n<0){
        cout<<"please enter positive number";
    }
    else if(n==0){
        cout<<"Please enter positive number";
    }
    else{
        for(i=1;i<=n;i++){
            if(n%i==0){
                k=k+1;
            }
        }
        if(k==2){
            cout<<"prime";
        }
        else{
            cout<<" not prime";
        }
    }
    return 0;
}