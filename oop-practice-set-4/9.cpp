// 9. Write a program to create a class Employee with data members name,
// id, and salary. Implement:
// • A constructor that initializes name and id only.
// • A constructor that initializes all three values.

#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
  string name;
  int id;
  float salary;
  public:
   Employee(string nm,int idd){
    this->name=nm;
    this->id=idd;
    salary=0;
   }
   Employee(string nm,int idd,float salary){
    this->name=nm;
    this->id=idd;
    this->salary=salary;
   }
   void get_values(){
     cout<<"\nName:"<<name<<"\nId:"<<id<<"\nsalary:"<<salary<<endl;
   }
};

int main(){
    Employee e1("saivikas",39),e2("seshu",69,100.90);
    e1.get_values();
    e2.get_values();
    return 0;
}
