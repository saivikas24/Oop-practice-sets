// // Q9. Write a class BankAccount with features like deposit(), withdraw(), and display().
// Use constructor initialization and show how encapsulation prevents invalid access.
// Explain why data hiding is essential in banking systems.
#include<iostream>
using namespace std;

class BankAccount{
    private:
      int accountNumber;
      float balance;
    public:
       BankAccount(int accNo,float iniBal){
        this->accountNumber=accNo;
        if(iniBal<0){
            balance=0; //To prevent negative balance
        }
        else{
            balance=iniBal;
        }
       }

       void deposit(float amount){
        if(amount>0){
            balance+=amount;
             cout << "Deposited: " << amount << endl;
        }
        else{
            cout<<"Invalid amount";
        }
       }

       void withdraw(float amount){
        if(amount>0 &&amount<=balance){
            balance=balance-amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else{
            cout<<"Invalid amount or insuffient balance";
        }
       }

       void display(){
        cout<<"Account number :"<<accountNumber<<endl;
        cout<<"Balance :"<<balance<<endl;
       }
};

int main(){
    BankAccount acc1(101,2000);
    acc1.display();
      acc1.deposit(300);
    acc1.withdraw(700);
    acc1.display();
    return 0;
}