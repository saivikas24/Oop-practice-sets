//Print all numbers from 1 to 100 using a for loop.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number upto which number you want to print";
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<i<<"\n";
    }
    return 0;
}