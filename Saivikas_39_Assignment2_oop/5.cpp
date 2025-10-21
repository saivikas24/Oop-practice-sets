// Q5. Create a program that demonstrates multiple inheritance. Example: A class
// SportsPerson inherits from both Person and Athlete. Explain what ambiguity
// arises and how you resolved it using scope resolution or virtual base classes.

#include<iostream>
using namespace std;

class person{
    protected:
      string name;
      int age;

   public:
    void set_person_data(string name,int age){
        this->name=name;
        this->age=age;
    }

    void display(){
        cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
    }
};

class athlete{
    protected:
      string sport;
    
      public:
       void set_athlete_data(string sport){
        this->sport=sport;
       }

      void display(){
        cout<<"Sport: "<<sport<<endl;
      } 
};

class sportsPerson:public person,public athlete{
  public: 
    void showall(){
        person::display();  //ambiguity both classes contain display()function
        athlete::display(); //we are using scope resolution to specify which one to call

    }
};

int main(){
    sportsPerson sp;
    sp.set_person_data("vikas",19);
    sp.set_athlete_data("volleyball");
    sp.showall();
    return 0;
}