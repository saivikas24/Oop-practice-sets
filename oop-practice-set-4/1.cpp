#include<iostream>
#include<math.h>
using namespace std;

class Rectangle{
   private:
     float length;
     float breadth;

    public:
       Rectangle(float l,float b){  //constructor
        this->length=l;
        this->breadth=b;
       }
       
       friend void get_values(Rectangle r);
};

 void get_values(Rectangle r){
           cout<<"The area of Rectangle:"<< r.length*r.breadth;
        }


int main(){
  Rectangle r1(2.0,4.0);
     get_values(r1);
    return 0;
}

