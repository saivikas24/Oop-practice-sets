// . Student Class with Constructor Overloading 
// Create a Student class with: 
// • Private: name, rollNumber, marks 
// • Public: Constructor overloading: 
// – Default constructor 
// – Constructor with name and rollNumber 
// – Constructor with name, rollNumber, and marks 

#include<iostream>
#include<string>
using namespace std;

class student{
private:
  string name;
  int roll;
  float marks;

public:
    static int count;
  student(){
    this->name="unknown";
    this->roll=0;
    this->marks=0;
    count++;
  }
   student(string name,int roll){
    this->name=name;
    this->roll=roll;
    this->marks=0;
    count++;
  }
   student(string name,int roll,float marks){
    this->name=name;
    this->roll=roll;
    this->marks=marks;
    count++;
  }

  void get_details(){
    cout<<"Name: "<<name<<"|"<<"Roll :"<<roll<<"|"<<"Marks :"<<marks<<endl;
  }
  
  static void show_count(){
    cout<<"Total number of students:"<<count<<endl;
  }
};

int student ::count=0;
int main(){
    student s3();
    student s1("saivikas",39);
    student s2("seshu",69,99.69);
    s1.get_details();
    s2.get_details();
    student::show_count();
    return 0;
}