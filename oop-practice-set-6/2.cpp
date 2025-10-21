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
  student(){
    this->name="unknown";
    this->roll=0;
    this->marks=0;
  }
   student(string name,int roll){
    this->name=name;
    this->roll=roll;
    this->marks=0;
  }
   student(string name,int roll,float marks){
    this->name=name;
    this->roll=roll;
    this->marks=marks;
  }

  void get_details(){
    cout<<"Name: "<<name<<"|"<<"Roll :"<<roll<<"|"<<"Marks :"<<marks<<endl;
  }
};

int main(){
    student s3();
    student s1("saivikas",39);
    student s2("seshu",69,99.69);
    s1.get_details();
    s2.get_details();
    return 0;
}