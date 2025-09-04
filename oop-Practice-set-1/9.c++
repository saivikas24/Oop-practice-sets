//Find the factorial of a given number n.
#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    cout<<"the factorial of "<<n<<"is "<<fact<<endl;
    return 0;
    
}