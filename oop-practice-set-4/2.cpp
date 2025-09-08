#include<iostream>
#include<string.h>
using namespace std;

class Student {
    private:
       string name;
       int age;
       float marks;
 
    public:
    Student(){
       this-> name="seshu";
       this-> age=69;
        this->marks=99;
    }
       Student(string nm,int ag,float mr){  //constructor
        this->name=nm;
        this->age=ag;
        this->marks=mr;
       }

    friend void get_values(Student s);
};

void get_values(Student s){
    cout<<"\nName:"<<s.name<<"\nAge:"<<s.age<<"\nMarks:"<<s.marks<<endl;
}

int main(){
   Student s1;
    get_values(s1);
    Student s2("Saivikas",19,90);
    get_values(s2);
    return 0;
}