#include<iostream>
#include"lab_3.cpp"
using namespace std;

class Stack{
	 public:
   Node* top;
   Linkedlist l1;
   Stack(){
  top == NULL;
  }
  //push the top
 void push(int value){
 l1.insertat(1, value);
 top = l1.head;
}
//pop the top
void pop(){
 l1. delet();
 top = l1.head;  
  }
bool isempty(){
      if (top==NULL)
      return false;
     }
  int size(){
   l1.count();
     }
   void topdisplay(){ 
   }
   void display(){
   l1.display();
   }
  };
 
class queue{
  public:
   Node* front;
   Node* end;
   Linkedlist l2;
   queue(){
  front=NULL;
  end == NULL;
  }
  //push the top
 void Enqueue(int value){
l2.insertat (1,value);
 end=l2.head;
 
  }
//pop the top
void dqueue(){
 l2.delet();
front=l2.tail;
  }
bool isempty(){
   if(front == NULL)return true;
  return false;
     }
  int size(){
   l2.count();
     }
   void topdisplay(){ 
   }
   void display(){
   l2.display();
   }
  };
 int main (){
    Stack s1;
    for (int i=0;i<5;i++){
    s1.push(i);
    s1.display();
    }
    queue q2;
    for (int i=0;i<5;i++){
    q2.Enqueue(i);
    q2.dqueue();
    q2.display();
    }
   return 0;
 }




