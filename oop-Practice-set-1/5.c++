//Take an integer and check whether it is positive, negative, or zero.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any integer";
    cin>>n;
    if(n>0){
        cout<<"the number is positive";
    }
    else if(n==0){
        cout<<"the number is zero";
    }
    else{
        cout<<"the number is negative";
    }
    return 0;
}