// 8. Circle Class with Static Function 
// Create a Circle class with: 
// • Private: radius 
// • Public: Constructor, area() 
// • Static function: setPi() to update value of π 

#include<iostream>
using namespace std;

class circle{
    static float pi;
  private:
     float radius;
   public:
     circle(float r){
        this->radius=r;
     }

    float area(){
        return pi*radius*radius;
    }
  
    static void newpi(float newpi){
            pi=newpi;
    }
 

};

float circle::pi=3.14;  //initializing static variable

int main(){
    circle c1(5);
    cout<<"Area of circle :"<<c1.area()<<endl;
    circle::newpi(3.14567845);
    cout<<"After updating pi:\n Area of c1 :"<<c1.area();
}