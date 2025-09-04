//find factorial of a number using while loop
#include<iostream>
using namespace std;
int main(){
  int fact=1,n;
  cout<<"enter n value ";
  cin>>n;
  while(n>0){
    fact=fact*n;
    n--;
  }
  cout<<fact;
    return 0;

}