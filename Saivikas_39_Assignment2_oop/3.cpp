// Q3. Write a program to demonstrate single inheritance. Create a base class Shape
// and a derived class Rectangle. Include methods to calculate area and perimeter.
// Explain why inheritance is preferred over writing separate classes for each shape.
#include<iostream>
using namespace std;

class shape{
  protected:
     float length;
     float breadth;
  public:
      shape(float len,float bre){
        this->length=len;
        this->breadth=bre;
      }
     
};

class rectangle:public shape{
  public:
     rectangle(float len,float bre):shape(len,bre){

     }

     float area(){
        return length*breadth;
     }

     float perimeter(){
        return 2*(length+breadth);
     }

     void display(){
        cout<<"The area of the rectangle: "<<area()<<endl;
        cout<<"The perimeter of the rectanle"<<perimeter()<<endl;
     }
     
};

int main(){
    rectangle r(10,5);
    r.display();
}
