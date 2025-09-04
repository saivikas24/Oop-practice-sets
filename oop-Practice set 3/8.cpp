#include<iostream>
using namespace std;

class account{
    private:
      int accountNumber;
      float balance;

      public:
           void set_values(int an,float bl){
             accountNumber=an;
              balance=bl;
             }
           
             void get_values(){
                cout<<"AccountNumber:"<<accountNumber<<"\nBalance:"<<balance;
             }
        
};

int main(){
    account a1,a2;
    a1.set_values(240200039,43298);
    a1.get_values();
}