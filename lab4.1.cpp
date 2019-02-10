//the library
#include<iostream>
using namespace std;
//first definig a class stack
class Stack {
//defining an array of size 5
public:
int arr[5];
//a pointer to the top of integer type
int top;
/*my first index is zero and there is no other element   in the array*/
//calling a constructor that makes top to -1

Stack (){
 top ==-1;
}
//checking the array in empty or not
//using boolean datatype calling a function
bool isempty(){
   //asking for a condition 
   if (top ==-1){
                return true;
                } 
   else {
         return false;
        }
   }
 //insertion from the top in the array
  void push(int n){
//calling a condition
 if (top>4){
   cout << "stack overflow";
   return;
   }
 else {
 //incrementing the value first then assiging 
   top++;
  arr[top] = n;
  } 
   }
//poping the elements from the array
//calling a pop function 
void pop(){
 //again the conditin begins
  if (top <0){
   cout <<"underflow";
    return;
    }
  else {
   //cout << arr[top];
  arr[top--];
  }
 }
void display (){
 if (isempty()){
 cout <<"stack is empty"<< endl;
  }
 else {
 for (int i=0;i<=top;i++){
   cout << arr[i];
   }
 }
}
 
/*void show_top(){
  if (isempty()){
   cout <<"stack is empty";
   }
else {
cout <<"the element at the top is "<< arr[top];
 }
}*/
};
int main (){
 Stack s1;
s1.push (2);
s1.push (3);
s1.push (1);
s1.push (8);
s1.display ();
//s1.show_top();
s1.pop();
//s1.display ();
//s1.show_top();
return 0;
}



