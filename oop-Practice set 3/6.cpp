#include<iostream>
using namespace std;

class car{
   private:
    string brand,model;

    public:
      void set_values(string brd,string mdl){
           brand=brd;
           model=mdl;
      }

      void get_values(){
        cout<<"Brand:"<<brand<<"\n model:"<<model<<endl;
      }

     
};

 int main(){
        car c1,c2;
        c1.set_values("Marutisuzuki","2006");
        c1.get_values();
        c2.set_values("BMW","2021");
        c2.get_values();
      }