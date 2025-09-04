
#include<iostream>
using namespace std;

class student{
    private:
       string name;
       int age;
    
    public:
       void set_values(string nm,int ag){
       name=nm;
       age=ag;
       }
       void get_values(){
         cout<<"Name:"<<name<<"Age:"<<age;
       }
};

int main(){
   student s1;
   s1.set_values("saivikas",99);
   s1.get_values();
}