#include<iostream>
using namespace std;

class University {
private:
  string name;
  int ranking;
  
  public:
    void set_values(string nm,int rk){
        name=nm;
        ranking=rk;
    }

    void get_values(){
        cout<<"\nUniversity:"<<name<<"\nRanking:"<<ranking;
    }
};

int main(){
    University u1,u2;
    u1.set_values("vit",1);
    u1.get_values();
    u2.set_values("Srm",2);
    u2.get_values();

}