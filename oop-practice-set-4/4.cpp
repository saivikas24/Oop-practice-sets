// 4. Implement a class BankAccount with data members accountNumber,
// balance. Write multiple constructors for:
// • Default initialization.
// • Initialization with account number only.
// • Initialization with account number and balance.

#include<iostream>
using namespace std;

class BankAccount{
    private:
      int acc;
      float bal;

    public:
      BankAccount(){  //Default constructor
        this->acc=0;
       this-> bal=0;
      }

    BankAccount(int accN){
       this-> acc=accN;
        this->bal=0;
    }

    BankAccount(int accN,float baln){
        this->acc=accN;
        this->bal=baln;
    }

    friend void get_values(BankAccount y);
};

 void get_values(BankAccount y){
     cout<<"\nAccount number:"<<y.acc<<"\nBalance:"<<y.bal;
 }

 int main(){
    BankAccount b1;
    get_values(b1);
    BankAccount b2(39);
    get_values(b2);
    BankAccount b3(45,3000.5);
    get_values(b3);
    return 0;
 }