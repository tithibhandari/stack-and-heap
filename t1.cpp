#include<iostream>
using namespace std;

//to make a class of queue
class queue{
//to define an array of definite size
int arr[5];
//to define a pointer that will show front and end
int front;
int end;
//a constructor that will make them -1
public:
queue(){
front == -1;
end ==-1;
}

// to check whether queue is empty 
bool isempty(){
 if (front ==-1 && end ==-1){
    return true;
    }
  else {
        return false ;
       }
  }
//start to insert elemants from end part
void Enqueue(int n){
  if (end ==4){
  cout <<"it is full"<<endl;
   }
 else {
  //inserting the first element 
  if (front == -1){
  //making our front to point to null 
    front = 0;
  //inserting the value first
   arr[end]= n;
  //after insertion incrementing end
   end++;
   } 
  }
 }
//definig another function to dequeue the values
void Dequeue(){
  if (isempty()){
       cout << "the queue is empty";
      }
  else {
 //when there will be a single element
   if(front == end){
    front =-1;
     end=-1;
   }
  else {
       front ++;
      }
  }
}
//to display
void display(){
	  //two cases may arise 
	if (isempty()){
		    cout << "the queue is empty";
		    }
	else {
	  for (int i=front;i<=end;i++){
	   cout << arr [i];
	   }
	  }
 }
};
int main(){
queue q1;
q1.Enqueue(1);
q1.Enqueue(4);
q1.Enqueue(5);
q1.Enqueue(2);
q1.display();
q1.Dequeue();
q1.display();
return 0;
}


