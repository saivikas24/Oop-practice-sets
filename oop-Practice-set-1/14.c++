#include<iostream>
using namespace std;
int main(){
    int i,k,num;
    for(num=1;num<=100;num++){
        k=0;
        for(i=1;i<=num;i++){
            if(num%i==0){
                k++;
            }
        }
        if(k==2){
            cout<<num<<"\n";
        }
    }
    return 0;
}