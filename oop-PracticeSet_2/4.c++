//First n natural numbers (n) using a for loop
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
cout<<"enter n value:";
cin>>n;
for(i=1;i<=n;i++){
    sum=sum+i;
}
cout<<sum;
    return 0;
}