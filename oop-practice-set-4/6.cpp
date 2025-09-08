// 6. Design a class Book with attributes title, author, and price. Provide

// constructor overloading to allow creating:

// • Book with title only.
// • Book with title and author.
// • Book with title, author, and price. 

#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
   string title;
   string author;
   float price;
public:
   //constructor
   Book(){
    this->title="";
    this->price=0;
    this->author="";
   }
   Book(string ttl){
    this->title=ttl;
    this->price=0;
    this->author="";
   }
   Book(string ttl,string author){
    this->title=ttl;
    this->price=0;
    this->author=author;
   }
     Book(string ttl,string author,float price){
    this->title=ttl;
    this->price=price;
    this->author=author;
   }
   void get_values(){
    cout<<"\nBook title:"<<title<<"\nAuthor:"<<author<<"\nPrice:"<<price<<endl;
   }
};

int main(){
    Book b1,b2("sai"),b3("sai","vikas"),b4("sai","vikas",99.9);
    b1.get_values();
     b2.get_values();
      b3.get_values();
       b4.get_values();
    
    return 0;

}