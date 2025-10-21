// 1. Bank Account with Friend Function and Static Variable Create a Bank class with: 
// • Private: accountNumber, balance 
// • Public: Constructor to initialize, deposit(), and withdraw() • Static variable: interestRate 
// • Friend function: applyInterest() to apply interest to the balance 

#include<iostream>
using namespace std;

class BankAccount{
  private:
    int accountNumber;
    float balance;
  public:
  static float intrestRate; //static variable
  //constructor to initialize the values
    BankAccount(int acc,float bal){
        this->accountNumber=acc;
        this->balance=bal;
    }

     void deposit(float n){
          this->balance=this->balance+n;

     }

     void withdraw(float w){
       if(w<0){
        cout<<"Enter correct amount"<<endl;
       }
       else if(w>balance){
        cout<<"Insufficient balance in account"<<endl;
       }
       else{
        this->balance=this->balance-w;
       }
     }

     void get_details(){
      cout<<"Account number: "<<accountNumber<<" | Balance :"<<balance<<endl;
     }
    friend void applyIntrest(BankAccount &acc);
};
 
float BankAccount ::intrestRate=5.0;//5%intrest rate
  
void applyIntrest(BankAccount &acc){
  acc.balance=acc.balance+(acc.balance*BankAccount::intrestRate/100);
}

int main(){
  BankAccount b1(101,1000);
  b1.deposit(500);
  b1.withdraw(200);
  b1.get_details();

  cout<<"\n Applying intrest rate.."<<endl;
  applyIntrest(b1);
  b1.get_details();

  return 0;
}