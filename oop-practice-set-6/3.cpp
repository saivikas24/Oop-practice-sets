// 3. Employee Class with Static Count 
// Create an Employee class with: 
// • Private: id, salary 
// • Public: Constructor to initialize values 
// // • Static variable: employeeCount (to track the number of employees) 

#include <iostream>
using namespace std;

class employee{
private:
  int id;
  float salary;

public:
    static int count;
   employee(int id,float salary){
      this->id=id;
      this->salary=salary;
      count=count+1;
   }

    void get_details(){
        cout<<"Employee Id:"<<id<<"\nsalary"<<salary<<endl;
    }

    static void show_count(){ //static function to show employee count   
        cout<<"Employee_count: "<<count<<endl;
    }

};

int employee :: count=0;

int main(){
    employee e1(24,50000.6325);
    e1.get_details();
    employee e2(25,25000.36946);
    e2.get_details();
    employee::show_count();
    return 0 ;
}