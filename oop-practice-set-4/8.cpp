// 8. Define a class Car with members brand, model, and price. Overloadconstructors to:
// • Initialize brand only.
// • Initialize brand and model.
// • Initialize brand, model, and price.
#include<iostream>
#include<string>
using namespace std;

class Car{
private:
  string brand;
  string model;
  float price;
  public:
    Car(){
        this->brand="";
        this->model="";
        this->price=0;
    }
    Car(string br){
        this->brand=br;
         this->model="";
        this->price=0;
        }
     Car(string br,string mdl){
        this->brand=br;
         this->model=mdl;
        this->price=0;
        }
        Car(string br,string mdl,float pr){
        this->brand=br;
         this->model=mdl;
        this->price=pr;
        }

        void get_values(){
            cout<<"\nBrand:"<<brand<<"\nModel:"<<model<<"\nPrice:"<<price<<endl;
        }
        
};


int main(){
    Car c1,c2("bmw"),c3("audi","x8"),c4("mercedes","Gclass",70000.90);
    c1.get_values();
     c2.get_values();
      c3.get_values();
       c4.get_values();
    return 0;
}