#include<iostream>
using namespace std;
int i,j,n;
int main(){
cout<<"ente n value";
cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}