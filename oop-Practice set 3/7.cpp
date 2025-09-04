#include<iostream>
#include<math.h>
using namespace std;


class circle{
   private:
     float radius;
     float Area;
     
     float get_area(){
        Area=3.14*(radius*radius);
        return Area;
     }

    public:
      void set_values(float rd){
        radius=rd;
      }

      void get_values(){
        cout<<"Area of circle:"<<get_area();

      }
};

int main(){
    circle c1;
    c1.set_values(8.00);
    c1.get_values();
}