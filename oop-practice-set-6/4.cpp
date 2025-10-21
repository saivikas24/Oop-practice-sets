// 4. Rectangle Class with Friend Function 
// Create a Rectangle class with: 
// • Private: length, breadth 
// • Public: Constructor, area() 
// • Friend function: compareArea() to compare areas of two rectangles 

#include<iostream>
using namespace std;

class rectangle{
   private:
       float length;
       float breadth;
    public:
       rectangle(float lngth,float width){
           this->length=lngth;
           this->breadth=width;
        }

        float area(){
            return length*breadth;
        }
        friend void compareArea(rectangle r1,rectangle r2);
};

    void compareArea(rectangle r1,rectangle r2){
          if(r1.area()>r2.area()){
              cout<<"r1 has more area";
          }
          else if(r2.area()>r1.area()){
              cout<<"r2 has more area";
          }
          else{
            cout<<"Both have equal area";
          }
    }

int main(){
    rectangle r1(4,6),r2(9,6);
   cout<<"area of reactangel 1"<< r1.area();
    cout<<"area of reatangle 2"<<r2.area();
    compareArea(r1,r2);
    return 0;
}