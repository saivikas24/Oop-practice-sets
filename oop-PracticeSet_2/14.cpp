#include<iostream>
using namespace std;

int num,largest=0,digit;
int main(){
    cout<<"enter num:";
    cin>>num;

    do{
        digit=num%10;
        if(digit>largest){
            largest=digit;
           
        }
         num=num/10;
       
    } while(num!=0);   
   
    cout<<"Largest digit"<<largest;
    return 0;
}