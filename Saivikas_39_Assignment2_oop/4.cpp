// Q4. Implement a program demonstrating multilevel inheritance. For example: Person
// → Employee → Manager. Show how data and functions are passed through the
// inheritance chain. Explain why access specifiers matter here.

#include<iostream>
using namespace std;

class person{
    protected:
      string name;
      int age;
    public:
       void set_person(string name,int age){   //Setting values manually to understand the concept of inheritence
        this->name=name;
        this->age=age;
       }

    void display_person(){
        cout<<"name: "<<name<<"\nAge"<<age<<endl;  
    }
};

class employee:public person{
    protected:
     int id;
     int sal;
    public:
       void set_employee(int id, int sal){
                this->id=id;
                this->sal=sal;
       }

       void display_employee(){
        cout<<"Id: "<<id<<"\nSal"<<sal<<endl;
       }
};

class manager:public employee{
  protected:
    string dept;
    float bonus;
    public: 
       void set_manager(string dept,float bonus){
            this->dept=dept;
            this->bonus=bonus;
       }  
    
    void display_manager(){
        display_person();
        display_employee();
        cout<<"Department: "<<dept<<"\nBonus"<<endl;
    }
};

int main(){
    manager m1;      //Created object using the manager because it access all three objects 
    m1.set_person("Saivikas",19);
    m1.set_employee(39,45000);
    m1.set_manager("Data science",8700);
    m1.display_manager();
}