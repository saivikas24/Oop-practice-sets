//Check weather a given number is a palindrome or not (Example:121 id palindrome ,123 is not)
#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0;   
    cout<<"Enter number";
    cin>>num;
     int orginalNum=num;
    while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
    }
    if(orginalNum==rev){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not a palindrome";
    }
    return 0;
}