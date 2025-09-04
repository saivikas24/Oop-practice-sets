#include<iostream>
using namespace std;

class Rectangle {
    private:
    float length;
    float width;

    public:
     void set_values(float lt,float bt){
        length=lt;
        width=bt;
     }

     void get_values(){
        cout<<"\nArea of the give rectangle:"<<length*width;
     }
};

int main(){
    Rectangle r1,r2;
    r1.set_values(5,4);
    r1.get_values();
    r2.set_values(4,6);
    r2.get_values();
}

