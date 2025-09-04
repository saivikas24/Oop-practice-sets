//Read an integer and check whether it is even or odd.
#include<iostream>
using namespace std;
int main(){
 int num;
 cout<<"Enter a number:";
 cin>>num;

    if(num%2==0){
        cout<<"Even number";
    }
    else{
        cout<<"odd number";
    }
    return 0;
}