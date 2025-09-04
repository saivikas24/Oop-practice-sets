#include<iostream>
using namespace std;

class Temperature{
private:
 float celcius;

 public:
   void set_celcius(float cls){
       celcius=cls;
   }

   void get_farenheit(){
        float farenheit=(celcius*9.0/5.0)+32;
        cout<<"Tempereature in Farenheit:"<<farenheit<<endl;
   }
};

int main(){
    Temperature t1;
    t1.set_celcius(37.0);
    t1.get_farenheit();
}
