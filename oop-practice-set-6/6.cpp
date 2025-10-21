// 6. Complex Number Class with Friend Function 
// Create a Complex class with: 
// • Private: real, imag 
// • Public: Constructor, display() 
// • Friend function: addComplex() to add two complex numbers 

#include<iostream>
using namespace std;

class complex{
private:
 int real;
 int imag;
public:
 complex(int rl,int ig){
    this->real=rl;
    this->imag=ig;
 }

 void display(){
    cout<<"The complex number is :"<<real<<"+"<<imag<<"i"<<endl;
 }
  friend complex addComplex(const complex& c1,const complex& c2);
};
  
complex addComplex(const complex& c1,const complex& c2){
    complex result;
    result.real=c1.real+c2.real;
    result.imag=c1.imag+c2.imag;
    return result;
}

 

int main(){
    complex c1(1,4),c2(2,4);
    c1.display();
    c2.display();
    addComplex(c1,c2);
   
    return 0;
}