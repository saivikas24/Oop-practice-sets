// 5. Car Class with Destructor 
// Create a Car class with: 
// • Private: brand, price 
// • Public: Constructor, Destructor (display a message when object is destroyed) 

#include<iostream>
using namespace std;

class car{
  private:
    string brand;
    float price;
  public:
    car(string b,float p){
        this->brand=b;
        this->price=p;
    }

    void get_details(){
        cout<<"Brand:"<<brand<<"|"<<"Price"<<price<<endl;
    }
    ~car(){
    cout<<"\nDestructor called for "<<brand;
  }
};

  

  int main(){
    car c1("bmw",508610.33);
    car c2("range rover",68418060.65);
    c1.get_details();
    c2.get_details();
  }