#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
   cout<<"The multiplication table of "<<num<<endl;
   for(int i=1;i<=10;i++){
      cout<<num<<"x"<<i<<"="<<num*i<<":\n";
   }
    return 0;
    }
