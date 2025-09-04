//Revese the digits of given number.(Example: input 1234->output 4321)
#include<iostream>
using namespace std;
int main(){
   int num,rem,rev=0;
   cout<<"enter any number:";
   cin>>num;
   while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
   }
   cout<<"the reversed number is"<<rev;
   
    return 0;
}
