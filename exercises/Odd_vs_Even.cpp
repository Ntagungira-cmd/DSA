#include<iostream>
using namespace std;

//Write a function that takes an array of integers as an argument 
//and returns a value based on the sums of the even and odd numbers
//in the array. Let X = the sum of the odd numbers in the array 
//and let Y = the sum of the even numbers. The function should return X – Y


int Odd_vs_even(int arr[],int size){
    float X=0;
    float Y=0;
    for(int i=0; i<size; i++){
      
       if((arr[i]%2==0)&&(arr[i]!=0)){
           Y=Y+arr[i];
       }else if(arr[i]==1){
           X=X+arr[i]; 
       }else{
           X=X+arr[i];
        }
     
    }
   
    return X-Y;
}

int main(){
int array[4]={3, 2, 3, 4};
cout<<Odd_vs_even(array,4)<<endl;
}