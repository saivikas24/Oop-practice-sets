#include<iostream>
using namespace std;

int rem,num,result=0,number;

int main(){
cout<<"Enter three digit number";
cin>>num;
number=num;
 
while(number!=0){
    rem=number%10;
    result=result+(rem * rem * rem);
    number=number/10;
}
if(num==result){
    cout<<num<<"is an arm strong number";
}
else{
    cout<<num<<"is not an armstong number";
}

    return 0;
}