#include<iostream>
#include<string>
using namespace std;

class details{
    private:
      string name;
      int age;
      string city;
      float marks;

      public:
        void set_values(string nm,int years,string place,float mr){
            name=nm;
            age=years;
            city=place;
            marks=mr;
        }

        void get_values(void ){
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter age:";
            cin>>age;
            cout<<"Enter city";
            cin>>city;
            cout<<"enter marks:";
            cin>>marks;
            cout<<"Name:"<<name<<"Age"<<age<<"City"<<city<<"marks"<<marks<<endl;
        }


};

int main(){
    details d1;
    int age;
    float marks;
    string name,city;
    d1.set_values(name,age,city,marks);
     d1.get_values(); 
}