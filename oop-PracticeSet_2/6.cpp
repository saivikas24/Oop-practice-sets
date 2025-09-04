#include<iostream>
using namespace std;
int main(){
    int n,rem,revnum=0;
    cout<<"enter n value";
    cin>>n;

    do{
        rem=n%10;
        revnum=revnum*10+rem;
        n=n/10;
    }while(n!=0);

    cout<<"reversednum"<<revnum;
    return 0;
}