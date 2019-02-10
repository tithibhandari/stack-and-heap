#include<iostream>
using namespace std;

	//the function for sorting the elements 
	void quicksort(int l,int h);
	//the function for dividing and conquor 
	int partition(int l,int h); 
    //the main driver function to drive and call
	int main(){
	//declaring the array of definite size
	int arr []={10,16,8,12,15,16,3,9,5};
    //calling the function for quick sort
    void quicksort(int l,int h){
     int j;
    //the condition begins 
     if (l<h){
        j=partition(l,h);
    //a small recursive call to sori
        quicksort(l,j);
        quicksort(j+1,h);
       }  
      }
    //the function for dividing and conquor
       int partition(int l,int h){
      //defing the pivot
      int pivot =arr[l];
      //assigning the value of the lowest element
       int i,j;
      //defing i&j to run from left & right respectively 
       i=l;
       j=h;
      while (i<j){
          do {
           i++;
           }while (arr[i]<=pivot);
          do {
             j--;
             }while(arr[i]>pivot);   
            if (i<j){
			int temp=arr[i];
			arr[i]=arr[j];
 			arr[j]=temp;
           }while(i<j); 
            int v=arr[i];
			arr[l]=arr[i] 
             arr[l]=v; 
          }   
return 0;
}

