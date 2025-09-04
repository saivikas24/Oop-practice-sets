//Read three integers and print the largest number.
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    cout<<"Enter num3:";
    cin>>num3;

    if(num1>=num2&&num1>=num3){
        cout<<"The larger number is:"<<num1<<endl;
    }
    else if(num2>=num1&&num2>=num3){
        cout<<"the larger number is:"<<num2<<endl;
    }
    else{
        cout<<"the larger number is:"<<num3<<endl;
    }
    return 0;

}