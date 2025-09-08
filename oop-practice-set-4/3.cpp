#include<iostream>
using namespace std;
class complex{
    private:
      float real,imag;

    public:
      complex(){  //default constructor
       this-> real=0;
        this->imag=0;
      }

      complex(float rel){ //single parameter constructor
        this->real=rel;
       this-> imag=0;
      }
 
      complex(float rel,float img ){ //double parameter constructor
        this->real=rel;
        this->imag=img;
      }
      friend void get_values(complex c);
};

  void get_values(complex c){
     cout<<c.real<<"+"<<c.imag<<"i"<<endl;
  }

  int main(){
    complex c1;  //Default constructor
    complex c2(2); //single parameter constructor
    complex c3(6,9); //Two parameter constructor
    get_values(c1);
    get_values(c2);
    get_values(c3);
    return 0;
  }