#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
     cout<<"the sum of first "<<n<<" natural numbers:"<<sum<<endl;

        return 0;
}