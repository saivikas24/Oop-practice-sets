//Find the sum of digits of a given number 
#include<iostream>
using namespace std;
int main(){
 int num,rem,sum=0;
 cout<<"enter any number";
 cin>>num;

 while(num!=0){
    rem=num%10;
    sum=sum+rem;
    num=num/10;
 }
 
 cout<<"sum of "<<"number"<<" is "<<sum;
    return 0;
}