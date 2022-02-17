#include <iostream>
using namespace std;

//Task

//An array with an odd number of elements is said to be centered if all 
//elements (except the middle one) are strictly greater than the value of 
//the middle element. Note that only arrays with an odd number of elements have a 
//middle element. Write a function that accepts an integer array and array size 
//and returns 1 if it is a centered array, otherwise it returns 0.


int isCenteredArray(int arr[],int size){
    int centerElem=0;
    if((size%2!=0)&&(size>=3)){
       centerElem=(size/2);
       for(int i=0; i<size; i++){
          if(arr[i]<arr[centerElem]){
              cout<<"Array is Not Centered "<<endl;
              return 0;
          }
       }
       cout<<"Array is Centered"<<endl;
       return 1;
    }
    cout<<"Array is Not Centered"<<endl;
    return 0;
}

int main(){
int array[7]={3, 2, 1, 4, 1};
cout<<isCenteredArray(array,1)<<endl;
}