// 7. Create a class Distance with data members feet and inches. Imple-
// ment constructors for:

// • Default initialization.
// • Initialization using feet only.
// • Initialization using feet and inches.
// Also, write a function to display the distance.

#include<iostream>
#include<string>
using namespace std;

class Distance {
    private:
    float feet,inches;
    public:
      Distance(){
       this->feet=0;
       this->inches=0;
      }
       Distance(float ft){
       this->feet=ft;
       this->inches=0;
      }
      Distance(float ft,float inc){
       this->feet=ft;
       this->inches=inc;
      }

      void get_values(){
          cout<<"\nfeet:"<<feet<<"\nInches:"<<inches<<endl;
      }
};

int main(){
   Distance d1,d2(3.4),d3(3.5,5.6);
   d1.get_values();
   d2.get_values();
   d3.get_values();
   
    return 0;
}