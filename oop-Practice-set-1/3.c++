//Take two integers as input and print the larger one using if-else.
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    if(num1>num2){
        cout<<"The larger number is:"<<num1<<endl;
    }
    else{
        cout<<"the larger number is:"<<num2<<endl;
    }
    return 0;

}