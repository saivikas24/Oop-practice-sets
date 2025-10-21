// Q8. Create a program to demonstrate function overloading and overriding. Show
// how compile-time and run-time polymorphism differ. Explain when each is useful
// in real-world applications.
#include<iostream>
using namespace std;

class Account{
public:
  void deposit(float amount){
    cout<<"Deposited "<<amount<<" into your account"<<endl;
  }

  void deposit(float amount,float bonus){
    cout<<"Deposited "<<amount<<"with a bonus of "<<bonus<<endl;
  }

  //Funtction to be overidden (Run time polymorphism)

  virtual void accountType(){
    cout<<"This is a general bank account."<<endl;
  }
};

class savingsAccount:public Account{
    public:
      //Function overriding
      void accountType() override{
        cout<<"This is a savings account with intreset benifits."<<endl;
      }
};

int main(){
    Account acc;
    savingsAccount sav;

    cout<<"---compile time polymorphism (Overloading)"<<endl;
    acc.deposit(500);
    acc.deposit(600,78);

    cout<<"--\n RUn time polymorphism (overriding)";
    Account* ptr;

    ptr=&acc;  //pointing to base class
    ptr->accountType();

    ptr=&sav;  //pointing to derived class object 
    ptr->accountType();
    
    return 0;
} 

//Without virtual, the pointer would call base class function only, ignoring derived class.