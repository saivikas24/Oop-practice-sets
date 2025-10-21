// Q6. Write a program where two different class objects share data using a friend
// function. For example, a class Student and a class Sports share marks and
// scores. Explain why the friend function was needed instead of a member function.

#include<iostream>
using namespace std;
class sports;  //forward declaration
class student{
 protected:
  float marks;

  public:
    student(float marks){
        this->marks=marks;
    }
    friend void total_performance(student s,sports sp);
}; 


class sports{
   protected:
      float score;

    public:
        sports(float score){
                this->score=score;
        }
        friend void total_performance(student s,sports sp);
}; 

   void total_performance(student s,sports sp){  //friend function definition
    cout<<"Marks: "<<s.marks<<"\nScore"<<sp.score<<endl;
    cout<<"Total marks:"<<s.marks+sp.score<<endl;
    
   }

   int main(){
     student s(65);
     sports sp(25);
     total_performance(s,sp);
    return 0;
   }