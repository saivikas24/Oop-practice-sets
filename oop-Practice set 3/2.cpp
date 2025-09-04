#include<iostream>
using namespace std;

class BankAccount{
    private:
      float balance;

      public:
         void set_balance(float bl){
            if(bl>=0){
               balance=bl;
            }
            else{
                cout<<"Error Negative balance\n";
            }
         }

         void get_balance(){
                cout<<"\nBalance:"<<balance;
         }
};

int main(){
    BankAccount b1,b2;
    b1.set_balance(-11.3);
    b1.get_balance();
    b2.set_balance(25036.36);
    b2.get_balance();
}