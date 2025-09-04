#include<iostream>
using namespace std;

class book{
   private:
   string title;
   float price;

   public:
      void set_values(string bk,float pr){
         title=bk;
         price=pr;
      }

     void get_values(){
        cout<<"Title:"<<title<<"\nPrice:"<<price;
      }
};

int main(){
    book b1,b2;
    b1.set_values("The mind",999.99);
    b1.get_values();
    b2.set_values("The body",199.66);
    b2.get_values();
}