// //Q1. Create a class that behaves like a simple list in Python. It should support adding,
// removing, displaying, and getting the size of the list. Explain why you used con-
// structors and any operator overloading (if used).

#include<iostream>
using namespace std;

class simple_list{
    private:
      int arr[100];
      int length;

     public:
       simple_list(){
        length=0;
        cout<<"Simple list created :"<<endl;
       }
       
       void add(int value){
        if(length<100){
            arr[length++]=value;
       }
       else{
        cout<<"array full"<<endl;
       }  
       }

       void remove(int value){
         int pos=-1;
         for(int i=0;i<length;i++){  //loop for finding the value
            if(arr[i]==value){
                pos=i;
                break;
            }
         }

         if(pos!=-1){
            for(int i=pos;i<length-1;i--){  //loop for rearranging the elements
                arr[i]=arr[i+1];
            }
            length--;
            cout<<"Value removed succesfully";
         }
         else{
            cout<<"Value not found";
         }
       }

       void display(){
        cout<<"List elements: ";
        for(int i=0; i<length;i++){   //Function to display the array elements
            cout<<arr[i]<<" ";
        }    
        cout<<endl; 
       }

       int size() {  //To display the size of the list
        return length;
    }
};

int main(){
    simple_list s;
    s.add(5);
    s.add(6);
    s.remove(6);
    s.display();
    return 0;
}