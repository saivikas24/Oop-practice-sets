#include<iostream>
using namespace std;

class Employee{
    private:
      int id;
      float salary;  

    public:
      void set_values(int roll,float sal){
        id=roll;
        salary=sal;
      }

      void get_values(){
        cout<<"\nId:"<<id<<"\nsalary:"<<salary;
      }
};

int main(){
    Employee e1,e2;
    e1.set_values(24,23689.33);
    e1.get_values();
    e2.set_values(03,27369.0236);
    e2.get_values();

}