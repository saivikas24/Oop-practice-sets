// 7. Counter Class with Static Variable 
// Create a Counter class with: 
// • Private: count 
// • Public: Constructor initializes count 
// • Static variable: totalCount to track all counter objects 

#include<iostream>
using namespace std;

class Counter{
    private:
      int count;

    public:
    static int totalcount;
      Counter(int count){
         this->count=count;
         totalcount++;
      }
    
      void display(){
        cout<<"Count :"<<count<<endl;
      }

      static void show_total_count(){
        cout<<"totalcount :"<<totalcount<<endl;
      }
};

int Counter:: totalcount;

int main(){
    Counter c1(24),c2(3),c3(4);
    c1.display();
    c2.display();
    c3.display();
    Counter::show_total_count();
    return 0;
}