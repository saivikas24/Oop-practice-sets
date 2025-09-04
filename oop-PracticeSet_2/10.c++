//print all the sum of even numbers form 1 to 100 using a for loop
#include<iostream>
using namespace std;
int main(){
    int num=2,i,sum=0;
    for(i=0;i<=100;i=i+2){
         sum=sum+i;
    }
    cout<<"the sum of all the even numbers from 1 to 100 is "<<sum;
}