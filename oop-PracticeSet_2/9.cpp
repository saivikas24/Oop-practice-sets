#include<iostream>
using namespace std;
int main(){
    int num;

do{
    cout<<"\nenter n value:";
    cin>>num;
}   while(num>=0);

cout<<"program ended because you entered a negative number."<<endl;
}