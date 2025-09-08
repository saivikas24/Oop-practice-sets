// 5. Write a C++ program with a class Time having data members hours,
// minutes, seconds. Overload constructors to:
// • Initialize all with zero.
// • Initialize hours and minutes, seconds defaulted to zero.
// // • Initialize all three.
#include<iostream>
using namespace std;
class Time{
 private:
   int hours;
   int minutes;
   int seconds;

   public:
     Time(){
        this->hours=0;
        this->minutes=0;
        this->seconds=0;
     }
      Time(int hrs,int mins){
        this->seconds=0;
        this->hours=hrs;
        this->minutes=mins;
     }
     Time(int hrs,int mins,int secs){
        this->seconds=secs;
        this->hours=hrs;
        this->minutes=mins;
     }
     void get_values(){
        cout<<"Hours:"<<hours<<"\nMinutes:"<<minutes<<"\nSeconds:"<<seconds<<endl;
     }
};

int main(){
    Time t1,t2(2,30),t3(3,45,45);
     t1.get_values();
     t2.get_values();
     t3.get_values();
    return 0;
}