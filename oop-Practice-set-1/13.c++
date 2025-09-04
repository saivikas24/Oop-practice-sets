//Check whether a number is prime or not.
#include<iostream>
using namespace std;
int main(){
    int num,i,k=0;
    cout<<"enter any number";
    cin>>num;
    if(num<=1){
        cout<<"not a prime";
    }

    else{
    for(i=1;i<num;i++){
        if(num%i==0){
            k++;
        }
    }
    if(k>2){
            cout<<"not a prime number";
        }
        else{
            cout<<"It is a prime number";
        }
     }
    return 0;
}